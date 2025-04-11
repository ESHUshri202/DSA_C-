#include<bits/stdc++.h>
using namespace std;

// Given an array arr[] of size n and an integer k, rotate the array to the right by k steps, where k is non-negative.
// The rotation should be done in place, meaning that the elements of the array should be rotated without using any extra space.
// The function should take an array arr and an integer k as input and return the rotated array.
// The function should not use any additional data structures or libraries to perform the rotation.
// The function should not use any built-in array functions or methods to perform the rotation.
// The function should not modify the original array arr, but instead create a new array to store the rotated elements.
// The function should return the rotated array as a new array.
/*
Let n = arr.size()

Create a new vector temp of size n

For each index i from 0 to n-1:

Compute new index: newIndex = (i + k) % n

Assign: temp[newIndex] = arr[i]

Copy all elements from temp back to arr
*/
vector<int> rotate(vector<int> &arr,int k){
    vector<int> temp(arr.size());
    for(int i =0; i<arr.size();i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    arr = temp;
}
