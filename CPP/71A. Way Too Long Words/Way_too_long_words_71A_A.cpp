#include<iostream>

int main(){
    std::string a;
    int t;
    std::cin >> t;
    while(t--){
        std::cin >> a;
        if(a.length() < 11){
            std::cout << a << std::endl;
        } else{
        std::cout << a[0] << a.length()-2 << a[a.length()-1] << std::endl;
        }   
    }
    return 0;
}