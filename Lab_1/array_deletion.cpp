#include<iostream>
using namespace std;
int main(){
    int arr[100] = {13, 45, 64, 89, 77, 88};
    int size = 6;
    int pos;
    cout << "Elements before deletion:" << endl;
    for(int i = 0; i < size; i++){
     cout << arr[i] << endl;
    }
    cout << "Enter index to delete (0-" << size - 1 << "): ";
    cin >> pos;
    if(pos < 0 || pos >= size){
     cout << "Invalid index!" << endl;
    return 0;
    }
    // shift elements left to overwrite the deleted one
    for(int i = pos; i < size - 1; i++){
     arr[i] = arr[i + 1];
    }
    size--;
    cout << "Elements after deletion:" << endl;
    for(int i = 0; i < size; i++){
    cout << arr[i] << endl;
    }
    return 0;
}