#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n = 7;
    int arr[n] = {1,1,3,5,6,7,5};
    int b[n];
    for(int i=0;i<n;i++){
        if(b[i]!=-1){
            for(int j=i+1;j<=n;j++){
                if(arr[i]==arr[j]){
                    b[j]=-1;
                }
            }
            count++;
        }
        
    }
    cout<<count;
}