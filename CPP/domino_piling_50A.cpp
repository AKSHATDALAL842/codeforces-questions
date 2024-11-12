#include<iostream>

int main(){
    int m,n,total;
    std::cin >> m >> n;
    if(n%2==0){
        n/=2;
        total = n*m;
        std::cout<<total;
    } else {
        n--;
        n/=2;
        if(m%2==0){
            total = (n*m) + (m/2);
            std::cout<<total;
        } else {
            total = (n*m) + ((m-1)/2);
            std::cout<<total;
        }
    }

    return 0;
}