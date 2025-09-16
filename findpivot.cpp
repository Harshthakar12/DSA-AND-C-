//find pivot element in an array
 #include <iostream>
 using namespace std;
 int pivot(int arr[],int n){
     int leftsum=0;
     int totalsum=0;
     for(int i=0;i<n;i++){
         totalsum+=arr[i];
     }
     int rightsum;
     for(int i=0;i<n;i++){
     rightsum=totalsum-leftsum-arr[i];
     if(leftsum==rightsum){
 return i;
     }
     leftsum=leftsum+arr[i];

     }
     return -1;
 }
 int main (){
 int arr[]={1,7,3,6,5,6};
 int n=sizeof(arr)/sizeof(arr[0]);
 int ans=pivot(arr,n);
 cout<<"Pivot index Is : "<<ans;

 }
