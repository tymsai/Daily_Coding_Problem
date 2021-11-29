/*
Good morning! Here's your coding interview problem for today.

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/
#include<iostream>
using namespace std;
int checker(int size, int arr[], int user){
    int sum=0;
    for(int i=0; i<size; i++){
        for(int j=1; j<size; j++){
            sum=arr[i]+arr[j];
            if(user==sum)
                return true;
        }
    }
}
int main(){
    int n=0, val=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i+1<<" element"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the number to check the sum"<<endl;
    cin>>val;
    if(checker(n, arr, val))
        cout<<"Sum exists";
    else
        cout<<"Sum do not Exist";
    return 0;
}
