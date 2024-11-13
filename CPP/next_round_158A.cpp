#include<iostream>

int main(){
    int n,k,count=0;
    std::cin >> n >> k;
    int arr[n];
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


// *************CORRECT ANSWER******************
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     int a;
//     for (int i = 0; i < k; ++i)
//     {
//         cin >> a;
//         if (a == 0)
//         {
//             cout << i << endl;
//             return 0;
//         }
//     }

//     int b;
//     for (int i = k; i < n; ++i)
//     {
//         cin >> b;
//         if (b != a)
//         {
//             cout << i << endl;
//             return 0;
//         }
//     }

//     cout << n << endl;
//     return 0;
// }