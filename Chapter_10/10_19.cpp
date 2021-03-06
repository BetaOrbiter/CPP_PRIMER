#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

void elimDups(std::vector<std::string>& sentence){
    std::sort(sentence.begin(),sentence.end());
    auto uniqueEnd = std::unique(sentence.begin(),sentence.end());
    sentence.erase(uniqueEnd,sentence.end());
}

void biggies(std::vector<std::string> &words,
            std::string::size_type sz)
{
    elimDups(words);

    auto newBegin = std::partition(words.begin(),words.end(),
                                    [sz](const std::string &a)
                                        { return a.size()<sz; });
    std::for_each(newBegin, words.end(),
                    [](const std::string &a)
                        {std::cout << a << std::endl;});
    std::cout << std::endl;
}

int main(void){
    std::vector<std::string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    biggies(words, 4);
    return 0;
}