#include <bits/stdc++.h>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       std::cin >> arr[arr_i];
    }
    
    // One-liner ahead!
    for(auto it=arr.rbegin(); it!= arr.rend(); it++) std::cout << *it  << " ";
        
    return 0;
}

