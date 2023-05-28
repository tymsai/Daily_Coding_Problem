/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

Given an array of integers where every integer occurs three times except for one integer, which only occurs once, find and return the non-duplicated integer.

For example, given [6, 1, 3, 3, 3, 6, 6], return 1. Given [13, 19, 13, 13], return 19.

Do this in O(N) time and O(1) space.
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,1,1,2,2,2,3,4,4,4};
    int len=sizeof(arr)/sizeof(int);
    sort(arr, arr + len);
    for (int i = 0; i < len; i+=3){
        if(arr[i]==arr[i+1]){
                cout<<"true - "<<arr[i]<<endl;
        }
        else{
            cout<<arr[i]<<" - occur once";
            break;
        }
    }
    return 0;
}
