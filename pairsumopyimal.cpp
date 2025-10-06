optimal solution
 #include <iostream>
 #include <vector>
 using namespace std;
 vector<int> function(vector<int>&vec,int target){
     vector<int>ans;
     int n=vec.size();
     int start=0;
     int end =n-1;
     while(start<end){
         int pairsum=(vec[start]+vec[end]);
             if(pairsum>target){
                 end--;
             }else if(pairsum<target){
                 start++;
             }else{
                 ans.push_back(start);
                 ans.push_back(end);
                 break;
             }
     }
     return ans;
 }
 int main (){
 vector<int>vec={2,7,11,15};
 int target =9;
 vector<int>ans=function(vec,target);
 cout<<ans[0]<<","<<ans[1]<<endl;
 return 0;
 }optimal solution
 #include <iostream>
 #include <vector>
 using namespace std;
 vector<int> function(vector<int>&vec,int target){
     vector<int>ans;
     int n=vec.size();
     int start=0;
     int end =n-1;
     while(start<end){
         int pairsum=(vec[start]+vec[end]);
             if(pairsum>target){
                 end--;
             }else if(pairsum<target){
                 start++;
             }else{
                 ans.push_back(start);
                 ans.push_back(end);
                 break;
             }
     }
     return ans;
 }
 int main (){
 vector<int>vec={2,7,11,15};
 int target =9;
 vector<int>ans=function(vec,target);
 cout<<ans[0]<<","<<ans[1]<<endl;
 return 0;
 }
