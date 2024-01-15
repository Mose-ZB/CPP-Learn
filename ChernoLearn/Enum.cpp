#include "Enum.h"

void Log::SetLevel(Level level)
{
    m_LogLevel = level;
}

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
