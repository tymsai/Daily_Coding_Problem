/*
Write a program that will find the missing characters that are needed to make the string a panagram.

Sample Input

welcome to prepbytes
Sample Output

adfghijknquvxz
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="qweryuiop sdfghjkl zxcvbn";
    int temp;
    sort(s.begin(), s.end());
    remove(s.begin(), s.end(), ' ');
    for (int i = 0; i < s.length(); i++){
        temp=s.find(i+'a');
        if(temp<0)
            printf("%c", i+'a');
    }
    return 0;
}
