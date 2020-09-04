## [练习10.1](10_1.cpp)

> 头文件 algorithm 中定义了一个名为 count 的函数，它类似 find， 接受一对迭代器和一个值作为参数。 count 返回给定值在序列中出现的次数。编写程序，读取 int 序列存入vector中，打印有多少个元素的值等于给定值。

## [练习10.2](10_2.cpp)

> 重做上一题，但读取 `string` 序列存入 `list` 中。

## [练习10.3](10_3.cpp)

> 用 accumulate求一个 `vector<int>` 中元素之和。

## [练习10.4](10_4.cpp)

> 假定 v 是一个`vector<double>`，那么调用 accumulate(v.cbegin(),v.cend(),0) 有何错误（如果存在的话）？
```c++
#include<string>
#include<numeric>
#include<vector>
#include<iostream>
int main(void){
    std::vector<double>vec{0.3,0.2,0.1};
    std::cout<<std::accumulate(vec.cbegin(),vec.cend(),1);
    return 0;
}
```
无报错，结果是第三个参数的类型`int`。

## 练习10.5

> 在本节对名册（roster）调用equal 的例子中，如果两个名册中保存的都是C风格字符串而不是string，会发生什么？

用==比较c风格字符串，实际是在比较字符串首地址，而非比较内容。因此除非对应元素是同一个字符串，否则一定返回false。

## [练习10.6](10_6.cpp)

> 编写程序，使用 fill_n 将一个序列中的 int 值都设置为 0。

## 练习10.7

> 下面程序是否有错误？如果有，请改正：

(a)
```c++
    vector<int> vec; list<int> lst; int i;
	while (cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), vec.begin());
```
错误，vec容量小于lst，结果未定义。

(b) 
```c++
    vector<int> vec;
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);
```
没有内存错误，vec[0]至vec[9]被设为0，但从逻辑上讲这十个元素并不存在。

## [练习10.8](10_8.cpp)

> 本节提到过，标准库算法不会改变它们所操作的容器的大小。为什么使用 back_inserter 不会使这一断言失效？

`back_insert`返回值类型是`back_insert_iterator`。`fill_n`并未直接改变容器大小，是`back_insert_iterator`调用容器操作改变了大小。

## [练习10.9](10_9.cpp)

> 实现你自己的 elimDups。分别在读取输入后、调用 unique后以及调用erase后打印vector的内容。

##　练习10.10

> 你认为算法不改变容器大小的原因是什么？

算法运行在迭代器上，不直接操作容器。算法作为对“容器”概念化的操作，应当与具体的容器成员函数分离。

## [练习10.11](10_11.cpp)

> 编写程序，使用 stable_sort 和 isShorter 将传递给你的 elimDups 版本的 vector 排序。打印 vector的内容，验证你的程序的正确性。

## [练习10.12](10_12.cpp)

> 编写名为 compareIsbn 的函数，比较两个 Sales_data 对象的isbn() 成员。使用这个函数排序一个保存 Sales_data 对象的 vector。

## [练习10.13](10_13.cpp)

> 标准库定义了名为 partition 的算法，它接受一个谓词，对容器内容进行划分，使得谓词为true 的值会排在容器的前半部分，而使得谓词为 false 的值会排在后半部分。算法返回一个迭代器，指向最后一个使谓词为 true 的元素之后的位置。编写函数，接受一个 string，返回一个 bool 值，指出 string 是否有5个或更多字符。使用此函数划分 words。打印出长度大于等于5的元素。

## 练习10.14

> 编写一个 lambda ，接受两个int，返回它们的和。

```cpp
auto [](int a,int b){return a+b;}
```

## 练习10.15

> 编写一个 lambda ，捕获它所在函数的 int，并接受一个 int参数。lambda 应该返回捕获的 int 和 int 参数的和。

```cpp
auto lam = [a](int b) ->int {return 0; };
```

## [练习10.16](10_16.cpp)

> 使用lambda编写你自己版本的biggies

## [练习10.17](10_17.cpp)

> 重写10.3.1节练习10.12的程序，在对sort的调用中使用 lambda 来代替函数 compareIsbn。

## [练习10.18](10_18.cpp)

> 重写 biggies，用 partition 代替 find_if。我们在10.3.1节练习10.13中介绍了 partition 算法。

## [练习10.19](10_19.cpp)

> 用 stable_partition 重写前一题的程序，与 stable_sort 类似，在划分后的序列中维持原有元素的顺序。

## [练习10.20](10_20.cpp)

> 标准库定义了一个名为 count_if 的算法。类似 find_if，此函数接受一对迭代器，表示一个输入范围，还接受一个谓词，会对输入范围中每个元素执行。count_if返回一个计数值，表示谓词有多少次为真。使用count_if重写我们程序中统计有多少单词长度超过6的部分。

## 练习10.21

> 编写一个 lambda，捕获一个局部 int 变量，并递减变量值，直至它变为0。一旦变量变为0，再调用lambda应该不再递减变量。lambda应该返回一个bool值，指出捕获的变量是否为0。

```c++
int n;
auto f = [&n]() -> bool
{
    if(0==n)
        return true;
    else{
        n--;
        return false;
    }
};
while (!f())
    std::cout << n << std::endl;
```

## [练习10.22](10_22.cpp)

> 重写统计长度小于等于6的单词数量的程序，使用函数代替 lambda。

## 练习10.23

> bind 接受几个参数？

原可调用对象参数个数+1。

## [练习10.24](10_24.cpp)

> 给定一个string，使用 bind 和 check_size 在一个 int 的vector 中查找第一个大于string长度的值。

## [练习10.25](10_25.cpp)

> 在10.3.2节的练习中，编写了一个使用partition 的biggies版本。使用 check_size 和 bind 重写此函数。

## 练习10.26

> 解释三种迭代器的不同之处。

* `back_inserter`使用`push_back`。
* `front_inserter`使用`push_front`。
* `inserter`使用`insert`,生成时另须一个指向该容器的迭代器。

## [练习10.27](10_27.cpp)

> 除了 unique 之外，标准库还定义了名为 unique_copy 的函数，它接受第三个迭代器，表示拷贝不重复元素的目的位置。编写一个程序，使用 unique_copy将一个vector中不重复的元素拷贝到一个初始化为空的list中。

## [练习10.28](10_28.cpp)

> 一个vector 中保存 1 到 9，将其拷贝到三个其他容器中。分别使用inserter、back_inserter 和 front_inserter 将元素添加到三个容器中。对每种 inserter，估计输出序列是怎样的，运行程序验证你的估计是否正确。

## [练习10.29](10_29.cpp)

> 编写程序，使用流迭代器读取一个文本文件，存入一个`vector`中的`string`里。

## [练习10.30](10_30.cpp)

> 使用流迭代器、sort 和 copy 从标准输入读取一个整数序列，将其排序，并将结果写到标准输出。

## [练习10.31](10_31.cpp)

> 修改前一题的程序，使其只打印不重复的元素。你的程序应该使用 unique_copy。

## [练习10.32](10_32.cpp)

> 重写1.6节中的书店程序，使用一个vector保存交易记录，使用不同算法完成处理。使用 sort 和10.3.1节中的 compareIsbn 函数来排序交易记录，然后使用 find 和 accumulate 求和。

## [练习10.33](10_33.cpp)

> 编写程序，接受三个参数：一个输入文件和两个输出文件的文件名。输入文件保存的应该是整数。使用 istream_iterator 读取输入文件。使用 ostream_iterator 将奇数写入第一个输入文件，每个值后面都跟一个空格。将偶数写入第二个输出文件，每个值都独占一行。
