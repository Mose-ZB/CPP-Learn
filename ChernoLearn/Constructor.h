#pragma once 

// 头文件中只包含声明，不包含实现
class Entity {
public:
    Entity(float x, float y);
    void print() const;

private:
    float X, Y;
};