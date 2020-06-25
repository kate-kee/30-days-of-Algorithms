#include<iostream>
using namespace std;

void Max()
{
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];
    for(auto m:A){
    if(m>max){
        max=m;
    }
    }
    
    cout<<max;
}