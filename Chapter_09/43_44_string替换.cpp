/*
 * @Author: 李洲诚 
 * @Date: 2020-02-14 17:31:11 
 * @Last Modified by: 李洲诚
 * @Last Modified time: 2020-02-14 22:02:09
 */
#include<string>
#include<iostream>  
using std::string;
void change_iterator(string &s,const string& oldVal,const string&newVal){
    auto ptr=s.begin();
    while(ptr!=s.end()-oldVal.size()){
        if(oldVal==string(ptr,ptr+oldVal.size())){
            ptr=s.erase(ptr,ptr+oldVal.size());
            ptr=s.insert(ptr,newVal.begin(),newVal.end());
            ptr+=newVal.size();
        }
        else
            ptr++;
    }
}
void change(string &s,const string &oldVal,const string &newVal){
    for(auto i=s.find(oldVal);i!=string::npos;i=s.find(oldVal,i))
        s.replace(i,oldVal.size(),newVal);
}
int main(void){
    string s("thusqqqthusqqqabcqqq");
    string _old("thus");
    string _new("though");
    change_iterator(s,_old,_new);
    std::cout<<s;
    return 0;
}