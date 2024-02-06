#include <iostream>
using namespace std;

void Merge(int arr[] , int s , int e){
  int mid = s+(e-s)/2;
  //length of both array
  int lenLeft = mid-s+1;
  int lenRight = e-mid;
  //create the two array
  int *left = new int[lenLeft];
  int *right = new int[lenRight];
  //copy the value from original array to both array
  //for left array
  int k = s;
  for(int i=0 ; i<lenLeft ; i++){
    left[i]=arr[k];
    k++;
  }
  //for Right Array
  k=mid+1;
  for(int i=0;i<lenRight;i++){
    right[i] = arr[k];
    k++;
  }
  //Merge both Array
  int leftIndex = 0;
  int rightIndex=0;
  int arrIndex=s;
  while(leftIndex<lenLeft && rightIndex<lenRight){
    if(left[leftIndex] < right[rightIndex]){
      arr[arrIndex] = left[leftIndex];
      arrIndex++;
      leftIndex++;
    }
    else{
      arr[arrIndex] = right[rightIndex];
      arrIndex++;
      rightIndex++;
    }
  }
  //corner cases
  //1.if left array is completed and right is not 
  while(rightIndex<lenRight){
    arr[arrIndex] = right[rightIndex];
    arrIndex++;
    rightIndex++;
  }
  //2.if right array is completed and left is not
  while(leftIndex<lenLeft){
    arr[arrIndex] = left[leftIndex];
    arrIndex++;
    leftIndex++;
  }
  //delete the memory of heap
  delete[] left;
  delete[] right;
}

void MergeSort(int arr[] , int s , int e){
  if(s>=e && s==e){
    return;
  }
  int mid = s+(e-s)/2;
  //Sort left Array
  MergeSort(arr, s , mid);
  //Sort Right Array
  MergeSort(arr , mid+1 , e);
  //Merge the both Array
  Merge(arr , s , e);
}

int main() {
  int arr[] = {2,7,4,1,9,3,8};
  int size = 7;
  int s=0;
  int e=size-1;
  cout<<"Before Sorting : ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  MergeSort(arr , s , e);
  cout<<"After Merge Sort : ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}