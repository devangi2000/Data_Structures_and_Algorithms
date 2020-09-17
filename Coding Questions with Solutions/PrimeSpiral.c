/*The prime numbers are written in a spiral form starting at (0,0) as shown in the diagram below :



The numbers shown on the right are column number whereas the numbers shown on the left are row numbers.

Your task is to write a program that given a prime number finds out its position in the grid.

Input
First line contains the number of test cases.
Each test case consists of a single number N.
N does not exceed 1000000

Output
Print N lines.
On each line is the answer to a single test case.
For every testcase print the X and the Y co-ordinates of the given input prime.

Sample Input 0

4
2
3
5
7
Sample Output 0

0 0
1 0
1 1
0 1
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void printC(int n)
{
    int x=0,y=0,sl=2,sc=1,a=1;
    for(int i=1;i<=n;i++)
    {
        if(sc<=sl/2)x=x+a;
        else y=y+a;
        
        if(sc==sl)
        {
            sc=0;a=-a;sl+=2;
        }
        sc++;
    }
    printf("%d %d\n",x,y);
}
bool isprime(int n)
{
    if(n==1)return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return 0;
    return 1;
}

int main() {
    int a[100000]={2},i=1;
    for(int j=3;i<100000;j+=2)
    {
        if(isprime(j))
        {
            a[i++]=j;
        }
    }
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);
        for(i=0;a[i]!=x;i++);
        printC(i);
    }
    return 0;
}