Find Smallest Number in Loop
 #include <iostream>
 #include<climits>
 using namespace std;
 int main(){
     //Largest Possible value
     int smallest =INT_MAX;
     int arr[]={1,2,3,4,5};
     int size=5;
     for(int i=0;i<size;i++){
         if(arr[i]<smallest){
             smallest=arr[i];
         }
     }
                 cout<<"Smallest Number Is : "<<smallest<<endl;

}
