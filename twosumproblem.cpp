#include <iostream>
 #include <vector>
 using namespace std;
 vector<int> twosum(int arr[],int n,int target){
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]+arr[j]==target){
                 return {i,j};
             }
         }
     }
     return {};
 }
 int main(){
     int arr[]={2,7,1,15};
     int n=sizeof(arr)/sizeof(arr[0]);
     int target=9;
     vector<int>ans=twosum(arr,n,target);
     cout<<ans[0]<<" "<<ans[1]<<endl;
 }
