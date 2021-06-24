#include <iostream>
using namespace std;

int main() {
    int arr[5] = {0,0,2,0,3};
    
    int c = 0;
    for(int i = 0;i<5;i++){
        if(arr[i]==0)c++;
        else{
            arr[i-c] =arr[i];
        }
    }
    
    for(int i = 5-c;i<5;i++){
        arr[i] = 0;
    }
    
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
	return 0;
}