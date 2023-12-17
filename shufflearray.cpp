#include<iostream>
using namespace std;
void shuffleArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        cout<<arr[i];
        cout<<arr[i+n/2];
       
        }
        
        
    }

int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<"\n";
    }*/
    shuffleArray(arr,n);
    return 0;

}