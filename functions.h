//functions.h
/*The function basic accepts a single parameter and checks the most basic condition to tell wether or not a number is prime.The basic condition used is that any
prime number will always be of the form 6n-1 or 6n+1 though this is a necessary condition but not sufficient*/
int basic(long long int num)
{
	if(((num+1)%6 == 0) || ((num-1)%6 == 0) || num == 2 || num == 3)
	{
		printf("This number may or may not be a prime");
		return 1;
	}
	else
	{
		printf("This number is definetly not a prime");
		return 0;
	}
	
}

