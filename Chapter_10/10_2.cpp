#include<iostream>
#include<algorithm>
#include<list>
#include<string>
int main(void){
    std::string val;
    std::list<decltype(val)> lst;
    while(std::cin>>val)
        lst.push_back(val);
    std::cout<<"The last val appears "<<std::count(lst.cbegin(),lst.cend(),val)<<" times";
    return 0;
}