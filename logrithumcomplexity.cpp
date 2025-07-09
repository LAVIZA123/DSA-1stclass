// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// o(log(n)) = logrithum complexity

int binarysearch(int arr[],int n,int k){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k)
        return mid;
        else if(arr[mid]<k)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int index=binarysearch(arr,5,30);
    cout<<"Element found at index "<<index<<endl;
    return 0;

    
}
    
