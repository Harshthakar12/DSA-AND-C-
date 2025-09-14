// sum of array traversal
 #include <iostream>
 using namespace std;
 int sumarray(int arr[],int n){
     int sum=0;
     for(int i=0;i<n;i++){
         sum=sum+arr[i];
     }
     return sum;
 }
 int main(){
     int arr[]={3,7,1,9,2};
     int n=5;
     cout<<"Sum Of Array is : "<<sumarray(arr,n);
 }
