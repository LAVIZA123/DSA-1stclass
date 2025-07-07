#include <iostream>
using namespace std;

void printAll(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
}
 
int main() {
    int arr[]={5,10,12,13,15};
    printAll(arr,3);
    
    
   

    return 0;
}