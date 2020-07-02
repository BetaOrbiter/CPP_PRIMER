#include<algorithm>
#include<vector>
#include<iostream>
int main(void){
    std::vector<int>vec{1,2,3,4,5,6,7};
    std::fill_n(vec.begin(),vec.size(),0);
    for(const auto &i:vec)
        std::cout<<i;
    return 0;
}