#include<iostream> 

using namespace std; 

  

string Solve(string s){ 

   

   string ans=""; 

   int count=1; 

    for(int i=0;i<=s.length();i++){ 

        if(i<s.length()&&s[i]==s[i+1]){ 

            count++; 

        } 

        else{ 

            ans+=s[i-1]; 

            ans+=to_string(count); 

            count=1; 

        } 

      

    } 

     

    return ans; 

     

   } 

  

   int main(){ 

    string s= "aaabbbbcccdd"; 

    cout<<Solve(s); 

   } 
