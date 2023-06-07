/*
Write a program to count the number of unique characters in a given string.

Sample Input

s=”prepbytes”
Sample Output

7
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    s="prepbytes";
    int temp=0, len=s.length();
    sort(s.begin(), s.end());
    for(int i=0; i<len; i++){
        if(i==len){
            break;
        }
        else{
            if(s[i]==s[i+1]){
                i++;
                continue;
            }
            else
                temp++;
        }
    }
    cout<<temp;
    return 0;
}
