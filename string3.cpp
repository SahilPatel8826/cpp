#include <iostream>
#include <climits>
#include <map>
using namespace std;

char Solve(char arr[], int n) {

    map<char,int> s;

    // count frequency
    for(int i = 0; i < n; i++) {
        s[arr[i]]++;
    }

    // find odd frequency character
    for(auto x : s) {
        if(x.second % 2 != 0) {
            return x.first;
        }
    }

    return '0';   // ✅ correct
}

int main() {

    char arr[3] = {'b','b','c'};   

    char s = Solve(arr, 3);

    if(s=='0')
        cout<<"All are even";
    else
        cout<<s;

}