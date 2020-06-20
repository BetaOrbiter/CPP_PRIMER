/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-04-04 16:38:35 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-04-04 16:54:46
 */
#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<cctype>
using namespace std;
int main(void){
    string word;
    map<string,size_t> wordCount;
    while (cin>>word)
    {
        auto re=wordCount.insert({word,1});
        if(false==re.second)
            ++re.first->second;
    }
    return 0;
}