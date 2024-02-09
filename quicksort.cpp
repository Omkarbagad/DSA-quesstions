#include<iostream>
using namespace std;

void quickSort(int a[] , int start , int end){
    //base condition
    if(start >= end){
        return;
    }
    //solve 1 case 
    int i = start-1;
    int j = start;
    int pivot = end;
    while(j<pivot){
        if(a[j]<a[pivot]){
            i++;
            swap(a[i] , a[j]);
        }
        j++;
    }
    i++;
    swap(a[i] , a[pivot]);
    quickSort(a , start , i-1);
    quickSort(a , i+1 , end);
}

int main(){
    int a[]={7,2,1,8,6,3,5,4};
    int size=8;
    int start = 0;
    int end = size-1;
    cout<<"The Array before Quick Sort is : ";
    for(int i =0 ;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
        cout<<"The Array after Quick Sort is : ";
    quickSort(a , start ,end);
    for(int i =0 ;i<size;i++){
        cout<<a[i]<<" ";
    }
}