#pragma once
#include <iostream>
//在C++中，类的声明通常应该放在头文件（.h或.hpp文件）中，而类的定义（即成员函数的实现）通常放在相应的源文件（.cpp文件）中。这种做法有助于提高代码的组织性、可读性和重用性，同时也避免了某些编译和链接错误。
class Log
{
public:
    // 枚举类
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    // mutable 关键字可以用来修饰类的成员变量，被修饰的成员变量将永远处于可变的状态，即使在一个const函数中。
    mutable Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level);
    void Error(const char* message) const;
    void Warning(const char* message) const;
    void Info(const char* message) const;
};

class Entity {
public:
    // 构造函数 用于初始化类的成员变量
    Entity(float x, float y);
    void print() const;

private:
    float X, Y;
};