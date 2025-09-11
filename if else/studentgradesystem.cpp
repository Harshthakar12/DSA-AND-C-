//student grading system 

#include <iostream>
 using namespace std;
int main(){
string student;
int marks;
cout<<"Enter Student name : ";
cin>>student;
cout<<"Enter Marks :";
cin>>marks;
if(marks>=90){
 cout<<"A Grade"<<endl;

}else if(marks<=80 && marks>90){ 
 cout<<"B Grade "<<endl;

}else {
 cout<<"C Grade "<<endl;
}
}