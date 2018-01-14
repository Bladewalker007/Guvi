#include<stdio.h>
int main(void){
	int n,fact=1;
	scanf("%d",&n);
	while(n>-1){
		if(n==0){
			fact=fact*1;
		}
		else{
			fact=fact*n;
		}
		n--;
	}
	printf("%d",fact);
}
