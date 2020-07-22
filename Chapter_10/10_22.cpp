#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std::placeholders;
bool lessOrEqualThanN(const std::string &s, std::string::size_type n){
    return s.size()<=n;
}
int main(void){
    std::vector<std::string> words{"12345","123456","1234567","12345678"};
    auto f = bind(lessOrEqualThanN,_1,6);
    std::cout << std::count_if(words.cbegin(),words.cend(),f);
    return 0;
}