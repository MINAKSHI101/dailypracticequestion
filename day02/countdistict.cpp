#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int visited[n];
    for(int i=0;i<n-1;i++){
        if(visited[i] !=1){
            for(int j = i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    visited[j]=1;
                }
            }
            count++;
        }
    }
            
        
        
        
    cout<<count;
    
}

