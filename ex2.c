#include<stdio.h>
int t=0;
char s1[50]={'\0'};
void reverse(char s[])
{	if(s[0]!='\0')
	{	reverse(s+1);
		*(s1+t++)=*s;
	}
}
main()
{
	char s[50]={'\0'};
	printf("������һ���ַ�����\n");
	gets(s);
	reverse(s);
	puts(s1);

}
	