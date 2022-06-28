#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

int main (void) {
  int arr[8] = {3,7,12,45,26,81,52,33};
  //Write the source code here
  cout<<"Normal Array : "<<endl;
  for(int i=0;i<8;i++){
   cout<<"arr"<<"["<<i<<"] = "<<arr[i]<<endl;
  }  
  sort(arr, arr+8);
  cout<<"Array sorted : "<<endl;
  for(int i=0;i<8;i++){
    cout<<"arr"<<"["<<i<<"] = "<<arr[i]<<endl;
  }
}
