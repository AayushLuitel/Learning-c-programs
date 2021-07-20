#include <stdio.h>
void read(int first[10][10], int second [10][10], int, int, int, int);
void mult(int first [10][10], int second [10][10], int multi[10][10], int, int, int, int);
void disp(int multi[10][10], int, int);
int main()

{
	
	int a,b,c,d,first [10][10],second[10][10],multi[10][10];
	printf("Enter the number of rows of 1st matrix : ");
	scanf("%d", &a);
	printf("Enter the number of columns of 1st matrix : ");
	scanf("%d", &b);
	printf("Enter the number of rows of 2nd matrix : ");
	scanf("%d", &c);
	if (b!=c ) {
		printf("The matrices cannot be multiplied ");
	}
	else {
	printf("Enter the number of columns of 2nd matrix : ");
	scanf("%d", &d);
	read(first,second,a,b,c,d);
	mult(first,second,multi,a,b,c,d);
	disp(multi,a,d);
}
}
void read (int first [10][10], int second [10][10], int a,int b, int c, int d)
{
	int i,j;
	for (i=0;i<a;i++) {
		for (j=0;j<b;j++) {
			printf("Enter the elements of 1st matrix A%d%d ", i, j);
	scanf("%d", &first[i][j]);
}
}

for (i=0;i<c;i++) {
	for (j=0;j<d;j++) {
		printf("Enter elements of second matrix B%d%d ", i, j);
		scanf("%d", &second[i][j]);
	}
}
}
void mult (int first [10][10], int second [10][10],int multi[10][10], int a,int b, int c, int d)
{
	int i,j,k, sum=0;
	for (i=0;i<a;i++) {
		for (j=0;j<d;j++) {
			for (k=0;k<c;k++) {
				sum=sum + first[i][k] * second[k][j];
			}
			multi[i][j] = sum;
			sum=0;
		}
		
	}
}
void disp (int multi[10][10],int a,int d)
{
	int i,j;
	printf("Product of them is \n" );
	for (i=0;i<a;i++) {
		for (j=0;j<d;j++) {
			printf("%d\t", multi[i][j]);
			
			
		}
		printf("\n");
	
	}
	
}
