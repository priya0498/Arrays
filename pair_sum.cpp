#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i,j,x;
    cin>>x;
    int pairs=0;
    for(i=0;i<n-1;i++)
    {
       for( j=0;j<n;j++)
       {
           if(arr[i]+arr[j]==x)
           pairs=pairs+1;
           cout<<pairs;
       }
    }
}


