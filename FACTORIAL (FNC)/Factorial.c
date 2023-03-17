#include <stdio.h>

double funcFactorial(double n);

int main(void)
{
	double num,i,fact;
	
	printf("Enter an integer: ");
	scanf("%lf", &num);
	printf("	Number			Factorial\n");
	for(i=0; i<=num; i++)
		printf("%10.0f%31.0f\n", i, funcFactorial(i));
	printf("\n");
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
	return 0;
}

double funcFactorial(double n)
{
	double k, result;

	result= 1;
	if(n == 0)
		return(result);
	for(k = 1; k <= n; k++)
	result *= k;
	return(result);
}