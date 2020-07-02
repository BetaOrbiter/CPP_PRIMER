#include<iostream>
#include<numeric>
#include<vector>
int main(void){
    std::vector<int> vec{1,2,3,4,5};
    std::cout<<std::accumulate(vec.cbegin(),vec.cend(),0);
    return 0;
}