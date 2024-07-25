#include<stdio.h>
void multiply(int*,int);
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    multiply(arr,n);
    for(i=0;i<n;i++){
        printf("%d",*(arr+i));
}
}

void multiply(int*a,int n){
int i;
for(i=0;i<n;i++){
*(a+i)=*(a+i)*3;
}
}