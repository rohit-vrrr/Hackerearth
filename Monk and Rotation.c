#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	while(num--)
	{
		int n,k,pos,size,i;
		scanf("%d %d", &n,&k);
		int a[n],x;
		k=k%n;

		for(i=0;i<n;i++)
		{
			scanf("%d", &x);
			pos = ((i+k)>=n)?((i+k)-n):(i+k);
			a[pos] = x;
		}

		for(i=0;i<n;i++)
		{
			printf("%d ", a[i]);
		}

		printf("\n");
	}

	return 0;
}
