Kadane's aglorithm
// it is a type of algorithm in which we addition of small addtion value with big subration value then we we will get answer
//in negative so kadans's algorithm says that if we get negative number simplt initlize with 0..
//sum of subarray
 #include <iostream>
 #include <vector>
 #include <climits>
 using namespace std;
 int main (){
     vector<int> vec={3,-4,5,4,-1,7,-8};
     int n=8;
     int currentsum =0;
     int maxsum =INT_MIN;
     for(int i=0;i<n;i++){
     currentsum=currentsum+vec[i];
     maxsum=max(currentsum,maxsum);
     if(currentsum<0){
         currentsum=0;
     }
 }
     cout<<maxsum;
 }
