//find min hashing problem
 #include <iostream>
 using namespace std;
 int findmin(int arr[],int n){
     int min=arr[0];
     for(int i=1;i<n;i++){
 if(arr[i]<min){
     min=arr[i];
 }
     }
     return min;
 }
 int main (){
     int arr[]={3,7,1,9,2};
     int n=5;
 cout<<"minimum number is : "<<findmin(arr,n);
 }
