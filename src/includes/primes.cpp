#include "primes.hpp"
#include <iostream>

void Prime::printPrimes(int n)
{
        for(int i = 2; i<n; i++)
    {
        if(isPrime(i))
        {
            std::cout << i << " is prime\n";
        }
    }
}

bool Prime::isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
