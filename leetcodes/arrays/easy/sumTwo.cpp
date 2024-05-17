#include<iostream>
using namespace std;

// Problem Statement
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]



int sumTwoWithTarget(int *array, int count, int target){
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if(array[i] + array[j] == target){
                cout << "[" << i << ", " << j << "]" << "=" << array[i] << "+" <<  array[j] << "= " << (array[i] + array[j])  << endl;
                return 0;
            }
        }
        
    }
    return 1;
}



int main () {
    int array[] = {2,7,11,15}, target = 9;
    int count = sizeof(array) / sizeof(int);
    int array1[] = {3,2,4}, target1 = 6;
    int count1 = sizeof(array1) / sizeof(int);
    int array2[] = {3,3}, target2 = 6;
    int count2 = sizeof(array2) / sizeof(int);


    sumTwoWithTarget(array, count, target);
    sumTwoWithTarget(array1, count1, target1);
    sumTwoWithTarget(array2, count2, target2);
    return 0;
}
