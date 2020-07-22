#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include <iostream>
int main(void){
    std::list<int>lst;
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
    std::sort(vec.begin(),vec.end());
    std::unique_copy(vec.cbegin(),vec.cend(),std::back_inserter(lst));

    for(auto i:lst)
        std::cout << i << std::endl;
    return 0;
}