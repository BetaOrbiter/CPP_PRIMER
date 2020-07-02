#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
void print(const std::vector<std::string> vec){
    for(const auto &ele:vec)
        std::cout<<ele<<' ';
    std::cout<<std::endl;
}
inline bool isShort(const std::string &a,const std::string &b){
    return a.size() < b.size();
}
void elimDups(std::vector<std::string>& sentence){
    std::sort(sentence.begin(),sentence.end());
    print(sentence);
    auto uniqueEnd = std::unique(sentence.begin(),sentence.end());
    sentence.erase(uniqueEnd,sentence.end());
    print(sentence);
}
int main(void){
    std::vector<std::string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    print(words);
    elimDups(words);
    std::stable_sort(words.begin(),words.end(),isShort);
    print(words);
    return 0;
}