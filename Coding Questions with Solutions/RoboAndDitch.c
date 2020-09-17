/*
Niharika is a scientist and she has designed a robo. The function of Robo is just to walk forward and backward continuously. One day Niharika went out of the lab and one of kid has taken the robo and started observing how it is walking. But there is ditch on forward end and backward which was not observed by the kid. So now we have to check whether the robo falls in ditch or not. If it falls whether it is forward ditch or backward ditch and time to fall in ditch

Input Format

5 integers denoting no.of forward steps, no.of backward steps, forward ditch position, backward ditch position, and time comple single step

Constraints

Every value will range from 1-100

Output Format

No if the robo does not falls in ditch.

F integer. F denotes forward ditch and integer is the time taken by robo to fall in ditch

B integer. B denotes backward ditch and integer is the time taken by robo to fall in ditch

Sample Input 0

1 3 3 1 5
Sample Output 0

B 15
Explanation 0

Initially the robo will have 1 first step forward.

And then it will have 3 steps backward. But before completing the third step the robo falls in ditch(backward).

Total time is = 1*5+2*5=15
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int fs,bs,fd,bd,t;
    cin>>fs>>bs>>fd>>bd>>t;
    if(fs==bs)
    {
        if(fd<=fs)printf("F %d",fd*t);
        else cout<<"NO"; 
    }
    else{
        bd=-bd;
        int tot=0,p=0;
        while(1)
        {
            
            if(p+fs>=fd)
            {
                cout<<"F "<<(tot+fd-p)*t;
                break;
            }
            else 
            {
                p=p+fs;
                tot+=fs;
            }
            if(p-bs<=bd)
            {
                cout<<"B "<<(tot-bd+p)*t;
                break;
            }
            else{
                tot+=bs;
                p-=bs;
            }
        }
    }
    return 0;
}
