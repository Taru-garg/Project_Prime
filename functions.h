//functions.h
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

