using namespace std;
#include<bits/stdc++.h>
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
void selections(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])  
            min=j;
        }
         swap(&a[i],&a[min]);
    }
}
int main(){
    int a[]={2,8,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    selections(a,n);
     for (int k=0; k < n; k++)
    {
        cout<<a[k]<<endl;
    }
   return 0;
}