#include<iostream>

int main(){
    int w,sum,rem;
    std::cin >> w;
    sum = w-2;
    if(sum>1){
        rem = sum%2;
        switch (rem){
        case 0: std::cout<<"YES"; break;
        default: std::cout<<"NO"; break;
        }
    } else {
        std::cout<<"NO";
    }
    return 0;
}

