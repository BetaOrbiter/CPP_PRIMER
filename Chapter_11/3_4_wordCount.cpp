/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-04-02 22:07:34 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-04-02 22:43:17
 */
#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<cctype>
using namespace std;
const set<string> ignorant{"the","but","and","or","an","a"};
int main(void){
    string word;
    map<string,size_t> wordCount;
    while(cin>>word){
        for(auto pos=word.size();pos!=-1;pos--){
            if(word[pos]>='A'&&word[pos]<='Z')
                word[pos]-='A'-'a';
            if('.'==word[pos]||','==word[pos])
                word.erase(pos,1);

            /*
                for(auto &i:word)
                    i=tolower(i);
                word.erase(std::remove_if(word.begin(),word.end(),ispunct),word.end());
            */
        }
        if(ignorant.end()==ignorant.find(word))
            ++wordCount[word];
    }
    for(const auto i:wordCount)
        cout<<i.first<<" occurs "<<i.second<<((i.second>1)?" times":" time")<<endl;
    return 0;
}