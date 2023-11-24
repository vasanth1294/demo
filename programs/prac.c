#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[5][5]={{'m','o','n','a','r'},{'c','h','y','b','d'},{'e','f','g','i','k'},{'l','p','q','s','t'},{'u','v','w','x','z'}};
	char s[50];
	int i,j,k,tmp1,tmp2,tmp3,tmp4,min1,max1,min2,max2,count;
	printf("enter the text:");
	scanf("%s",&s);
	for(k=0;s[k];k+=2){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(s[k]==a[i][j]){
					tmp1=i;
					tmp2=j;
				}
				if(s[k+1]==a[i][j]){
					tmp3=i;
					tmp4=j;
				}
			}
		}
		if(tmp1<tmp3){
			min1=tmp1;
			max1=tmp3;
		}
		else{
			min1=tmp3;
			max1=tmp1;
		}
		if(tmp2<tmp4){
			min2=tmp2;
			max2=tmp4;
		}
		else{
			min2=tmp4;
			max2=tmp2;
		}
		count=0;
		for(i=min1;i<=max1;i++){
			for(j=min2;j<=max2;j++){
				count++;
			}
		}
		if(sqrt(count)==(int)sqrt(count)){
			printf("%c",a[tmp1][tmp4]);
			printf("%c",a[tmp3][tmp2]);
		}
		else if(tmp2==tmp4 && max1!=4){
			printf("%c",a[tmp1+1][tmp2]);
			printf("%c",a[tmp3+1][tmp4]);
		}
		else if(tmp2==tmp4 && max1==4){
			printf("%c",a[min1+1][tmp4]);
			printf("%c",a[max1-4][tmp2]);
		}
		else if(tmp1==tmp3 && max2!=4){
			printf("%c",a[tmp1][tmp2+1]);
			printf("%c",a[tmp3][tmp4+1]);
		}
		else if(tmp1==tmp3 && max2==4){
			printf("%c",a[tmp3][min2+1]);
			printf("%c",a[tmp1][max2-4]);
		}
		else{
			printf("%c",a[tmp3][tmp2]);
			printf("%c",a[tmp1][tmp4]);
		}
	}
}






