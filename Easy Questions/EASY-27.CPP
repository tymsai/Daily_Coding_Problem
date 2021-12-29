/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Facebook.

Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
*/
#include<iostream>
using namespace std;
int main(){
    string str="([)]";
    char stk[10], a[10];
    int top=0;
    for(int i=0; i<10; i++){
        a[i]=str[i];
        if(a[i]=='[' || a[i]=='{' || a[i]=='('){
            stk[top]=a[i];
            top++;
        }
        else if(a[i]==']' || a[i]=='}' || a[i]==')'){
            if(stk[top]==a[i]){
                stk[top]=0;
                top--;
            }
        }
    }
    if(stk[top]==0){
        cout<<"true";
    }
    else
    cout<<"false";
}
