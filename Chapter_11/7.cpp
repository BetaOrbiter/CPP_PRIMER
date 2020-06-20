/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-04-02 22:58:52 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-04-02 23:08:28
 */
#include<map>
#include<vector>
#include<string>
#include<iostream>
int main(void){
    std::map<std::string,std::vector<std::string>> m;
    for(std::string lastname;std::cout<<"Last name:\n",std::cin>>lastname&&lastname!="@q";)
        for(std::string firstname;std::cout<<"First names:\n",std::cin>>firstname&&firstname!="@q";)
            m[lastname].push_back(firstname);
    
    for(const auto&fm:m)
        for(const auto&name:fm.second)
            std::cout<<name<<' '<<fm.first<<std::endl;

    return 0;
}