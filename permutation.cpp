#include<iostream>
using namespace std;

void printPermutation(string str , int index){
    //base case
    if(index>=str.length()){
        cout<<str<<" ";
        return;
    }
    //solve 1 case
    for(int j =index ; j<str.length() ; j++){
        swap(str[index] , str[j]);
        //recursive call
        printPermutation(str , index+1);
        //backtracting call
        swap(str[index] , str[j]);
    }
}

int main(){
    string str = "ABCDEF";
    int index = 0;
    printPermutation(str,index);
    return 0;
}