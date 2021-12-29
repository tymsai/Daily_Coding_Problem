/* 
Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.

For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:

10 = max(10, 5, 2)
7 = max(5, 2, 7)
8 = max(2, 7, 8)
8 = max(7, 8, 7)
Do this in O(n) time and O(k) space. You can modify the input array in-place and you do not need to store the results. You can simply print them out as you compute them.
*/
#include<iostream>
#define N 6
using namespace std;
int max(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else
        return c;
}
int main(){
    int max_arr[N-2], arr[]={10, 5, 2, 7, 8, 7}, k=3, temp=0;
    for (int i = 0; i < N-2; i++){
        temp=max(arr[i], arr[i+1], arr[i+2]);
        max_arr[i]=temp;
    }
    int i=0;
    while(i<N-2){
        cout<<endl<<max_arr[i];
        i++;
    }
}
