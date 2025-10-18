#include<iostream>

class Log{
    public:
        const int logLevelError = 0;
        const int logLevelWarning = 1;
        const int logLevelInfo = 2;
    private:
        int current_log_level = logLevelInfo;
    public:
        void setLogLevel(int log_level){
            current_log_level = log_level;
        }
        void Error(const char* message){
            if (current_log_level == logLevelError){
                std::cout << "[Error] " << message << std::endl;
            }
        }
        void Warn(const char* message){
            if (current_log_level >= logLevelWarning){
                std::cout << "[Warning] " << message << std::endl;
            }
        }
        void Info(const char* message){
            if (current_log_level >= logLevelInfo){
                std::cout << "[Info] " << message << std::endl;
            }
        }
};

int main(){
    Log logger;
    logger.setLogLevel(logger.logLevelError);
    logger.Error("This");
    logger.setLogLevel(logger.logLevelWarning);
    logger.Info("Hello World!");
    logger.setLogLevel(logger.logLevelInfo);
    logger.Error("This");
    logger.Warn("Is");
    logger.Info("C++!!");
    return 0;
}