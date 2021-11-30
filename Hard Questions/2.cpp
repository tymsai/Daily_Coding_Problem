/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/
#include<iostream>
using namespace std;
int main(){
    int new_arr[5], arr[5]={1, 2, 3, 4, 5}, temp=0, prod=1;
    cout<<"Old array \n";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
        temp=arr[i];
        arr[i]=1;
        for(int j=0; j<5; j++){
            prod=prod*arr[j];
        }
        new_arr[i]=prod; //give the product value to new_arr
        prod=1; //reset the product value
        arr[i]=temp; //reset to the old value of arr[i] for other products
    }
    cout<<"New Array \n";
    for(int k=0; k<5; k++){
        cout<<new_arr[k]<<endl;
    }
}
