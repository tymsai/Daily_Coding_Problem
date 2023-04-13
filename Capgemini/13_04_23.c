Problem Statement –

Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

Input :

aabbbbeeeeffggg

Output:

a2b4e4f2g3

Input :

abbccccc

Output:

ab2c5

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++) {
        if (str[i] == str[i+1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    return 0;
}
