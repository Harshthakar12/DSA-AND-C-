first non repeating element in array.
#include <iostream>
#include <unordered_map>
using namespace std;
int nonrepeat(int arr[],int n){
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
        return i;
    }
}
    return -1;
}
int main(){
    int arr[]={4,5,1,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"Non repeating element is :"<<nonrepeat(arr,n);
}
