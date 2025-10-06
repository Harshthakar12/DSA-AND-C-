#include <iostream>
using namespace std;
int majorityelement(int arr[],int n){
    int candidate=-1;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
            
        }else if(arr[i]==candidate){
            count++;
        }else{
            count --;
        }
    }
    count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count >n/2){
    return candidate;
    }
    return -1;
}
int main(){
    int arr[]={2,2,1,1,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Majority elemnt is : "<<majorityelement(arr,n);

}
