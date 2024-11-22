#ifndef TIME_H
#define TIME_H

#include <string>

class Time
{
private:
    int hour{0};
    int minute{0};
    int second{0};
public:
    Time(int, int, int);
    ~Time();

    void setTime(int, int, int);

    std::string toUniversalString() const;
    std::string toStandardString() const;
};


#endif