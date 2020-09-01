#ifndef _ABSENCEREQUEST_
#define _ABSENCEREQUEST_
#include <string>
#include <iostream>

class AbsenceRequest{
    std::string excuse;
    int absentDays;
    public:
        AbsenceRequest(std::string excuse, int absentDays): excuse{excuse}, absentDays{absentDays}{}
        const std::string getExcuse() const{
            return excuse;
        }
        const int getDays() const{
            return absentDays;
        }
};

#endif
