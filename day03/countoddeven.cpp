#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count1++;}
        else{
            count2++;
        }
    }
    cout<<"Even :"<<count1++<<endl;
    cout<<"Odd :"<<count2++;
}