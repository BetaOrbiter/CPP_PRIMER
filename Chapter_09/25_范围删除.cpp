/*
 * @Author: mikey.zhaopeng 
 * @Date: 2020-02-13 20:02:03 
 * @Last Modified by:   mikey.zhaopeng 
 * @Last Modified time: 2020-02-13 20:02:03 
 */

#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto p1 = vec.begin();
    auto p2 = vec.begin();
    vec.erase(p1, p2);               //无事发生
    vec.erase(vec.end(), vec.end()); //无事发生
    return 0;
}