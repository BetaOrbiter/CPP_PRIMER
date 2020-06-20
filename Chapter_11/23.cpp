/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-04-04 16:54:54 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-04-04 17:18:38
 */
#include<map>
#include<string>
#include<iostream>
using namespace std;
int main(void){
    multimap<string,string> families;
    string firstName,lastName;
    while (cin>>lastName>>firstName)
        families.emplace(lastName,firstName);

    for(const auto&i:families)
        cout<<i.first<<' '<<i.first<<endl;
    return 0;
}