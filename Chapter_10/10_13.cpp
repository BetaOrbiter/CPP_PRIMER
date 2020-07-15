#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
void print(const std::vector<std::string> vec){
    for(const auto &ele:vec)
        std::cout<<ele<<' ';
    std::cout<<std::endl;
}
void print(std::vector<std::string>::const_iterator begin,std::vector<std::string>::const_iterator end){
    for(auto iter = begin;iter!=end;iter++)
        std::cout<<*iter<<' ';
    std::cout<<std::endl;
}
inline bool over5(const std::string&a){return a.size()>=5;}
int main(void){
    std::vector<std::string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    print(words);
    auto newEnd = std::partition(words.begin(),words.end(),over5);
    print(words.cbegin(),newEnd);
    return 0;
}