# Cpp Practice

Cpp Primer的笔记

C++编程思想的两个例子，Stack，Stash。

- 访问控制Stash，Stack
- 带有构造器和析构函数的Stack，Stash
 


reference: https://github.com/Mooophy/Cpp-Primer
Chenshuo的Cpp Primer评注版本的给的几个练习

1. 写一个复数类或者大整数类，实现基本的加减乘运算，熟悉封装与数据抽象。
    大整数类可以以 std::vector<int> 为成员变量，避免手动资源管理。
2. 写一个字符串类， 熟悉内存管理与拷贝控制。
3. 写一个简化的 vector<T> 类模板，熟悉基本的模板编程，你的这个 vector 应该能放入 int 和 std::string 等元素类型。
4. 写一个表达式计算器，实现一个节点类的继承体系(右图)，体会面向对象编程。

前三个练习是 写独立的值语义的类，第四个练习是对象语义，同时要考虑类与类之间的关系。

表达式计算器能把四则运算式 3+2*4 解析为左图的表达式树，对根节点调用 calculate() 虚函数就能算出表达式的值。做完之后还可以再扩充功能，比如支持三角函数和变量。在写完面向对象版的表达式树之后，还可以略微尝试泛型编程。比如把类的继 承体系简化为下图，然后用 BinaryNode<std::plus<double> > 和 BinaryNode<std:: multiplies<double> > 来具现化 BinaryNode<T> 类模板，通过控制模板参数的类型来实现不同的运算。

在表达式树这个例子中，节点对象是动态创建的，值得思考:如何才能安全地、不重不漏地释放内存。本书第15.8节的 Handle 可供参考。