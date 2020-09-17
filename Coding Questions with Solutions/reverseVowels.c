/*
Given a string, reverse only vowels in it. Leave the remaining string as it is.

Input Format

One string.

Constraints

1 <= Length of string <= 10^5

Output Format

One string, the original string with vowels reversed.

Sample Input 0

trumpisshit
Sample Output 0

trimpisshut
Explanation 0

vowels occur in the following order : u, i, i. they are reversed to occur in this order : i, i, u.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char ch[100005], v[100005];
    scanf("%s", ch);
    int j=0;
    for(int i=0; ch[i]; i++){
        if(ch[i]=='a' ||ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            v[j++]=ch[i];
        }
        j=j-1;
        for(int i=0; ch[i]; i++)
        {
           if(ch[i]=='a' ||ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') printf("%c", v[j--]);
           else printf("%c", ch[i]); 
        }
    
    return 0;
}

