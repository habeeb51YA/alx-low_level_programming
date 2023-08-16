#include <stdio.h>

/* function declaration */
int min(int num1, int num2);

int main()
{
/*local variable declaration*/
int a = 20;
int b = 30;
int ret; 

/* calling the function to get the min */
ret = min(a,b);

printf("the minimum value is: %d\n", ret);

return 0;

}

/*min function returning values of min number */ 

int min(int num1,int num2)
{
/* local variable declaration */
int result;

if (num1 < num2)
	return result = num1;
else
	return result = num2;

return result;
}
