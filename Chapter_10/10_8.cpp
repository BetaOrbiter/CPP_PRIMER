#include<algorithm>
#include<iterator>
#include<vector>
#include<iostream>
int main(void){
    std::vector<int> vec{1,2,3,4,5};
    auto it=std::back_inserter(vec);
    std::fill_n(it,10,9);
    for(const auto &i:vec)
        std::cout<<i<<std::endl;
    return 0;
}