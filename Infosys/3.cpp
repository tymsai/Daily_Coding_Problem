/*
Write a Program to sort a string of characters

Sample Input

s=”prepbytes”
Sample Output

s=”beepprsty”
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    s="prepbytes";
    int len=s.length();
    sort(s.begin(), s.end());
    cout<<s;
    return 0;
}
