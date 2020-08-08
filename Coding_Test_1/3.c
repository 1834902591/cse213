#include<stdio.h>


int main(){
int i,n,c;
int min1, min2;
int arr[100]={10,2,30,4,55,60,7,8,90,100};
int size=10;

for(i=0;i<size;i++){
    printf("%d ", arr[i]);
}
printf("\n");

min1=arr[0];

for(c=0;c<size;c++){
    if(arr[c]<min1){
        min2=min1;
        min1=arr[c];
        n=c+1;
    }
   else if(arr[c]<min2 && arr[c]>min1){
     min2=arr[c];
   }
}

printf("First Minimum:%d\n",min1);
printf("Second Minimum:%d\n",min2);
return 0;
}
