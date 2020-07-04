//KETAKI:TO FIND ALL THE SUBSETS OF GIVEN SUPERSET USING RECURSION
#include<bits/stdc++.h>
using namespace std;
void Psubset(int str[],int index=0,int curr=0){
    int n=sizeof(str);
    if(n==index){
        cout<<curr<<endl;
        return;                          
    }
    Psubset(str,index+1,curr+str[index]);
    Psubset(str,index+1,curr);
}
int main(){
    int s[3]={0,1,2};
    Psubset(s);
    return 0;
}