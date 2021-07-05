#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&weight,int days,int w){
    int d = 1;
    int s = 0;
    for(int i= 0;i<weight.size();i++){
        if(s+weight[i] > w){
            s = weight[i];
            d++;
            if(d > days)return false;
        }else{
            s+=weight[i];
        }
    }
    return true;
}

int main() {
// 	cout<<"GfG!";
vector<int>weight{1,2,3,4,5,6,7,8,9,10};
int s = accumulate(weight.begin(),weight.end(),0);
int mini = 0;
for(int i =0 ;i<weight.size();i++){
    mini = max(weight[i],mini);
}
int days = 5;
int i = mini;
int j = s;
int ans = INT_MAX;
while(i<=j){
    int mid= (i+j)/2;
    if(isPossible(weight,days,mid)){
        ans = min(ans,mid);
        j = mid-1;
    }else{
        i= mid+1;
    }
}
cout<<ans<<endl;
	return 0;
}