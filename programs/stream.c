#include <stdlib.h>
#include <time.h>
int main()
{
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char s[10];
	srand(time(NULL));
	int k,i,j,tmp=0;
	printf("\nenter the text : ");
	scanf("%s",&s);
	for(i=0;s[i];i++)
	{
		for(j=0;a[j];j++)
		if(s[i]==a[j])
		{
			tmp=rand()%27;
			tmp=(tmp+j)%26;
			printf("%c",a[tmp]);
		}
	}
}
