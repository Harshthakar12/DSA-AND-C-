//Binary number system

 #include <iostream>
 using namespace std;
 int convert(int decnum){
     int ans=0;
     int power=1;
     while(decnum>0){
         int reminder=decnum%2;
         decnum=decnum/2;
         ans=ans+(reminder*power);
         power*=10;
         }
         return ans;
 }
 int main (){
     int decnum=50;
     cout<<convert(decnum);
 }
