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

