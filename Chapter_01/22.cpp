#include<iostream>
#include"../data/Sales_item.h"
int main(void){
    Sales_item result;
    for(Sales_item item;std::cin>>item;)
        result+=item;
    std::cout<<result;
    return 0;
}