#include<iostream>
using namespace std;
void insertion(int a[],int n){
        for(int i=1;i<n;i++){
            int j=i-1;
            int key=a[i];
            while(a[j]>key && j>=0){
                a[j+1]=a[j];
                j-=1;
            }
            a[j+1]=key;
        }
        for(int k=0;k<n;k++){
            cout<< a[k]<<endl;
        }
}
int main(){
        
        int a[]={4,2,3,6,1};
        int n=sizeof(arr)/sizeof(arr[0]);
        insertion(a,n);
    return 0;
}