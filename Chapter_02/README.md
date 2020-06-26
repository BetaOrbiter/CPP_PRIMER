## 练习2.1

> 类型 int、long、long long 和 short 的区别是什么？无符号类型和带符号类型的区别是什么？float 和 double的区别是什么？

* 标准规定，`short`与`int`最低16位，`long`最低32位，`long long`最低64位
* 用法：
  * 带符号表示整数，无符号数表示非负数。
  * `short`，`float`一般用于嵌入式系统，存储大量数据等空间紧张的情景下，一般情况下使用`int`与`double`。
  * 执行浮点运算时用 `double` ，因为 `float` 通常精度不够而且双精度浮点数和单精度浮点数的计算代价相差无几。
  
## 练习2.2

> 计算按揭贷款时，对于利率、本金和付款分别应选择何种数据类型？说明你的理由。

使用 `double`。
显然需要小数计算，而金融中float的误差不可接受。
实际应用中，银行系统使用的是专门的数据类型，没有精度损失，Java的decmical即是这种数据类型一例。

## 练习2.3

> 读程序写结果。

```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

输出：

```txt
32
4294967264
32
-32
0
0
```

## [练习2.4](2_4.cpp)

> 编写程序检查你的估计是否正确，如果不正确，请仔细研读本节直到弄明白问题所在。

## 练习2.5

> 指出下述字面值的数据类型并说明每一组内几种字面值的区别：

* (a) 'a', L'a', "a", L"a"
* (b) 10, 10u, 10L, 10uL, 012, 0xC
* (c) 3.14, 3.14f, 3.14L
* (d) 10, 10u, 10., 10e-2

(a): `char`, `wchar_t`, `char[]`, `wchar_t[]`
(b): 十进制`int`, 十进制`unsigned`, 十进制`long`, 十进制`unsigned long`, 八进制`int`, 十六进制`int`
(c): `double`, `float`, `long double`
(d): 十进制`int`, 十进制`unsigned`, `double`, `double`

## 练习2.6

> 下面两组定义是否有区别，如果有，请叙述之：

```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

有，第一行分别为十进制9，7；第二行day为八进制7，month无效因为八进制无9

## 练习2.7

> 下述字面值表示何种含义？它们各自的数据类型是什么？

* (a) "Who goes with F\145rgus?\012"
* (b) 3.14e1L
* (c) 1024f
* (d) 3.14L

(a): 字符串，"Who goes with FArgus?\n",字符串
(b): long double
(c): float
(d): long double

## 练习2.8

> 请利用转义序列编写一段程序，要求先输出 2M，然后转到新一行。修改程序使其先输出 2，然后输出制表符，再输出 M，最后转到新一行。

```c++
#include<iostream>
int main(void){
    std::cout<<"\0x32\0x4D\0x0A";
    std::cout<<"\0x32\0x0A\0x4D";
    return 0;
}
```

## 练习2.9

> 解释下列定义的含义，对于非法的定义，请说明错在何处并将其改正。

* (a) std::cin >> int input_value;
* (b) int i = { 3.14 };
* (c) double salary = wage = 9999.99;
* (d) int i = 3.14;

(a):应先定义后引用
```cpp
ing input_value
std::cin>>input_value;
```
(b):列表初始化可能丢失信息时，编译报错
```cpp
int i=3.14;
```
(c):如wage已定义，正确，否则应先定义
(d):合法

## 练习2.10

> 下列变量的初值分别是什么？

```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```

* `global_int`初值为0
* `global_str`，`local_str`为空字符串
* `local_int`未知

## 练习2.11

> 指出下面的语句是声明还是定义：

* (a) extern int ix = 1024;
* (b) int iy;
* (c) extern int iz;

(a): 定义
(b): 定义
(c): 声明

## 练习2.12

> 请指出下面的名字中哪些是非法的？

* (a) int double = 3.14;
* (b) int _;
* (c) int catch-22;
* (d) int 1_or_2 = 1;
* (e) double Double = 3.14;

(a), (c), (d) 非法。

## 练习2.13

> 下面程序中 j 的值是多少？

```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
```

j为100。

## 练习2.14

> 下面的程序合法吗？如果合法，它将输出什么？

```cpp
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
```

合法，输出为`10 45`。

## 练习2.15

> 下面的哪个定义是不合法的？为什么？

* (a) int ival = 1.01;
* (b) int &rval1 = 1.01;
* (c) int &rval2 = ival;
* (d) int &rval3;
  