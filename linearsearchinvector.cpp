//linear search using vector
 #include <iostream>
 #include <vector>
 using namespace std;
 int main (){
     vector<int>vec={1,2,3,4,5,6,7};
     int target=1;
     for(int i: vec){
         if(i==target){
             cout<<"Elements is :"<<i;
         }
         }
     }
