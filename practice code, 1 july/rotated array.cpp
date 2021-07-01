#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n,arr[]={2,5,6,0,0,1,2};
   cin>>n;
   int p;
   for(int i=0;i<7;i++)
   {
       if(arr[i]>arr[i+1])
        {
            p=i;
            break;
        }
   }
   if(binary_search(arr,arr+p,n)==1 || binary_search((arr+5)-p,arr+5,n)==1 )
       {
           cout<<"Found";
           return 0;
       }
       else
       cout<<"Not Found";
       
   
    return 0;
}
