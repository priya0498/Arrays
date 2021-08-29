#include<iostream>
#include<algorithm>
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
int i,j;

for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
if(arr[i] == arr[j] && i != j)
break;
}
if(j == n )
{
cout << arr[i] << " is found at" <<" "<<i << endl;

}
}
return -1;
}
