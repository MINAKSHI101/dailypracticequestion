#include<iostream>
using namespace std;
int powerofnum(int num,int k){
    if(k==0){
        return 1;                 // by using recursion
    }
    else{
        return(num*powerofnum(num,k-1));
    }
}
int main(){
    int num,k;
    cin>>num>>k;
   /* int product = 1;
    for(int i=0;i<k;i++){           "without recursion" "pow ka bhi use krke nikal skte hai easily"
        product = product*num;
    }
    cout<<product;
    */
   cout<<powerofnum(num,k);
}