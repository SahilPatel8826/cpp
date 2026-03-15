#include<bits/stdc++.h>
using namespace std;


int TopInd(int arr[]){
    int top=-1;
    for(int i=0;i<10;i++){
        if(arr[i]!=0){
            top++;
        }
    }

    return top;
}

void Push(int num,int arr[10]){
    int top = TopInd(arr);
    arr[top+1]=num;
        top++;

}

int main(){

    int arr[10]={1,2,3};
    int num=TopInd(arr);
    
    Push(4,arr);
    for(int i=0;i<=num;i++){
        cout<<arr[i]<<endl;
    }
    

}
