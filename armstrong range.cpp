
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,g,e,i,s=0,r;
	printf("Range of numbers ");
	scanf("%d%d", &a, &b);
	
	for (i=a; i<=b; i++) { //checks armstrong number for every armstrong number in the range.
        int c = 0;
        e=i;
	    while (e>0) { //to count the number of digits
	        e=e/10;
		    c++;
        }
		g=i;
		s=0;
		while (g>0) {
			r=g%10;
			s=s+pow (r,c);
			g/=10;
			
		}
		if (s==i){
			printf("%d \n", i);
		}
		
	}
	return 0;
}
