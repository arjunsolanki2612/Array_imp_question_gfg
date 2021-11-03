//FIND EQUILIBRIUM POINT IN ARRAY IN O(N) TIME COMPLEXITY

#include<iostream>
using namespace std;

bool isEquilPoint(int arr[], int n){
    int left_sum=0,right_sum=0,total_sum=0;
    for (int i = 0; i < n; i++)
    {
        total_sum+=arr[i];
    }

    right_sum=total_sum;
    for (int i = 0; i < n; i++)
    {
        right_sum-=arr[i];
        if(left_sum==right_sum){
            return true;
        }
        left_sum+=arr[i];
    }
    
    
}

int main(){
    int arr[]={3,1,6,-5,4,3,2};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    cout<<(isEquilPoint(arr,arr_size)?"true":"false");

    return 0;
}