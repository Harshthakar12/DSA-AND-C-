pair sum
 #include <iostream>
 #include <vector>
 using namespace std;
 vector<int>pairsum(vector<int>&vec,int target,int size){
     vector<int>ans;
     int size=vec.size();
 for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
         if(vec[i]+vec[j]==target){
             ans.push_back(i);
             ans.push_back(j);

         }
     }

     }
     return ans;
 }
 int main (){
     vector<int> vec={2,7,11,15};
     int target =9;
     vector<int>ans=pairsum(vec,target);
     cout<<ans[0]<<" ,"<<ans[1]<<endl;

    
 }
