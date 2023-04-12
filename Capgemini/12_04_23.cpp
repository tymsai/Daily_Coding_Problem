Problem Statement –

You have write a function that accepts, a string which length is “len”, the string has some “#”, 
in it you have to move all the hashes to the front of the string and return the whole string back and print it.
 

example :-

Sample Test Case

Input:

Move#Hash#to#Front

Output:

###MoveHashtoFront

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string algo(int len, string str){
    char temp;
    int count=-1;
    for(int i=0; i<len; i++){
        if(str[i]=='#'){
            count++;
            temp=str[i];
            str[i]=str[i-1];
            for (int j = i; j >= 1; j--)
                str[j]=str[j-1];
            str[count]=temp;
        }
    }
    return str;
}

int main(){
    int len=8;
    //cin>>len;
    string str="a#p#pl#e";
    //cin>>string;
    cout<<algo(len, str);
}
