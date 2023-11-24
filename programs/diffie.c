#include<stdio.h>
#include<stdlib.h>
int mod(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        exp = exp >> 1;
        base = (base * base) % mod;
    }

    return result;
}
int main()
{
	int i,j,xa,xb,ya,yb,k1,k2,a,q;
	printf("enter the a value : ");
	scanf("%d",&a);
	printf("enter the q value : ");
	scanf("%d",&q);
	printf("enter the xa value : ");
	scanf("%d",&xa);
	printf("enter the xb value : ");
	scanf("%d",&xb);
	ya=mod(a,xa,q);
	yb=mod(a,xb,q);
	
	k1=mod(ya,xb,q);
	k2=mod(yb,xa,q);
	
	printf("%d\n",k1);
	printf("%d",k2);
	
	
}
