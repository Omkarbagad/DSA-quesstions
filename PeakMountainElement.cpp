#include<iostream>
using namespace std;

int findPeakMountainElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while (s<e)
    {
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main(){
    int arr[]={10,20,30,90,70,60,50};
    int n=7;
    int peakElement=findPeakMountainElement(arr,n);
    cout<<"Peak Element is : "<<arr[peakElement];
    
}