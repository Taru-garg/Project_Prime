//functions.h
/*This function is used to print anywhere the answer where 1 = maybe a prime; 0 = not a prime and 2 = definetly a prime number*/
void answer(int prediction)
{
	if(prediction == 0)
	{
		printf("Not a prime");
	}
	else if (prediction == 1)
	{
		printf("Maybe or may not be a prime");
	}
	else if (prediction == 2)
	{
		printf("Definetly a prime");
	}
}
/*The function basic accepts a single parameter and checks the most basic condition to tell wether or not a number is prime.The basic condition used is that any
prime number will always be of the form 6n-1 or 6n+1 though this is a necessary condition but not sufficient*/
int basic(long long int num)
{
	if(((num+1)%6 == 0) || ((num-1)%6 == 0) || num == 2 || num == 3)
	{
		answer(1);
		return 1;
	}
	else
	{
		answer(0);
		return 0;
	}
	
}

