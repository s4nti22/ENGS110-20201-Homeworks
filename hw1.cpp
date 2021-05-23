#include <stdio.h>

 int numberFibonacci (int number, int a, int b){
	int sum = 0;
	if (number >= 0)
	{
	a = 0;
	b = 1;
	int temp = 0;
	while ( b <= number )
	{
		sum = b + sum;
		temp = a + b;
		a = b;
		b = temp;
	}
	printf ("The sum is %d\n", sum);
	}
	else
	{
		printf ("The number is not valid \n");
	}
 	return sum;
 }

 void print_binary (int a){
	int c = 0;
 	printf ("%d in binary is :\n", a);
 	for (int b = sizeof(int) * 8 - 1; b >= 0; b--){
		c = a % 2;
		a = a >> 1;
		if (c & 1){
			printf ("1");
		} else {
			printf ("0");
		}
	}
	printf("\n");
} 

int main(){
	int n;
	printf ("Enter your age: ");
	scanf("%d", &n);
	printf ("My age is %d\n" , n);
	int x;
	int y;
 	int z =	numberFibonacci(n,x,y);
	print_binary(z);
	return z;
	 }
