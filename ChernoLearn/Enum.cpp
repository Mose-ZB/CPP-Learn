#include "Enum.h"

void Log::SetLevel(Level level)
{
    m_LogLevel = level;
}

// 由于 Error, Warning, 和 Info 方法中没有修改任何成员变量，所以将这些方法标记为 const。

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
