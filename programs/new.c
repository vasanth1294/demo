#include<stdio.h>
int main()
{
	int i,j,k,temp,temp1;
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char b[30];
	char c[30];
	printf("enter the text:");
	scanf("%s",&b);
	printf("enter the key value");
	scanf("%d",&k);
	for(i=0;b[i];i++){
		temp=0;
		for(j=0;a[j];j++){
			if(b[i]==a[j]){
				temp=k+j;
			}
		}
		if(temp<26){
			printf("%c",a[temp]);
		}
		else{
			temp1=temp%26;
			printf("%c",a[temp1]);
		}
	
	}	
}
