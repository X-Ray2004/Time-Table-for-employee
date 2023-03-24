#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include <string>
#include"timeSheet.h"

using namespace std;

struct date{
 int year ;
 int month ;
 int day;
};


class project
{
private:
    string timeOut;
    string projectName;
    date Deadline;
    date Today1;
    string describtion ;
    int countSheet;
    timeSheet* m_Sheet ;
    public:

       int counter();

      static void addproject();

      void setProjectName(string name) ;

      string getNumber();

      string getProjectName();

      bool stillAvailable ();

        void setDescribtion(string des);

       string getDescribtion();

       static void setCurrentDate(date current);

       void print5();

        void setDeadline(date D);

        void addsheet();

        void isDeadlinePass();

        void newSheet ();

        void reedIN();

        timeSheet* findSheet(string nameSheet);

    project(int size3=0);
    ~project();

};

#endif // PROJECT_H
