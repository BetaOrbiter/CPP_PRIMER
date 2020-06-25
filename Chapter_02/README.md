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