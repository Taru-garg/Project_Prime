//functions.h
/*This function is used to print anywhere the answer where 1 = maybe a prime; 0 = not a prime and 2 = definetly a prime number*/
int answer(int prediction)
{
	if(prediction == 0)
	{
		printf("Not a prime\n");
		return(0);
	}
	else if (prediction == 1)
	{
		printf("Maybe a prime\n");
		return(0);
	}
	else if (prediction == 2)
	{
		printf("Definetly a prime\n");
		return(0);
	}
}

/*The function basic accepts a single parameter and checks the most basic condition to tell wether or not a number is prime.The basic condition used is that any
prime number will always be of the form 6n-1 or 6n+1 though this is a necessary condition but not sufficient*/
int basic(unsigned long long int num)
{
	if(((num+1)%6 == 0) && num != 1|| ((num-1)%6 == 0) && num != 1 || num == 2|| num == 3)
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

unsigned long long int gcd (unsigned long long int a,unsigned long long int b)
{
	return std :: __gcd(a,b);
}

unsigned long long int power(unsigned long long int x, unsigned long long int y, unsigned long long int z) 
{ 
	unsigned long long int res=1;
	unsigned long long int square=x;
	if(y==0)
	    return 1;
	while(y!=0)
	{
	    if(y%2)
	    	res=res*square;
	    square=(square*square)%z;
	    y=y/2;
	    if(res>z)
	        res=res%z;
	}
	return res;
} 
  
