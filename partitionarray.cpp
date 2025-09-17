 Write a code in which if we parition array in teo parts then the sum of both array will be same\
// (basically subset)
 #include <iostream>
 using namespace std;
 bool subset(int arr[],int n,int target){
     if(target==0)return true;
     if(n==0)return false
    
 }
 int find(int arr[],int n){
     int totalsum=0;
     for(int i=0;i<n;i++){
 totalsum=totalsum+arr[i];
     }
     if(totalsum%2==0)
     {
         return false;
     }
     return true;
 }
 int main (){
     int arr[]={1,5,11,5};
     int n=sizeof(arr)/sizeof(arr[0]);
          cout<<find(arr,n);         
 }
 
