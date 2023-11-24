#include<stdio.h>
int main()
{
	int mat[10][10]={{17,17,5},{21,18,21},{2,2,19}},temp[10][3],i,j,k,l,res[10][10];
	char s[60];
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	printf("\nenter the text :");
	scanf("%s",&s);
	for(i=0;s[i];i+=3)
	{
		
		for(j=0;a[j];j++)
		{
			if(s[i]==a[j])
			{
				temp[0][0]=j;
			}
			else if(s[i+1]==a[j])
			{
				temp[0][1]=j;
			}
			else if(s[i+2]==a[j])
			{
				temp[0][2]=j;
			}
		}
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				res[j][k]=0;
				for(l=0;l<3;l++)
				{
					res[j][k]+=temp[j][l]*mat[l][k];
				}
			}
		}
		for(j=0;j<1;j++)
		{
			for(k=0;k<3;k++)
			{
				res[j][k]=(res[j][k])%26;
				for(l=0;a[l];l++)
				{
					if(res[j][k]==l)
					{
						printf("%c ",a[l]);
					}
				}
			}
			printf("\n");
		}
		
	}
	
}
