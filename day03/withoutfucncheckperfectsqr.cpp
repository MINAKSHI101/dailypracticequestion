#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n/2;i++){
        if(n%i==0&&n/i==i){
           
            cout<<"perfect square";
            return 0;
        }
            
       
            
        
    }
    
    cout<<"not a perfect square";
        
           
}
           
            
        
    
