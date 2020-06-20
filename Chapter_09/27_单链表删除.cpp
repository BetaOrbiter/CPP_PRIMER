/*
 * @Author: 李洲诚 
 * @Date: 2020-02-13 20:43:56 
 * @Last Modified by: 李洲诚
 * @Last Modified time: 2020-02-13 20:59:01
 */
#include<forward_list>
using namespace std;
int main(void){
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    forward_list<int> fl(ia,ia+10);
    for(auto pre=fl.before_begin(),now=fl.begin();now!=fl.end();)
        if(*now%2)
            now=fl.erase_after(pre);
        else
        {
            pre=now;
            now++;
        }
        return 0;
}