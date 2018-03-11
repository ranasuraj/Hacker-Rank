#include<stdio.h>
#include<string.h>
int main()
{
	char psw[50];
	scanf("%s",psw);
	int n=0,a=0,s,l;
	l=strlen(psw);
	for(int i=0;i<l;i++)
	{
		if(psw[i]>=48 && psw[i]<=58)
		{
		n++;	
		}
	}
	for(int j=0;j<l;j++)
	{
		if(psw[j]>=65 && psw[j]<=91)
		{
			a++;
		}
	}
	for(int k=0;k<l;k++)
	{
		if(psw[k]=='$' || psw[k]=='#' || psw[k]=='@')
		{
			s++;
		}
	}
	if(l>8 && a>0 && s>0 && n>0)
	{
		printf("%s is Strong",psw);
	}
	else
	{
		printf("%s is Not strong",psw);
	}
	return 0;
}
