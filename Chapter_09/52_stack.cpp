/*
 * @Author: 李洲诚 
 * @Date: 2020-02-15 17:48:31 
 * @Last Modified by: 李洲诚
 * @Last Modified time: 2020-02-15 20:54:39
 */
//前缀表达式
#include<stack>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
    string s;
    stack<string,vector<string>> l;
    
    while(cin>>s){
        if(s!=")")
            l.push(s);
        else{
            vector<int> nums;
            int value;
            while(isdigit(l.top()[0])){
                nums.push_back(stoi(l.top()));
                l.pop();
            }
            char op=l.top()[0];
            l.pop(),l.pop();
            switch (op)
            {
            case '+':
                value=0;
                for(auto i:nums)
                    value+=i;
                break;
            case '-':
                value=nums[0];
                for(auto i=nums.size()-1;i>0;i--)
                    value-=nums[i];
                break;
            case '*':
                value = 1;
                for(auto i:nums)
                    value*=i;
                break;
            case '/':
                value=nums[0];
                for(auto i=nums.size()-1;i>0;i--)
                    value/=nums[i];
                break;
            }
            l.push(to_string(value));
        }
    }

    return 0;
}