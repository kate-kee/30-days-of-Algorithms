#include<iostream>
using namespace std;

void Sum()
{
    int A[]={2,4,11,8,10,15,13};
    int sum=0;
    for(auto m:A) {
        sum+=m;
    }
    cout<<sum;
}