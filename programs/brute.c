#include<stdio.h>
int main()
{
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char s[50];
	int k,i,j,tmp=0,l;
	printf("\nenter the text : ");
	scanf("%s",&s);
	for(l=1;l<=30;l++)
	{
		printf("\nkey%d : ",l);
	for(i=0;s[i];i++)
	{
		for(j=0;a[j];j++)
		{
		if(s[i]==a[j])
		{
			tmp=(j-l);
			if(tmp<0)
			{
				tmp=tmp+26;
			}
			printf("%c",a[tmp]);
		}
	}
}
}
}
