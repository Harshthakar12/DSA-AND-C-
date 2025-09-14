find max hashing problem
#include <iostream>
 using namespace std;
 int findmax(int arr[],int n){
     int max= arr[0];
     for(int i=0;i<n;i++){
         if(arr[i]>max){
             max=arr[i];
         }
     }
     return max;
 }
 int main (){
 int arr[]= {3,7,1,9,2};
 int n=5;
 cout<<"Maximum Elements is :"<<findmax(arr,n);
}
