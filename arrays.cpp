#include <iostream>
using namespace std;
void display(int arr[], int size){
    for (int i = 0; i < size; i++){
       cout<<arr[i]<<endl;
    }
    
}
int main(){
    int size;
    size = 5;
    int arr[size];
    cout<<"Enter your data: "<<endl;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    display(arr, size);
    
    return 0;
}