#include<stdio.h>
#include<string.h>
int main(void){
	char s[100000];
	int len;
	scanf("%s",&s);
	len=strlen(s);
	s[len]='.';
	s[len+1]='\0';
	printf("%s",s);
}
