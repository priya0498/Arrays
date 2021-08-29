#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int i,j;
for(i=0;i<n-1;i++)
{
    for( j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j]&& i==j)
        {
            cout>>arr[j];
        }
    }
}
return 0;
}