/*
 * @Author: 李洲诚 
 * @Date: 2020-02-13 20:40:49 
 * @Last Modified by: 李洲诚
 * @Last Modified time: 2020-02-13 20:42:53
 */
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(void){
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(ia,ia+10);
    list<int> l(ia,ia+10);
    for(auto iter1=vec.begin();iter1!=vec.end();iter1++)
        if(!(*iter1%2))
            iter1=vec.erase(iter1);
    for(auto iter2=l.begin();iter2!=l.end();iter2++)
        if(*iter2%2)
            iter2=l.erase(iter2);
    
    return 0;
}