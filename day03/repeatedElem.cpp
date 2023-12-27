#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b[n];

   
for(int i=0;i<n;i++){
    if(b[i]!=-1){
        int count = 1; 
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                b[j]=-1;
                
            }
        }
    if(count!=1){
        cout<<b[i]<<" ";
    }
    
    }
}
    

return 0;

    }

  