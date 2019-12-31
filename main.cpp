/*Project_Prime*/

#include <iostream>
#include <cmath>
#include <pthread.h>
#include <bits/stdc++.h>
#include <algorithm>
#include "functions.h"
#include "algorithms.h"


int main()
{
	unsigned long long int a;
	printf("Enter an integer that you want to check for primality: ");
	scanf("%llu",&a);
	//printf("%lld",a);  //checkpoint 1
	int val_returned_main = basic(a); //for the condition 6n-1 and 6n+1
	//printf("%lld",gcd(123456788745598,12345665558962)); //checkpoint 2 to check if the __gcd function works fine
	if(val_returned_main == 1)
	{
		printf("Using Fermat Method we get "); 
		fermat_method(a); //checking using fermat method
	}
	return 0;
}
