/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-02-15 14:28:42 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-02-15 15:36:23
 */
#include<string>
#include<iostream>
using namespace std;
int main(void){
    string up("bdfhiklt");
    string down("gjpq");
    string word,out;
    while(cin>>word){
        out.clear();
        for(string::size_type pos=0;pos<word.size();pos++)
            if((up.find(word[pos])==string::npos)&&(down.find(word[pos])==string::npos))
                out.push_back(word[pos]);
        cout<<out;
    }
    return 0;
}