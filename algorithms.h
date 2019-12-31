//algorithms.h
int fermat_method (unsigned long long int a)
{
	unsigned long long int k;
	if (a <= 1 || a == 4)  
	{
		answer(0);
		return 0;
	}
	 
	if (a <= 3)
	{
		answer(2);
		return 0;
	}
	if(a < 10) k = 5;
	else if (a>10 && a<100) k = 40;
	else if (a>100 && a<10000) k = 1000;
	else if (a>10000 && a<1000000) k = 100000;
	else  k = 1000000;
	while (k>0) 
   { 
		unsigned long long int n = 2 + rand()%(a-4);    
       	if (gcd(n, a) != 1) 
        {
        	answer(0);
        	return 0;
		}
		unsigned long long int t = power(n,a-1,a);
       if (t%a != 1)
       {
       		answer(0);
       		return 0;
	   }
       k--; 
    } 
	answer(1);
	return 1;
}

