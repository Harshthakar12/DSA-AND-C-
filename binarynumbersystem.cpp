// // deciaml to binary
// #include <iostream>
// using namespace std;
// int demcialtobinary(int decnum){
//    int ans=0; 
//    int power=1;
//    while(decnum>0){
    
//    int reminder=decnum%2;
//    decnum=decnum/2;
//    ans=ans+(reminder*power);
//     power=power*10;
// }
// return ans;
// }
// int main(){
//     int decnum=50;
//     cout<<demcialtobinary(decnum);
// }


//array
//find smallest number in array
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
// int smallest=INT_MAX;
// int arr[]={3,2,1,4,5,6};
// int size=6;
// for(int i=0;i<size;i++){
//     if(arr[i]<smallest){
//         smallest=arr[i];
//     }
// }
// cout<<"smallest at index "<<arr[smallest]<<endl<<smallest;

// }




//linear search(linear approach)
// #include <iostream>
// using namespace std;
// int linearsearch(int arr[],int size,int target){
// for(int i=0;i<=size;i++){
//     if(arr[i]==target){
// cout<<"Target is found at index"<<" "<< i;
//     }
// }
// return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int size=8;
//     int target;
//       cout<<"enter a number  : ";
//     cin>>target;
  
//     cout<<linearsearch(arr,size,target);

// } 


//reverse array
// #include <iostream>
// using namespace std;
// void reversearray(int arr[],int size){
// int start=0;
// int end = size-1;
// while(start<=end){
// swap(arr[start],arr[end]);
// start++;
// end--;
// }

// }
// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//         }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size=7;
//     reversearray(arr,size);
//     printarray(arr,size);
// }


//maximum subarray sum using brute force approach
// #include <iostream>
// #include <climits>
// using namespace std;
// int main (){
//     int arr[]={1,2,3,4,5};
//     int maxsum=INT_MIN;
//     int n=5;
//      //find start index and run loop
//      for(int start=0;start<n;start++){
//         //define current sum to avoid extra loop
//         int currentsum=0;
//         //find end and traverse
//         for(int end=start;end<n;end++){
//             currentsum=currentsum+arr[end];
//             maxsum=max(currentsum,maxsum);

//         }
//      }
//      cout<<"Maximum SubArray is : "<<maxsum;
// }


//solving same question using kadane's algorithm
// this algorithm says that if our answer is becoming negative then reset it with 0
//  #include <iostream>
// #include <climits>
// using namespace std;
// int main (){
//     int arr[]={1,2,3,4,5};
//     int maxsum=INT_MIN;
//     int n=5;
//      //find start index and run loop
//      for(int start=0;start<n;start++){
//         //define current sum to avoid extra loop
//         int currentsum=0;
//         //find end and traverse
//         for(int end=start;end<n;end++){
//             currentsum=currentsum+arr[end];
//             maxsum=max(currentsum,maxsum);
//             if(currentsum<0){
//                 currentsum=0;
//             }

//         }
//      }
//      cout<<"Maximum SubArray is : "<<maxsum;
// }


//pairsum
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int>pairsum(vector<int>nums,int target) {  
//         vector<int> ans;
//         int n=nums.size();
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(nums[i]+nums[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }

// }
// return ans;
// }
// int main (){
    
//     vector<int>nums={2,7,11,15};
//  int target;
//     cout<<"Enter a Target :";
//     cin>>target;

//  vector<int>ans=pairsum(nums,target);
//  cout<<ans[0]<<" "<<ans[1]<<" "<<endl;
// }


//optimization
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int>pairsum(vector<int>nums,int target) {  
//         vector<int> ans;
//         int n=nums.size();
//         int start=0;
//         int end=n-1;
//         while(start<end){
//             int pairsum=nums[start]+nums[end];
//             if(pairsum>target){
//                 end--;
//             }
//             else if(pairsum < target){
//                 start ++;
//             }
//             else{
//                 ans.push_back(start);
//                 ans.push_back(end);
//                 return ans;
//             }
//                 }
//                 return ans;
// }
// int main (){
    
//     vector<int>nums={2,7,11,15};
//  int target;
//     cout<<"Enter a Target :";
//     cin>>target;

//  vector<int>ans=pairsum(nums,target);
//  cout<<ans[0]<<" "<<ans[1]<<" "<<endl;
// }


//majority element brute force approach 
// #include <iostream>
// #include <vector>
// using namespace std;
// int majority(vector<int>a, int n){
//     for(int i=0;i<n;i++){
//         int frequency=0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 frequency++;
//             }
//             if(frequency>n/2){
//         return a[j];

//     }
//         }
         
//     }
   
//     return -1;
// }
// int main(){
// vector<int>a{1,2,2,1,1};
// int n=a.size();
// cout<<majority(a,n);
// }



//maximu water in container
// #include <iostream>
// #include <climits>
// using namespace std;
// int main (){
// int maxwater=0; 
// int arr[]={1,8,6,2,5,4,8,3,7};
// int n=8;
// for(int left=0;left<=n;left++){
//     for(int right =left+1;right<=n;right++){
//         int width=right-left;
//         int height=min(arr[left],arr[right]);
//         int area=width*height;
//         maxwater=max(maxwater,area);
//     }
 
// }
// cout<<"maximum water is : "<<maxwater;

// }




//optimization
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int arr[]={1,8,6,2,5,4,8,3,7};
//     int size=9;
//     int left=0;
//     int right=size-1;
//     int maxwater=0;
//     while(left<right){
//     int width=right-left;
//             int height=min(arr[left],arr[right]);
//        int currentarea=width*height;
//          maxwater=max(currentarea,maxwater);

//         if(arr[left]<arr[right]){
//             left++;
//         }
//         else{
//             right --;
//         }
//     }
//             cout<<"Maximum water in a containe is : "<<maxwater;

    
    
// }



//product of array except self
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
// int arr[]={1,2,3,4};
// int n =4;
// vector<int>ans(n);
// for(int i=0;i<n;i++){
//     int product=1;
//     for(int j=0;j<n;j++){
// if(i!=j){
//     product=product*arr[j];
// }
//   ans[i]=product;
// }
//     }
  
// for(int i=0;i<n;i++){
//     cout<<ans[i]<<" ";
// }
// }

//binary search
// #include <iostream>
// #include <vector>
// using namespace std;
// int binary(vector<int> & arr,int target){
// int start=0;
// int end=arr.size()-1;;
// while(start<=end){
//     int mid=(start+end)/2;
//     if(target>arr[mid]){
//         start=mid+1;
//     }else if(target<arr[mid]){
//         end=mid-1;
//     }
//     else{
//         return mid;
//     }
// }
// return -1;
// }
// int main(){
//     vector<int> arr={0,1,3,4,5,9,12};
//     int target;
//     cout<<"Enter a target :";
//     cin>>target;
//     int result = binary(arr,target);
//     cout<<result;
// }

//search in a sorted rotated array
// #include<iostream>
// using namespace std;
// int rotated (int arr[],int n,int target){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==target)return mid;
//             if(arr[start]<=arr[mid]){
//             if (arr[start]<=target&&target<=arr[mid]){
//             end=mid-1;
//             }else{
//                 start=mid+1;
                 
//             }

//         }else{
//             if(arr[mid]<=target&& target<=arr[end]){
//                 start=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//         }
        
//     return -1;
// }
// int main(){
//     int arr[]={3,4,5,6,7,0,1,2};
//     int n=8;
//     int target;
//     cout<<"Enter a target :" ;
//     cin>>target;
//     int result=rotated(arr,n,target);
//     cout<<result;
// }



//peak element in a mountain array
// #include <iostream>
// using namespace std;
// int peakelement(int arr[],int n){
//     int start=1;
//     int end=n-2;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])return mid;
//         if(arr[mid-1]<arr[mid]){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main (){
//     int arr[]={0,3,8,9,5,2};
//     int n=6;
//    int ans= peakelement(arr,n);
//    cout<<"peak element is at index: "<<ans;


// }


//book allocation problem
// #include <iostream>
// using namespace std;
// bool ispossible(int arr[],int students,int size,int mid){
// int studentcount=1;
// int pagesum=0;
// for(int i=0;i<size;i++){
//     if(pagesum+arr[i]<=mid){
// pagesum+=arr[i]; 
//     }else{
//         studentcount++;
//          pagesum=arr[i];
//     }
//     if(studentcount>students){
//          return false;
//     }
   

// }
// return true;
// }
// int main (){
//      int sum=0;
//       int size=4;
//     int arr[]={10,20,30,40,};
//      for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//     }
//     int ans=-1;
//     int students=2;
   
//     int start=0;
   
   
//     int end=sum;
   
//         int mid=start+(end-start)/2;
    
//      while(start<=end){
//     if(ispossible(arr,students,size,mid)){
//     ans=mid;
//   end=mid-1;
//     }
//     else{
//         start=mid+1;;
//     }
//     mid=start+(end-start)/2;
// }
// cout<<"maximum pages : "<<ans;
// }


//painters partition problem
// #include <iostream>
// using namespace std;
// bool ispossible(int boards[],int painters,int size,int mid){
//     int boardscount=0;
//     int totalpainters=1;
//     for(int i=0;i<size;i++){
//         if(boardscount+arr[painters]>arr[painters]){
//              boardscount+arr[painters]}

//         else{
            

       
//             totalpainters++;
//             boardscount=arr[painters];
           
//         }if(totalpainters>painters){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int boards[]={5,5,5,5};
//     int ans=-1;
//     int painters=2;
//     int sum=0;
//     int size=4;
//     for(int i=0;i<size;i++){
//         sum=sum+i;
//     }
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(ispossible(boards,painters,size)){
//             ans=mid;
//             end=mid-1;
//         }else{
//             start=mid+1;
//         }
//          mid=start+(end-start)/2;
//     }
   
//     cout<<"minimum time : "<<ans;
// }


//selection sort
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={64,25,12,22,11};
//     int n=5;
//     for(int i=0;i<n;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex])
//             minindex=j;
          
//         }
//  swap(arr[minindex],arr[j]);
//     }
    
//      for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }


//bubble sort
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,1,7,6,14,9};
//     int n=6;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                swap(arr[j],arr[j+1]);
//             }
            
           
//         }
       
//     }
//      cout<<"Array : ";
//           for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";

//     }
   
 
// }



//STL Standard template library
//array
#include <iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i];
        }
        cout<<endl;
        cout<<"Element at Index: "<<a.at(2)<<endl;
        cout<<"Array is empty or not : "<<a.empty()<<endl;
        cout<<"First Element in an Array : "<<a.front()<<endl;
        cout<<"Last Element in an Array : "<<a.back();


}
