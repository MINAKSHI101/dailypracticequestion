#include<iostream>
using namespace std;
int main(){
    int sum1 = 0,sum2=0;
    int n1,n2;
    cin>>n1>>n2;
    for(int i = 1;i<=n1;i++){
        if(n1%i==0){
            sum1=sum1+i;
        }
    }
    for(int i=1;i<=n2;i++){
        if(n2%i==0){
            sum2=sum2+i;
        }
    }
    if(sum1/n1==sum2/n2){
        cout<<"friendly pair";
    }
    else{
        cout<<"not a friendly pair";
    }
    return 0;
}