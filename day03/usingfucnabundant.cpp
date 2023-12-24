#include<iostream>
using namespace std;

int sum_of_divisor(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum= sum+i;
        }
    }
    return sum;
}
int main(){
    int x;
    cin>>x;
    if(sum_of_divisor(x)>x){
        cout<<" yes";
    }
    else{
        cout<<"No";
    }

}