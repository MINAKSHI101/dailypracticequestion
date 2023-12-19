#include<iostream>
using namespace std;

int checkXdivisors(int num){
    int count = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    return count;
}

int main(){
    int x,n;
     int intcount = 0;
    cin>>x>>n;
    for(int i = 2;i<=n;i++){
        if(checkXdivisors(i)==x){
           intcount++;
        }
  
}
cout<<intcount;
}