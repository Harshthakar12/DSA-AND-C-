//stock buy and sell
 #include <iostream>
 #include <string>
 #include <vector>
 #include <climits>
 using namespace std;
 int maxprofit(vector<int>&price){
     int minprice=INT_MAX;
     int maxprofit=0;
     for(int i=0;i<price.size();i++){
         if(price[i]<minprice){
         minprice=price[i];
         }
    
     int profit=price[i]-minprice;
     if(profit>maxprofit){
         maxprofit=profit;
     }
 }
     return maxprofit;

 }
 int main ()
 {
    vector<int>price={7,1,5,3,6,4};
    cout<<"Maximum Profit is : "<<maxprofit(price);
 }
