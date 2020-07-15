#include"../Chapter_07/7_26.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

int main(void){
    std::vector<std::string> trick{"a","aa","aaa","aaaa","aaaaa"};
    std::vector<Sales_data> vec(trick.begin(),trick.end());
    
    std::sort(vec.begin(),vec.end(),
                [](const Sales_data &sd1, const Sales_data &sd2)
                    {return sd1.isbn()>sd2.isbn();});
    
    for(const auto &ele:vec){
        print(std::cout,ele);
        std::cout<<std::endl;
    }
    return 0;
}