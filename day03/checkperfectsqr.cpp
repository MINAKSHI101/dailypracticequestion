#include<iostream>
using namespace std;
int checkperfectsquare(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0 && n/i==i){
        return 1;
    }
  }
  return 0;
}
int main(){
    int n;
    cin>>n;
   if(checkperfectsquare(n)){
        cout<<"perfect square";
   }
   else{
        cout<<"not a perfect square";
   }
           
            
        
    }
