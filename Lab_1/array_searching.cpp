#include<iostream>
using namespace std;
int main(){
    int arr[100]={13,24,27,42,67};
    int value =42;
    for(int i=0;i<6;i++){
        if (arr[i]==value){
            cout<<"Value is available at index: "<<i<<endl;
        }
    }    return 0;
}