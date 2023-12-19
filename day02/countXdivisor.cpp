#include<iostream>
using namespace std;

/*int checkXdivisors(int num){
    int count = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    return count;
}*/

int main(){
    int x,n;
     int intcount = 0;
    cin>>x>>n;
    
    for(int i=2;i<=n;i++){
        int count=0;
        for(int j =1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count == x){
            intcount++;
        }
         
    }
   /* for(int i = 2;i<=n;i++){
        if(checkXdivisors(i)==x){
           intcount++;
        }
  
}*/
 cout<<intcount;
}