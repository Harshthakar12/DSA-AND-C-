//print the index of first non repeating element 
 #include <iostream>
 #include <unordered_map>
 using namespace std;
 int single(int arr[],int n){
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
     int arr[]={1,1,2,3,3,4,4,5};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"index of the single element in the array is : "<<single(arr,n);
 }
