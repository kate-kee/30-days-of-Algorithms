#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int min,int mid,int max){
    int n1=mid-min+1;
    int n2=max-mid;
    int l[n1];
    int r[n2];
    for(int i=0;i<n1;i++){
        l[i]=a[min+i];
    }
    for(int j=0;j<n2;j++){
        r[j]=a[mid+1+j];
    }
    int k=min;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = r[j];
        j++;
        k++;
    }
}
void divide(int a[],int min,int max){
    if(min>=max)
      return;   
    int mid=min+(max-min)/2;
    divide(a,min,mid);
    divide(a,mid+1,max);
    merge(a,min,mid,max);

}
void printarray(int a[],int n){
    for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
}
int main(){
    int a[]={8,1,4,2,3,9,11,6};
    int n=sizeof(a)/sizeof(a[0]);
    divide(a, 0,n-1);
    printarray(a,n);
    return 0;
}