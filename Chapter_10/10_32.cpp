#include <iostream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <vector>
#include "../data/Sales_item.h"
int main(void){
    std::ostream_iterator<Sales_item> outIter(std::cout,"\n");
    std::istream_iterator<Sales_item> inIter(std::cin),inEnd;
    std::vector<Sales_item> books(inIter,inEnd);

    std::sort(books.begin(),books.end(),compareIsbn);
    for(auto beg=books.cbegin(), end=beg;beg!=books.cend(); beg=end){
        end = std::find_if_not(beg,books.cend(),[&beg](const Sales_item &a)->bool
                                                {return compareIsbn(*beg,a);});
        *outIter++ = std::accumulate(beg,end,Sales_item(beg->isbn()));
    }
    return 0;   
}