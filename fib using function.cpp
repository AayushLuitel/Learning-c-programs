#include <stdio.h>
int fib(int, int, int);
int main()
{
	int a=0,b=1,d;
	printf("No of terms required \n ");
	scanf("%d", &d);
	fib(a,b,d);
}
int fib (int a, int b, int d ) 
{
 static int e;
if (d<=0 ) {
	return e;
}
else {
printf("%d ", e);
a=b;
b=e;
e=a+b;

return fib (a,b,d-1);
}
}
