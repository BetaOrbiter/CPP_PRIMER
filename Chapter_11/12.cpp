#include<string>
#include<vector>
#include<utility>
#include<iostream>
int main(void){
    std::vector<std::pair<std::string,int>> vec;
    std::string ss;
    int i;
    while(std::cin>>ss>>i){
        vec.push_back(std::make_pair(ss,i));
        vec.push_back({ss,i});
        vec.push_back(std::pair<std::string,int>(ss,i));
        vec.push_back(std::pair<std::string,int>{ss,i});
        vec.push_back(std::vector<std::pair<std::string,int>>::value_type(ss,i));
    }
    for(auto &i:vec)
        std::cout<<i.first<<' '<<i.second<<std::endl;
}