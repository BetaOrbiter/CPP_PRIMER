#include <fstream>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std::placeholders;
void print(std::ostream_iterator<int> &outIter1,std::ostream_iterator<int> &outIter2, int i){
    *(i&1 ? outIter1 : outIter2) = i;
}
int main(int argc, char** argv ){
    std::ifstream inf(argv[1]);
    std::ofstream outf1(argv[2]), outf2(argv[3]);

    std::istream_iterator<int> inIter(inf), inEnd;
    std::ostream_iterator<int> outIter1(outf1," "), outIter2(outf2,"\n");

    std::for_each(inIter,inEnd,std::bind(print,outIter1,outIter2,_1));
    //另一种写法
    std::for_each(inIter,inEnd,[&](const int i)
                                {(i&1 ? outIter1 : outIter2) = i;});
    return 0;
}