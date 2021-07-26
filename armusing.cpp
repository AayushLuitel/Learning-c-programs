#include<stdio.h>
#include<math.h>
int check_ArmstrongNumber(int, int);
int main()
{
    int num,a,c=0,d;
    printf("Enter a number:");
    scanf("%d",&num);
    a=num;
    while (a>0) {
    	a=a/10;
    	c++;
	}
	d=check_ArmstrongNumber(num,c);
   if(d==num)
    printf("It is an Armstrong Number");
   else
    printf("It is not an Armstrong Number");
}
int check_ArmstrongNumber(int num, int c)
{
	static int rem , s=0;
  if (num > 0 ) {
  	rem=num%10;
  	s=s + pow (rem,c);
  	check_ArmstrongNumber (num/10, c);
  	return s;
  	
  } 
}

