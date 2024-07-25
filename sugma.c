#include<stdio.h>
#include<math.h>
int main(){
	int i;
	float xysum,xsum,ysum,x2sum,y2sum,n=7,r;
	float x[]={34.22,39.87,41.85,43.23,40.06,53.29,53.29};
	float y[]={102.43,100.93,97.43,97.81,98.32,98.32,100.07};
	for(i=0;i<7;i++){
		xysum=xysum+(x[i]*y[i]);
		xsum=xsum+x[i];
		ysum=ysum+y[i];
		x2sum=x2sum+pow(x[i],2);
		y2sum=y2sum+pow(y[i],2);
	}
	r=(xysum-(xsum*ysum))/(sqrt(((n*x2sum)-pow(xsum,2))*((n*y2sum)-pow(ysum,2))));
	printf("%f", r);

}
