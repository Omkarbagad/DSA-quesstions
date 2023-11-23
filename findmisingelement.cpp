#include<iostream>
using namespace std;

int findMissingElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s=+e)/2;
    int ans=-1;

    while(s<=e){
        int difference = arr[mid]-mid;
        if(difference==1){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    if(ans+1==0)
    return n+1;
    
    return ans+1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int n=7;
    
    int missing=findMissingElement(arr,n);

    if(missing==-1){
        cout<<"Element not Found"<<endl;
    }
    else{
        cout<<"The Missing Element is: "<<missing<<endl;
    }
}