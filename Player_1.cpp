#include<stdio.h>
#include<string.h>
int main(void){
	char s[100000];
	int len,i;
	scanf("%s",&s);
	len=strlen(s);
	for(i=len-1;i>=0;i--){
		printf("%c",s[i]);
	}
}
