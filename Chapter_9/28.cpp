/*
 * @Author: 李洲诚 
 * @Date: 2020-02-13 21:02:19 
 * @Last Modified by: 李洲诚
 * @Last Modified time: 2020-02-13 22:10:40
 */
#include<forward_list>
#include<string>
using namespace std;
void insert(forward_list<string> &fl,const string &s1,const string &s2);
int main(void){
    string s1("123456");
    string s2("qwer");
    forward_list<string> fl;
    fl.push_front(s1);
    insert(fl,s1,s2);
    return 0;
}
void insert(forward_list<string> &fl,const string &s1,const string &s2){
    auto traget=fl.begin();
    while(traget!=fl.end())
        traget++;
    if(traget!=fl.end())
        fl.insert_after(traget,s2);
    else
        fl.push_front(s2);
}