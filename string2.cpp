#include<bits/stdc++.h>
using namespace std;

int Solve(int n,string s){
    vector<string> str={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int count=0;
    int r=n%7;
    int r1=n/7;
    int i=0;
    int j=0;
    while(i<7){
        if(s==str[i]){
            j=i;
            break;
        }
        i++;
    }
   for(int k=1;k<=r;k++){
       if(str[(j+k)%7] == "Sunday"){
           cout<<"yep";
           return r1+1;
       }
   }
    
  return  r1;
    
    
    
}

int main(){
    
   string s = "Monday";
    int n = 5;
    int c=Solve(n,s);
    cout<<c;
    
}