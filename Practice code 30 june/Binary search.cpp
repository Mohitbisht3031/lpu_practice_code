#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findI(vector<int>&v,int x){
    int  i = 0;
    int j = v.size()-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(v[mid] == x)return mid;
        else if(v[mid] > x){
            j = mid-1;
        }else{
            i = mid+1;
        }
    }
    
    return i;
}

int main() {
// 	cout<<"GfG!";
vector<int>v{1,3,5,6,8};
cout<<findI(v,9);
	return 0;
}