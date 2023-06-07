/*
Write a program in C++ to quickly swap two arrays.

Sample Input

a[] = {11, 12,13,14}
b[] = {15, 16, 17, 18}
Sample Output

a[] = {15, 16, 17, 18}
b[] = {11, 12, 13, 14}

*/
#include<iostream>
using namespace std;
int main(){
    int a[] = {11, 12,13,14}, temp=0,
        b[] = {15, 16, 17, 18};
    for(int i=0; i<4; i++){
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"a"<<a[i]<<endl;
        cout<<"b"<<b[i]<<endl;
    }
    return 0;
}
