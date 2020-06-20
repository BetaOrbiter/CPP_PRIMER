/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-02-14 23:09:05 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-02-14 23:21:52
 */
#include<string>
#include<iostream>
using namespace std;
int main(void){
    string num("0123456789");
    string s("ab2c3d7R4R6");
    for(string::size_type pos=0;(pos=s.find_first_of(num,pos))!=string::npos;pos++)
        cout<<s[pos];
    for(string::size_type pos=0;(pos=s.find_first_not_of(num,pos))!=string::npos;++pos)
        cout<<s[pos];
    return 0;
}