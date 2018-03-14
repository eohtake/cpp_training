#include <iostream>

class Log
{
// Variables and constants
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

// Methods
public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }
    
    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARN] " << message << std::endl;
    }
    
    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR] " << message << std::endl;
    }
    
    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO] " << message << std::endl;
    }
    
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn("Hello!");
    log.Info("Hello Infooooo!");
    log.Error("Fuck fuck fuuuuuck!!");
    
    std::cin.get();
}
