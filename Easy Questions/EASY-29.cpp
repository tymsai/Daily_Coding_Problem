/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Amazon.

Run-length encoding is a fast and simple method of encoding strings. 
The basic idea is to represent repeated successive characters as a single count and character. 
For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters. 
You can assume the string to be decoded is valid.
*/
#include<iostream>
using namespace std;
int main(){
    char a[12], temp;
    string str2, str="AAAABBBCCDAA";
    int intarr[10], count=1, j=0;
    a[0]=str[0];
    temp=a[0];
    for(int i = 1; i <= 12; i++){
        a[i]=str[i];
        if(temp==a[i]){
            count++;
            intarr[j]=count;
            str2[j]=a[i];
        }
        else{
            temp=a[i];
            count=1;
            j++;
            intarr[j]=count;
            str2[j]=a[i];
        }
    }
    for(int i=0; i<5; i++){
    cout<<intarr[i];
    cout<<str2[i];
    }
}
