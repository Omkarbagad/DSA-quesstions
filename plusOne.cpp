// leetcode-66. Plus One 
// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<
int> &digits){
    int n =digits.size();
    for(int i =n-1 ; i>0;i--){
        digits[i]++;
        if(digits[i] < 10){
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin() , 1);
    return digits;
}

int main(){
    vector<int> digits = {1,2,3};
    vector <int> ans = plusOne(digits);
    cout<<"The plus one is : ";
    for(int i =0 ; i <ans.size() ; i++){
        cout<<ans[i];
    }
    return 0;
}
