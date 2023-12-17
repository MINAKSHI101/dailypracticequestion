#include<iostream>
using namespace std;

int checkfriendlypair(int num){
    int sum =0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(){
    
    int n1,n2;
    cin>>n1>>n2;
    
    int sum1=checkfriendlypair(n1);
    int sum2=checkfriendlypair(n2);
    if(sum1/n1==sum2/n2){
        cout<<"friendlypair";
    }
    else{
        cout<<"not a friendly pair";
    }
    
    return 0;
}