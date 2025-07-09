// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//space complexity:


void printSum(int arr[] ,int n){
    int sum=0; //constant space
    for(int i=0; i<n; i++){
        sum+=arr[i];
        
    }
    cout<<"Sum "<<sum<<endl;
}

int main() {
    // Write C++ code here
    int arr[]={2,4,6,8};
    printSum(arr,4);
    

    return 0;
}