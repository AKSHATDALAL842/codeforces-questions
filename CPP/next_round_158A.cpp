#include<iostream>

int main(){
    int n,k,count=0;
    std::cin >> n;
    int arr[n];
    std::cin >> k;
    for (int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        if(arr[i]>k){
            count++;
        }
    }
    std::cout<<count;
    return 0;
}