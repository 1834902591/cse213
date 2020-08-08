#include<stdio.h>
void print_array();

int main(){

print_array();

return 0;
}
void print_array(){
int i,N;
int *p;
int arr[100];
p=&arr[0];
scanf("%d",&N);
for(i=0;i<N;i++){
    scanf("%d", (p+i));
}
printf("\n");

        if((p+i)>N){
            printf("Array OverFlow\n");
        }
for(i=0;i<N;i++){
    printf("%d\n",*(p+i));

}
}
