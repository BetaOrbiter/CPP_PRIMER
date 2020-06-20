/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-02-14 22:23:54 
 * @Last Modified by: ¿Ó÷ﬁ≥œ
 * @Last Modified time: 2020-02-14 23:06:32
 */
#include <string>
#include <iostream>
using namespace std;
string add_pre_and_suffix_iter(string name, const string &prefix, const string &suffix)
{
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(suffix);
    return name;
}
string add_pre_and_suffix(string name, const string &pre, const string &suf)
{
    name.insert(0, pre);
    name.insert(name.size(), suf);
    return name;
}
int main(void)
{
    string name("lzc");
    string prefix("Mr.");
    string suffix("Jr");
    cout << add_pre_and_suffix_iter(name, prefix, suffix) << '\n';
    cout << add_pre_and_suffix(name, prefix, suffix);
    return 0;
}