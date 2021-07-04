#include <stdio.h>
int main()
{
	int a,b,i,j,k;
	printf("Enter the range from lower to higher \n");
	scanf("%d%d", &a, &b);
	for (i=a+1;i<b;i++) {
			k=0;
		for (j=2; j<i; j++) {
			
			if (i%j==0) {
				k=k+1;
			}
			
		}
		if (k<1) {
			printf("%d\n", i);
		}
	
	}
	return 0;
}

	
