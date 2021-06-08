#include<bits/stdc++.h>
using namespace std;
void swap(int *i, int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
void heapify(int a[],int n,int i){
    int child1=i*2+1;
    int child2=i*2+2;
    int max=i;
    if (a[child1]>a[i] && child1<n){
        max=child1;
    }
    if (a[child2]>a[max] && child2<n){
        max=child2;
    }
    if(max!=i){
        swap(&a[i],&a[max]);
        heapify(a,n,max);
    }
}
void printarray(int a[],int n){
for(int k=0;k<n;k++){
        cout<<a[k]<<" ";}
}
void heapsort(int a[],int n){
     for (int i =  n-1; i >=0; i--)
        heapify(a, n, i);
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main(){
    int a[]={8,1,4,2,3,9,11,6};
    int n=sizeof(a)/sizeof(a[0]);
    heapsort(a,n);
    printarray(a,n);
    return 0;
}
