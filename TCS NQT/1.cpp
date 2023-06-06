/*
TCS NQT Coding Question 2022 – September Day 1 – Slot 1
Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:

###***   -> Value of S
Output :

0   → number of * and # are equal
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="#*#**##";
    int a=0, b=0;
    int k = 7;
    for(int i=0; i<k; i++){
        if(s[i] == '#')
        a++;
        if(s[i] == '*')
        b++;
    }
    if(a<b)
    cout<<1;
    if(a>b)
    cout<<-1;
    else
    cout<<0;
    return 0;
}
