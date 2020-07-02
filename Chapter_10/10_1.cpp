#include<iostream>
#include<algorithm>
#include<vector>
int main(void){
    int val;
    std::vector<int> vec;
    while(std::cin>>val)
        vec.push_back(val);
    std::cout<<"The last val appears "<<std::count(vec.cbegin(),vec.cend(),val)<<" times";
    return 0;
}