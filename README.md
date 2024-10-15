
# 函数学习项目

该项目包含基于书籍《C++ Primer》的各种C++练习和示例。重点学习C++的关键概念，如函数声明、函数指针、`constexpr`、`decltype`等。

## 项目结构

- **assert.cpp**: 展示了如何在C++中使用 `assert` 函数，并结合 `NDEBUG` 进行条件编译。
- **chapter6.h**: 包含多个练习中使用的声明和函数原型。
- **constexpr.cpp**: 使用 `constexpr` 函数进行编译期常量表达式计算的示例。
- **decltype.cpp**: 展示了 `decltype` 的使用，通过类型推断确定函数返回类型。
- **exercise_6_xx.cpp**:
    - 每个文件对应《C++ Primer》第6章中的一个练习。
    - 例如，`exercise_6_51.cpp` 包含与函数重载、不同类型参数相关的示例。
    - 练习涵盖了函数指针、函数重载、模板函数等主题。
- **factProgram**: 展示如何通过 `fact.cc` 和 `factMain.cc` 进行分离编译，实现阶乘函数的分文件和头文件的实现。
- **initializer_list.cpp**: 演示了如何使用 `std::initializer_list` 向函数传递可变数量的参数。
- **swap.cpp**: 一个简单的程序，演示如何使用指针和引用交换两个变量。

## 编译项目

要编译某个特定的练习，可以使用如下命令：

```bash
g++ -o exercise_6_51 exercise_6_51.cpp
```

您可以将 `exercise_6_51.cpp` 替换为其他文件名来编译不同的练习。

## 主要涵盖的主题

1. **断言与条件编译**: 使用 `assert` 和 `NDEBUG` 进行调试。
2. **`constexpr` 函数**: 如何使用 `constexpr` 进行编译时计算。
3. **函数指针**: 声明和使用函数指针，将函数作为参数传递。
4. **函数重载**: 示例展示如何使用不同参数类型重载函数。
5. **函数模板**: 使用函数模板编写泛型代码。
6. **`decltype`**: 使用 `decltype` 推断变量类型和函数返回类型。
7. **`std::initializer_list`**: 使用 `initializer_list` 处理可变长度的参数列表。

