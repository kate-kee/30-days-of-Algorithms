#include <iostream>
using namespace std;
int main()
{
    int A[4]={0};
    int sum=0,key;
    std::cout<<"Enter";
    for(auto &m:A) 
    {
       std::cin>>m;
    }
    cout<<"Enter";
    cin>>key;
    for(int i=0;i<4;i++){
        if(key==A[i]){
            cout<<"Found"<<i;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}