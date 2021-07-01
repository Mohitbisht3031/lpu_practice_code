#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// bool isPresent(vector<vector<int>>mat,int t){
//   int m = mat.size();
//   int n = mat[0].size();
//   //O(m*n)
//   for(int i = 0;i<m;i++){
//       for(int j = 0;j<n;j++){
//           if(mat[i][j] == t)return true;
//       }
//   }
//   return false;
// }

bool isPresent(vector<vector<int>>&mat,int t){
    int m = mat.size();
    int n = mat[0].size();
    //
    for(int i = 0;i<m;i++){
        if(mat[i][n-1] < t )continue;
        if(binary_search(mat[i].begin(),mat[i].end(),t))return true;
    }
    return false;
}
// O(mlog(n))
int main() {
// 	cout<<"GfG!";
int m = 3;
int n = 4;

vector<vector<int>>v(m,vector<int>(n,0));
for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
        cin>>v[i][j];
    }
}
cout<<isPresent(v,11);
	return 0;
}

