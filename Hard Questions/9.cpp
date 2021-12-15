/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Airbnb.

Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.

For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.

CUSTOM Restrains :- space between 2 numbers must be <= 2

Follow-up: Can you do this in O(N) time and constant space?
*/
#include<iostream>
using namespace std;

int main(){
    int arr[6]={455, 25, 35, 405, 55, 60}, sum=0, temp=0, hold=0;
    for(int i=0; i<6; i+=2){
        sum=sum+arr[i];
    }
    for(int i=1; i<6; i+=2){
        temp=temp+arr[i];
    }
    if(sum>temp)
        hold=sum;
    else
        hold=temp;
    sum=0; temp=0;
    for(int i=0; i<6; i+=3){
        sum=sum+arr[i];
    }
    for(int i=1; i<6; i+=3){
        temp=temp+arr[i];
    }
    if(sum>temp){
        if(sum>hold)
            hold=sum;
    }
    else{
        if(temp>hold)
            hold=temp;
    }
    cout<<hold;
}
