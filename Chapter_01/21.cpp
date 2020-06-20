#include<iostream>
#include"../data/Sales_item.h"
int main(void){
    Sales_item s1,s2;
    std::cin>>s1>>s2;
    if(s1.isbn()==s2.isbn())
        std::cout<<s1+s2;
    return 0;
}