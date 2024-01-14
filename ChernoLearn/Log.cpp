#include <iostream>

class Log
{
public:
	enum Level
	{
		Error = 0, Warning, Info
	};
private:
	Level m_LogLevel = Info;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= Error)
		{
			std::cout << "[ERROR]:" << message << std::endl;
		}
	}
	void Warning(const char* message)
	{
		if (m_LogLevel >= Warning)
		{
			std::cout << "[WARNING]:" << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= Info)
		{
			std::cout << "[INFO]:" << message << std::endl;
		}
	}
};