#include<iostream>
using namespace std;

int firstOccurenceElement(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=(s/2)+(e/2);
    int ans=-1;

    while (s<=e)
    {
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if (arr[mid]>target){
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        mid=(s/2)+(e/2);
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int target=30;
    int n=8;
    int ansIndex=firstOccurenceElement(arr,n,target);

    if(ansIndex==-1){
        cout<<"Element not Found";
    }
    else{
        cout<<"First Occurence of Element is :"<<ansIndex;
    }


}