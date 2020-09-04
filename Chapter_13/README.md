## 练习13.1

> 拷贝构造函数是什么？什么时候使用它？

如果一个构造函数的第一个参数是自身类类型的引用，且任何额外参数都有默认值，则此构造函数时拷贝构造函数。
拷贝初始化、使用同一个类类型直接初始化、非引用地传递参数返回值、列表初始化

## 练习13.2

> 解释为什么下面的声明是非法的：
```cpp
Sales_data::Sales_data(Sales_data rhs);
```

参数应该是引用类型

## 练习13.3

> 当我们拷贝一个StrBlob时，会发生什么？拷贝一个StrBlobPtr呢？


## 练习13.4

> 假定 Point 是一个类类型，它有一个public的拷贝构造函数，指出下面程序片段中哪些地方使用了拷贝构造函数：

```cpp
Point global;
Point foo_bar(Point arg) // 1   非引用传参
{
	Point local = arg, *heap = new Point(global); // 2: Point local = arg,  3: new Point(global) 
	*heap = local; 
	Point pa[4] = { local, *heap }; // 4, 5 数组列表初始化
	return *heap;  // 6 非引用返回值
}
```

共六处

## [练习13.5](13_05.cpp)

> 给定下面的类框架，编写一个拷贝构造函数，拷贝所有成员。你的构造函数应该动态分配一个新的string，并将对象拷贝到ps所指向的位置，而不是拷贝ps本身：

```cpp
class HasPtr {
public:
	HasPtr(const std::string& s = std::string()):
		ps(new std::string(s)), i(0) { }
private:
	std::string *ps;
	int i;
}
```

## 练习13.6

> 拷贝赋值运算符是什么？什么时候使用它？合成拷贝赋值运算符完成什么工作？什么时候会生成合成拷贝赋值运算符？

* 是一个名为`operator=`的函数，接受一个与其所在类相同类型的参数。
* 赋值运算时使用。
* 对某些类，该运算符被用作禁止赋值；否则将右侧运算对象的每一个非`static`成员左侧对象的对应成员。
* 未定义自己的拷贝复制运算符时。

## 练习13.7

> 当我们将一个 StrBlob 赋值给另一个 StrBlob 时，会发生什么？赋值 StrBlobPtr 呢？

## [练习13.8](13_08.cpp)

> 为13.1.1节练习13.5中的 HasPtr 类编写赋值运算符。类似拷贝构造函数，你的赋值运算符应该将对象拷贝到ps指向的位置。

## 练习13.9

> 析构函数是什么？合成析构函数完成什么工作？什么时候会生成合成析构函数？

* 析构函数是一个函数，它释放对象使用的资源，并销毁对象的非`·static`成员。
* 组织某些类的销毁，否则函数体为空
* 类未定义析构函数时

## 练习13.10

> 当一个 StrBlob 对象销毁时会发生什么？一个 StrBlobPtr 对象销毁时呢？

## [练习13.11](13_11.cpp)

> 为前面练习中的 HasPtr 类添加一个析构函数。

## 练习13.12

> 在下面的代码片段中会发生几次析构函数调用？

```cpp
bool fcn(const Sales_data *trans, Sales_data accum)
{
	Sales_data item1(*trans), item2(accum);
	return item1.isbn() != item2.isbn();
}
```

三次， 非引用的参数对象`accum`，局部变量`item1`，`iterm2`。

## [练习13.13](exercise13_13.cpp)

> 理解拷贝控制成员和构造函数的一个好方法的定义一个简单的类，为该类定义这些成员，每个成员都打印出自己的名字：

```cpp
struct X {
	X() {std::cout << "X()" << std::endl;}
	X(const X&) {std::cout << "X(const X&)" << std::endl;}
}
```

给 X 添加拷贝赋值运算符和析构函数，并编写一个程序以不同的方式使用 X 的对象：将它们作为非引用参数传递；动态分配它们；将它们存放于容器中；诸如此类。观察程序的输出，直到你确认理解了什么时候会使用拷贝控制成员，以及为什么会使用它们。当你观察程序输出时，记住编译器可以略过对拷贝构造函数的调用。