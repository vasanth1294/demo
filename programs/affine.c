#include<stdio.h>
int main()
{
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char s[30];
	int i,j,an,b,temp=0,cipher;
	int t[10];
	printf("enter the text:");
	scanf("%s",&s);
	printf("%s",&s);
	printf("enter the integer a");
	scanf("%d",&an);
	printf("enter the integer b");
	scanf("%d",&b);
	
	for(i=0;s[i];i++){
		for(j=0;a[j];j++){
			if(s[i]==a[j]){
				cipher=(an*j+b)%26;
			}
		}
		printf("\nencryption");
		printf("%d",cipher);
		
	}
	
}
