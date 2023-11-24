#include<stdio.h>
#include <time.h>
int main()
{
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char s[10];
	int k,i,j,tmp=0,key[10]={9,0,1,7,23,15,21,14,11,11,2,8,9};
	printf("\nenter the text : ");
	scanf("%s",&s);
	for(i=0;s[i];i++)
	{
		for(j=0;a[j];j++)
		if(s[i]==a[j])
		{
			tmp=(key[i]+j)%26;
			printf("%c",a[tmp]);
		}
	}
}
