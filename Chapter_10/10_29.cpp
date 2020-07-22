#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>

int main(void){
    std::ifstream file("10_29.txt");
    std::istream_iterator<std::string> strInIter(file);
    decltype(strInIter) end;

    std::ostream_iterator<std::string> os(std::cout," ");

    std::vector<std::string> vec;
    std::copy(strInIter,end,std::back_inserter(vec));
    for(auto const &ele:vec)
        *os++ = ele;
    file.close();
    return 0;
}