// Problem Statement

// Given N sticks and an array length where each length[i] represents the length of each stick. Your task is to make a maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D. A stick can't be part of more than one pair of sticks.

// Fill your code here

// #include<iost using namespas

// int main()

// cout

// 9

// // ein


// Input Format: Size of array. Elements of array. Value of D

// Example: If we take five elements in an array:  5//Size of Array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int N, D;
    cin >> N;
    
    vector<int> len(N);
    
    // Input array elements
    for(int i = 0; i < N; ++i) 
    {
        cin >> len[i];
    }
    
    cin >> D;
    
    // Sort the lengths array
    sort(len.begin(), len.end());
    
    int pairs = 0;
    int i = 0;
    
    // Greedily pair sticks
    while(i < N - 1) 
    {
        if(len[i + 1] - len[i] <= D) 
        {
            ++pairs;
            i += 2; // Skip the next stick since it's already paired
        }
        else 
        {
            ++i;
        }
    }
    
    cout << pairs << endl;
    
    return 0;
}
