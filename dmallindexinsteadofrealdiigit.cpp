//printing Index of smallest number instead of real digit.
 #include <iostream>
  #include<climits>
  using namespace std;
  int main(){
      //Largest Possible value
      int smallest =INT_MAX;
      int smallestIndex=-1;
      int arr[]={1,2,3,4,5};
      int size=5;
      for(int i=0;i<size;i++){
          if(arr[i]<smallest){
              smallest=arr[i];
              smallestIndex=i;
         }
      }
                  cout<<"Index Of Smallest Number Is : "<<smallest<<endl;

     }
