#include <iostream>
using namespace std;
int main(){
    int A[7]={5,6,8,25,56,67,89};
    int l=0,h=6,key=25;
    int midl=(l+h/2);
    while(l<=h){
    if(key==A[midl]){
        cout<<"found at"<<midl;
        return 0;
    }
    else if(key<A[midl]){
        h=midl-1;
    }
    else
    {
        l=midl+1;
    }
    }
    cout<<"Not found";
    return 0;
}