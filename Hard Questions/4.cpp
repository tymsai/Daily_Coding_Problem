/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.
*/
#include<iostream>
using namespace std;

void sort(int arr[4]) {
    int temp = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j <= 3; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int arr[4]={3, 4, -1, 1}, new_arr[5], temp=0, checker=1, i=0, j=0;
    sort(arr);
    for(int i=0; i<4; i++){
        if(arr[i]>0){
            if(arr[i]==checker){
                //number present
                checker++;
                continue;
            }
            else{
                cout<<endl<<"Lowest Positive number "<<checker<<" is not present";
                break;
            }
        }
        else
            continue;
    }
}
