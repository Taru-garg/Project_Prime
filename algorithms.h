//algorithms.h
/*The simplest probabilistic primality test is the Fermat primality test (actually a compositeness test). It works as follows:
Given an integer n, choose some integer a coprime to n and calculate a^(n - 1) modulo n. If the result is different from 1, then n is composite. If it is 1, then n may be prime.
If a^(n-1) (modulo n) is 1 but n is not prime, then n is called a pseudoprime to base a. In practice, we observe that, if a^(n-1) (modulo n) is 1, then n is usually prime. But here is a counterexample: if n = 341 and a = 2, then
even though 341 = 11·31 is composite. In fact, 341 is the smallest pseudoprime base 2.There are only 21853 pseudoprimes base 2 that are less than 2.5×10^10. This means that, for n up to 2.5×1010, if 2n-1 (modulo n) equals 1, then n is prime, unless n is one of these 21853 pseudoprimes.
Some composite numbers (Carmichael numbers) have the property that an - 1 is 1 (modulo n) for every a that is coprime to n. The smallest example is n = 561 = 3·11·17, for which a560 is 1 (modulo 561) for all a coprime to 561. */
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

