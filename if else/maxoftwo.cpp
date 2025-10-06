//Minimum of two numbers using function.
 #include <iostream>
using namespace std;
int mini(int a, int b){
     if(a<b){
         cout<<"A is Minimum"<<endl;
         return a;
     }else{
         cout<<"B is Mininum"<<endl;
         return b;
     }
 }
 int main (){
    //15 and 10 are called arguements.
 cout<<mini(15,10);
 }
