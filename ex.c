#include<stdio.h>
int n,s;
int main()
{
	n=1;
       while	(n<=5)

       {	       s=1;

		while (s<=n)
		{
			printf("*");
			s=s+1;
		}
		printf("/n");

	}
	n=n+1;
	return 0;
}

