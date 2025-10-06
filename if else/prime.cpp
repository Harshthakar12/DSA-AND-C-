//Check if the given number is prime or not

 #include <iostream>
using namespace std;
int main (){
bool isPrime=true;
 int n;
cout<<"Enter A Number :";
cin>>n;
for(int i=2;i<=n-1;i++){
 if(n%i==0){
 isPrime=false;
break;
  }
}
if(isPrime==true){
cout<<"It Is Prime Number"<<endl;
}else{
cout<<"Is Not a Prime Number"<<endl;
}
}
