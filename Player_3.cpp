#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	if(n!=0){
	while(n!=0){
		printf("%d",(n%10));
		n=n/10;
	}
	}
	else{
		printf("0");
	}
}
