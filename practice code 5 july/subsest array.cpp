
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// O(mlogm)+o(nlongn)+ O(m) // O(nlogn) > o(n)
bool subset(int a1[], int a2[], int m, int n){
    // O(m) 

    // int j = 0;
    // int a1[] = {11, 1, 13, 21, 3, 7,2}; -> 1,2,3,7,11,13,21
    // int a2[] = {11, 3, 7, 1}; ->         1,3,7,11 -> 12
    int maxi = 0;
    // 
    for(int i = 0;i<n;i++){
        maxi = max(a2[i],maxi);
    }
    vector<int>present(maxi+1,0);
    for(int i = 0;i<m;i++){
        if(a1[i] <= maxi){
            present[a1[i]] = 1;
        }
    }
    
    for(int i=0;i<n;i++){
        if(present[a2[i]] == 0)return false;
    }
    return true;
    // // int i=0, j=0;
    // int c = 0;
    // // O(n*m)
    // for(int i = 0; i<n; i++){
    //     for(int j =0; j<m; j++){
    //         if(a2[i] == a1[j])
    //         { c++;
    //             break;}
    //     }
    //     if(c == m)
    //     return 0;
    // }
    // return 1;
}
//main function
int main(){
    int a1[] = {11, 1, 13, 21, 3, 7};
    int a2[] = {11, 3, 7, 1};

    int m = sizeof(a1)/sizeof(a1[0]);
    int n = sizeof(a2)/sizeof(a2[0]);

    if(subset(a1 ,a2 ,m ,n))
        cout << "a2[] is the subset of a1[]" << endl;
    else
        cout << "a2[] is not the subset of a1[]" << endl;
    return 0;
}
