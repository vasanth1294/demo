#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int modExp(int base, int exp, int mod) {
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
	int p,q,i,j,k,n,pi,e,max,res=0,d,m;
	printf("\nenter the p : ");
	scanf("%d",&p);
	printf("\nenter the q : ");
	scanf("%d",&q);
	n=p*q;
	pi=(p-1)*(q-1);
	for(i=2;i<pi;i++)
	{
		max=0;
		for(j=1;j<=pi;j++)
		{
			if(pi%j==0 && i%j==0)
			{
				if(max<j){
				max=j;
				e=i;
			}
			}
		}
		if(max==1)
		break;
	}
	d=0;
	while(res!=1)
	{
		d++;
		res=(e*d)%pi;
	}
	printf("\nenter the m :");
	scanf("%d",&m);
	printf("%d",modExp(m,e,n));

}
