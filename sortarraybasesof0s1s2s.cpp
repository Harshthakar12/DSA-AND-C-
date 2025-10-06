 //sort an array based on 0s 1s 2s
 #include <iostream>
 using namespace std;
 void resolve(int arr[],int n){
         int low=0;
         int high=n-1;
         int mid=0;
         while(mid<=high){
             if(arr[mid]==0){
                 swap(arr[mid],arr[low]);
                 low++;
             mid++;
             }
             else if(arr[mid]==1){
                 mid++;
             }
             else if(arr[mid]==2){
                 swap(arr[mid],arr[high--]);
                
                
                
                
             }
        
         }
     }
     void printarray(int arr[],int n){
         for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }
     }
 int main (){
    
     int arr[]={2,0,1,2,0,1};
     int n=sizeof(arr)/sizeof(arr[0]);
     resolve(arr,n);
     printarray(arr,n);
 }
