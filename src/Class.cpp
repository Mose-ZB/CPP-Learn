#include "Class.h"

void Log::SetLevel(Level level)
{
    m_LogLevel = level;
}

// 由于你在 Error, Warning, 和 Info 方法中没有修改任何成员变量，我已将这些方法标记为 const。这表明这些方法不会修改对象的状态，因此可以在常量对象上调用。

void Log::Error(const char* message) const
{
    if (m_LogLevel >= LevelError)
    {
        std::cout << "[ERROR]: " << message << std::endl;
    }
}

void Log::Warning(const char* message) const
{
    if (m_LogLevel >= LevelWarning)
    {
        std::cout << "[WARNING]: " << message << std::endl;
    }
}

void Log::Info(const char* message) const
{
    if (m_LogLevel >= LevelInfo)
    {
        std::cout << "[INFO]: " << message << std::endl;
    }
}


// 为了确保类 Enity 的成员变量 X 和 Y 始终被初始化，你应该使用构造函数的初始化列表。初始化列表直接在构造函数声明之后使用冒号和初始化表达式来初始化成员变量，这种方法比在构造函数体内赋值更高效，尤其是对于复杂类型的成员变量。
Entity::Entity(float x, float y) : X(x), Y(y) {}

void Entity::print() const
{
    std::cout << X << ", " << Y << std::endl;
}
