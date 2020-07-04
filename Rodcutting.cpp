//KETAKI:TO FIND THE MAXIMUM NUMBER OF CUTS POSSIBLE FROM GIVEN LENGTH OF INPUTS
#include<bits/stdc++.h>
using namespace std;
int Maxcut(int N,int a,int b,int c){
    
    if(N<0){
    return 0;}
    else if(N==0){
    return 0;
    }
    int sum=max(max(Maxcut(N-a,a,b,c),
    Maxcut(N-b,a,b,c)),
    Maxcut(N-c,a,b,c));
    if(sum==-1)
    return -1;
    else
    return sum+1;
}

int main(){
    int N=20;
    int a=10;
    int b=2;
    int c=1;
    int cuts=Maxcut(N,a,b,c);
    cout<<cuts<<endl;
return 0;
}