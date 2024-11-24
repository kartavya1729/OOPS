// Member    Description
// Calculator(int seed)   constructs a Calculator with given seed for random numbers
// boolean isPrime(int n)   returns true if n is prime
// int kthPrime(int k)   returns the kth prime (assumes k >= 1)
// int fib(int n)   returns the nth Fibonacci number (assumes n >= 1)
// int rand(int max)   returns a random value between 0 and max

// The class correctly computes its results, but it does so inefficiently. In particular, it often computes the same value more than once. You are to implement a technique known as "memoizing" to speed up the computation of primes. The idea behind memoizing is to remember values that have been computed previously. For example, suppose that the value kthPrime(30) is requested 100 times. There is no reason to compute it 100 different times. Instead you can compute it once and store its value, so that the 99 calls after the first simply return the "memoized" value (the remembered value).

// Define a new class called MemoryCalculator that can be used in place of a Calculator to speed up the prime computation. A MemoryCalculator object should behave just like a Calculator object except that it should guarantee that the value of kthPrime(k) is computed only once for any given value k. Your class should still rely on the Calculator class to compute each value for kthPrime(k). It is simply guaranteeing that the computation is not performed more than once for any particular value of k. The isPrime method calls kthPrime, so it does not need to be memoized. You do not need to memoize the Fibonacci computation. You should not make any assumptions about how large k might be or about the order in which the method is called with different values of k.

// Your class should also provide the following public member functions that will allow a client to find out how many values have been directly computed versus how many calls have been handled through memoization.

// Member    Description

// MemoryCalculator(int seed)   constructs a MemoryCalculator with given seed for random numbers

// int getComputeCount()   returns number of values actually computed

// int getMemoCount()   returns number of calls handled through memoization

// Sample Input
// 3  // seed for random numbers
// 3  // No. of time the kthPrime() function will be called
// 7  // Parameter for kthPrime() function

// Sample Output
// 1 // Number of times kthPrime() is called
// 2 // Number of times kthPrime() result is fetched from memory

#include <iostream>
#include <unordered_map>
using namespace std;


class Calculator {
private:
    int seed;

public:
    // Constructor
    Calculator(int s) : seed(s) {}

    // Dummy implementation for kthPrime (this would be the actual computation in a real system)
    virtual int kthPrime(int k) 
    {
        int count = 0, num = 1;

        while (count < k) 
        {
            num++;
            if (isPrime(num)) count++;
        }
        return num;
    }


    bool isPrime(int n) 
    {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) return false;
        }
        return true;
    }
};


class MemoryCalculator : public Calculator 
{
private:
    unordered_map<int, int> memo; 
    int computeCount;
    int memoCount;

public:
    // Constructor
    MemoryCalculator(int seed) : Calculator(seed), computeCount(0), memoCount(0) {}

    int kthPrime(int k) override 
    {
        if (memo.find(k) != memo.end()) 
        {
            memoCount++; // Increment memoization counter
            return memo[k];
        }

        computeCount++; // Increment computation counter
        int primeValue = Calculator::kthPrime(k);
        memo[k] = primeValue; // Store result in memo map
        return primeValue;
    }

    int getComputeCount() const 
    {
        return computeCount;
    }

    int getMemoCount() const 
    {
        return memoCount;
    }
};


int main() 
{
    int seed = 3;         // Seed for Calculator
    int calls = 3;        // Number of times kthPrime will be called
    int k = 7;            // Parameter for kthPrime

    MemoryCalculator mc(seed);

    for (int i = 0; i < calls; i++) 
    {
        mc.kthPrime(k);
    }

    cout << mc.getComputeCount() << endl; 

    cout << mc.getMemoCount() << endl;

    return 0;
}