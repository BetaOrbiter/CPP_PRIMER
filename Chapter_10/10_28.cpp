#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
void print(const std::list<int> lst){
    for(auto const &i:lst)
        std::cout<< i << std::endl;
    std::cout << std::endl;
}
int main(void){
    std::vector<int> vec;
    std::list<int> lst1,lst2,lst3;
    for(int i=1;i<=9;++i)
        vec.push_back(i);
    
    std::copy(vec.cbegin(),vec.cend(),std::front_inserter(lst1));
    print(lst1);

    std::copy(vec.cbegin(),vec.cend(),std::back_inserter(lst2));
    print(lst2);
    
    copy(vec.cbegin(),vec.cend(),std::inserter(lst3,lst3.begin()));
    print(lst3);

    return 0;
}