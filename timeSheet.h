#ifndef TIMESHEET_H
#define TIMESHEET_H
#include <iostream>
//#include "project.h"
#include <string>

using namespace std;



struct time {
int hrs;
int mins;
int secs;
};



class timeSheet
{
private:

     time startTime;
     time endTime;
     string nameSHEET;

    public:

        void setStartTime(time sTime);

        void setEndTime(time eTime);

        void TIMEsheet();

        void getdur();

        void setNameSheet (string Sname);

        string getNameSheet();

        static void setsheet();

        void readINP();

        void PRINT();

        timeSheet();
        ~timeSheet();


};

#endif // TIMESHEET_H
