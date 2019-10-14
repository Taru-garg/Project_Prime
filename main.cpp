/*Project_Prime*/
/* The following code has been developed as a tribute to  all the people who dedicated their life towarrds the study of prime numbers. Prime numbers have always been a fascinating topic
yet very controversial. Here we have considered some basic results and then moved on to more sophisticated primlality tests. After making any changes please sure that the basic nature of the code is preserved and that is the speed with which it can check the numbers for their primality.
Various checkpoints have been incorporated within the code, so if in case you make a change that instead of improvement of code deteriorated it you can just confirm and understand the problem
with help of checkpoints.*/

#include <iostream>
#include <cmath>
#include <pthread.h>
#include <bits/stdc++.h>
#include "functions.h"


int main()
{
	long long int a;
	printf("Enter an integer that you want to check for primality: ");
	scanf("%lld",&a);
	//printf("%ld",a);  //checkpoint 1
	int val_returned_main = basic(a); //for the condition 6n-1 and 6n+1
	return 0;
}