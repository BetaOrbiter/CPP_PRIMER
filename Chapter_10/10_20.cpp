#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

std::vector<std::string>::size_type greatThanN(std::vector<std::string> &vec,int n){
    return std::count_if(vec.begin(),vec.end(),
                        [n](const std::string &a)
                            {return a.size()>n;});
}
int main(void){
    std::vector<std::string> words{"12345","123456","1234567","12345678"};
    std::cout << greatThanN(words, 6);
    return 0;
}