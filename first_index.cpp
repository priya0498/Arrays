#include<iostream>
using namespace std;
int main(){
    int n, x, i;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
		cin>>arr[i];        
    }
    cin>>x;
    
    for(i=0; i<n; i++){
        if(arr[i]==x){
            cout<<i;
            break;
        }
    }
    
    if(i==n){
        cout<<-1;
    }
    
    return 0;
}
