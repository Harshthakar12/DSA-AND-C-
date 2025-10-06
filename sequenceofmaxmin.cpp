//make a code in which sequence will be first max then first min 
//then second max and second min and so on

 #include <iostream>
 #include <algorithm>
 using namespace std;
 void rearrange(int arr[],int n){
 sort(arr,arr+n);
 int left=0;
 int right=n-1;
 int temp[n];
 int idx=0;
 while(left<=right){
     if(idx<n){
         temp[idx]=arr[right];
         idx++;
         right--;
     }if(idx<n){
        temp[idx]=arr[left];
         idx++;
         left++;
     }
 }
 for(int i=0;i<n;i++){
     arr[i]=temp[i];
 }
 }
 void printarray(int arr[],int n){
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 }
 int main (){
 int arr[]={1,2,3,4,5,6,7};
 int n=sizeof(arr)/sizeof(arr[0]);
 rearrange(arr,n);
 printarray(arr,n);
 }
