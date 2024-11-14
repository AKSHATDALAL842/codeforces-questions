#include<iostream>

void lowercase(std::string &s){
    for (int i = 0; i < s.length(); i++){
        if (s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
}

int main(){ 
    std::string s1, s2;
    int count = 0;
    std::cin >> s1 >> s2;
    lowercase(s1);
    lowercase(s2);
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] > s2[i]){
            std::cout << 1; count++; break;
        } else if(s1[i] < s2[i]){
            std::cout << -1; count++; break;
        } 
    }
    if (count == 0){
        std::cout<<0;
    }
    
    return 0;
}