#include<stdio.h>
#include<math.h>
int main(){
    int i;
    float n=0,sum,mean,yo,sd;
    int arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    for(i=0;i<15;i++){
        sum=sum+arr[i];
        n++;
    }
    mean=sum/n;
    printf("%f\n", mean);
     for(i=0;i<15;i++){
    yo=yo+pow(arr[i]-mean,2);
     }
     sd=(sqrt(yo))/n;
     printf("%f %f ", mean, sd);
}