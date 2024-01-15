#pragma once
#include <iostream>

class Log
{
public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    mutable Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level);
    void Error(const char* message) const;
    void Warning(const char* message) const;
    void Info(const char* message) const;
};
