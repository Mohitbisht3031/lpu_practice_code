#include <iostream>
using namespace std;

bool canPlaceCow(int*arr,int n,int c,int d){
int count = 1;
int preC = arr[0];
for(int i = 1;i<n;i++){
    if(arr[i]-preC >= d){
        count++;
        preC = arr[i];
        if(count == c)return true;
    }
}
    return false;
}

int main() {
// 	cout<<"GfG!";
int arr[] = {1 ,2 ,4 ,8, 9};
int n = 5;
int c = 3;

int s = 0;
int e = arr[n-1] - arr[0];

int ans = 0;
while(s<=e){
    int mid = (s+e)/2;
    
    if(canPlaceCow(arr,n,c,mid)){
        ans = mid;
        s = mid+1;
    }else{
        e = mid-1;
    }
}

cout<<ans<<endl;

return 0;
}