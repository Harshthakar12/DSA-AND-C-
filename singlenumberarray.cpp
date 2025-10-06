//find single number in an array
 #include <iostream>
 #include <vector>
 using namespace std;
 int main(){
     int ans=0;
     vector<int>vec={1,2,2,4,4};
     for(int i:vec){
         ans= ans^i;
     }
     cout<<ans;


 }
