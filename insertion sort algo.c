#include<stdio.h>
void sort(int[],int);
int main(){
    int i;
    int arr[]={34,77,93,1,11,-1};
    sort(arr,6);
    for(i=0;i<6;i++){
        printf("%d\t", *(arr+i));
    }
}
void sort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}