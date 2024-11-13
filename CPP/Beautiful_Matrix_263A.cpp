#include<iostream>
#include<cmath>

int main(){
    int arr;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            std::cin>>arr;
            if(arr==1){
                std::cout<<abs(i-2)+abs(j-2);
            }
        }
    }
    return 0;
}