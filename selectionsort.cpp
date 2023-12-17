#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    selectionsort(arr,n);
   for(int i=0;i<n;i++){
        cout<<arr[i];
   }

}