// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include<climits>
// using namespace std;

// int Solve(int arr[],int n){
//   int maxi=arr[0];
//   int count=1;
//   for(int i=1;i<n;i++){
//       if(arr[i]>maxi){
//           count++;
//           maxi=arr[i];
//       }
      
      
//   }
  
//   return count;
 
    
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n]={7,4,2,18};
   
//      int s= Solve(arr,4);
//      cout<<s;

    
// }

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void Solve(int arr[],int n){
    int zero=0;
    int first=0;
    int second=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)zero++;
        else if(arr[i]==1)first++;
        else second++;
    }
    
    for(int i=0;i<zero;i++){
        arr[i]=0;
    }
    for(int i=zero;i<first+zero;i++){
        arr[i]=1;
    }
     for(int i=first+zero;i<first+zero+second;i++){
        arr[i]=2;
    }
    
}
int main() {
    // Write C++ code here
    int arr[5]={0,0,2,1,2};
    Solve(arr,5);
    for(int x:arr){
        cout<<x;
    }
}