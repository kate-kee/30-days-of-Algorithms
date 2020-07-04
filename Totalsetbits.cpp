//KETAKI:TO FIND TOTAL NUMBER OF SET BITS STARTING FROM 0 TILL THE BINARY REPRESENTATION OF GIVEN NUMBER
#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    n++;
    int res=0;
    for(int x=2;x/2<n;x=x*2){
        int quo=n/x;
        res+=(quo*(x/2));
        int rem=n%x;
        if(rem>x/2){
            res+=(rem-(x/2));
        }
    }
    return res;
}
int main(){
    int m=4;
    int p=countSetBits(m);
    cout<<p<<endl;
}