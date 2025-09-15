//Find Largest Number In Loop
 #include <iostream>
 #include<climits>
 using namespace std;
 int main(){
     //Largest Possible value
     int largest =INT_MIN;
     int arr[]={1,2,3,4,5};
     int size=5;
     for(int i=0;i<size;i++){
         if(arr[i]>largest){
             largest=arr[i];
         }
     }
                 cout<<"largest Number Is : "<<largest<<endl;


     }
