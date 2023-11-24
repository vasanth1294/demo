#include<stdio.h>
#include<string.h>
int main()
{
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char s[60],key[10]="deceptive";
	int i,j,k,t1=0,t2=0,flag=0,res=0;
	printf("\nenter the text :");
	scanf("%s",&s);
	for(i=0;s[i];i++)
	{
		for(j=0;a[j];j++)
		{
			
			if(a[j]==s[i])
			{
				t1=j;
			}
			if(a[j]==key[flag])
			{
				t2=j;
			}
			
		}
		flag++;
		res=t1+t2;
		if(flag==strlen(key))
		{
			flag=0;
		}
		if(res>=26)
		{
			res=res%26;
		}
		printf("%c",a[res]);
	}
}
