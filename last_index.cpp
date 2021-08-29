#include<iostream>
using namespace std;
void lastIndex(int arr[],int n, int x)
{
int last=-1;
for(int i=n-1;i>=0;i--)
{
    if(x==arr[i])
    {
        last=i;
        break;
    }
}
cout<<last;
}
int main() {
    int n; 
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x; 
    cin >> x;
    lastIndex(arr, n, x);
    return 0;
}