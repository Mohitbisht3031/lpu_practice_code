
#include <iostream>
using namespace std;
// {1,2,3,-2,5};
// {0,1,3,6,4,9} 9-1 = 8, 3-1 = 2,6-1 =5

// int maxSum(int*arr,int n){
//     int pre[n+1];
//     pre[0] = 0;
//     for(int i = 1;i<=n;i++){
//         pre[i] = pre[i-1]+arr[i-1];
//     }
//     int maxS = 0;
//     for(int i = 0;i<=n;i++){
//         for(int j = i+1;j<=n;j++){
//             if(pre[j]-pre[i] > maxS){
//                 maxS = pre[j]-pre[i];
//             }
//         }
//     }
//     return maxS;
// }
// kadane's algo
int maxSum(int*arr,int n){
    int maxS = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        maxS = max(sum,maxS);
        if(sum < 0)sum = 0;
    }
    return maxS;
}
