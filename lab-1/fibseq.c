#include <stdio.h>

extern int fibonacci(int x);

int main(int argc, char **argv)
{
  int number=0;
  int result=0;

  scanf("%d",&number);
  result = fibonacci(number);   
  printf("The fibonacci sequence at %d is: %d\n", number, result);
}
#if 0
int fibonacci(int x){
	if(x <= 0 )
		return 0;
	if(x == 1)
		return 1;
	else
		return fibonacci(x-1) + fibonacci(x-2);
}
#endif

