#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>

using namespace std::placeholders;

bool check_size(const std::string &s,int n){
    return s.size()<n;
}
int main(void){
    std::vector<int> vec{1,4,7,4,9,5,6,8};
    std::cout << *std::find_if(vec.cbegin(),vec.cend(),bind(check_size,"CPP",_1));
    return 0;
}