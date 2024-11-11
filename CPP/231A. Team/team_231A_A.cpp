#include<iostream>

int main(){
    int t , petya, Vasya, Tonya, total, count = 0;
    std::cin>>t;
    while(t--){
        std::cin>>petya>>Vasya>>Tonya;
        total = petya + Vasya + Tonya;
        if(total > 1){
            count++;
        }
    }
    std::cout<<count;

    return 0;
}