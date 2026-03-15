// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int Solve(string s){
  
    int count1=0;
    int count2=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='*'){
            count1+=1;
        }else{
           count2+=1;
        }
        
     
    }
    if(count1==count2){
        return 0;
    }
    return count1-count2;
    
}
int main() {
    
    string s;
    getline(cin,s);
    for(char i:s){
        cout<<i<<" ";
    }
    int c=Solve(s);
    cout<<c;
    

    
}