#include<iostream>

int main(){
    int t, b=0;
    std::cin >> t;
    std::string a;
    while(t--){
        std::cin >> a;
        if(a =="++X" || a == "X++" || a == "++x" || a == "x++"){
            b++;
        } else{
            b--;
        }
    }
    std::cout << b;
    return 0;
}