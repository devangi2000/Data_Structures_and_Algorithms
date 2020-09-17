/*
Find the XOR of two numbers and print it.

Hint : Input the numbers as strings.

Input Format

First line contains first number X and second line contains second number Y.
The numbers will be given to you in binary form.

Constraints

0 <= X <= 2^1000
0 <= Y <= 2^1000

Output Format

Output one number in binary format, the XOR of two numbers.

Sample Input 0

11011
10101
Sample Output 0

01110

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    char ch1[1010], ch2[1010];
    cin>>ch1>>ch2;
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    
    int i=0, j=0;
    while(len1>len2) {
        cout<<ch1[i]; 
        i++;
        len1-- ;
    }
    while(len1<len2) {
        cout<<ch2[j]; 
        j++;
        len2-- ;
    }
    while(ch1[i]){
        if(ch1[i]==ch2[j])
        {cout<<"0";}
        else cout<<"1";
        i++;
        j++;
    }
    return 0;
}
