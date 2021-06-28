#include <iostream>
using namespace std;
//  |         | 
// {0,1,2,3,4,4};
// Two pointer algo/approach
void findTarget(int*arr,int n,int t){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j] > t){
            j--;
        }else if(arr[i]+arr[j] < t){
            i++;
        }else{
            cout<<i<<" "<<j<<endl;
            i++;j--;
        }
    }
    return;
}

int main() {
// 	cout<<"GfG!";
int arr[] = {0,1,2,3,4,4};
findTarget(arr,6,5);
	return 0;
}


int main() {
// 	cout<<"GfG!";
int arr[] = {1,2,3,-2,5};
cout<<maxSum(arr,5);
	return 0;
}