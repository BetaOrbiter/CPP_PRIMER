#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
void print(const std::vector<std::string> vec){
    for(const auto &ele:vec)
        std::cout<<ele<<' ';
    std::cout<<std::endl;
}
void elimDups(std::vector<std::string>& sentence){
    std::sort(sentence.begin(),sentence.end());
    print(sentence);
    auto uniqueEnd = std::unique(sentence.begin(),sentence.end());
    print(sentence);
    sentence.erase(uniqueEnd,sentence.end());
    print(sentence);
}
int main(void){
    std::vector<std::string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    print(words);
    elimDups(words);
    return 0;
}