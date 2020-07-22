#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main(void){
    std::istream_iterator<int> intIter(std::cin);
    decltype(intIter) end;
    std::vector<int> vec;
    std::copy(intIter,end,std::back_inserter(vec));
    std::sort(vec.begin(),vec.end(),[](int a,int b)
                                    {return a>b;});
    
    std::unique_copy(vec.cbegin(),vec.cend(),std::ostream_iterator<int>(std::cout,"\n"));
    return 0;
}