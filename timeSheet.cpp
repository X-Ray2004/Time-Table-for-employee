#include "timeSheet.h"
#include <iostream>
#include <string>

using namespace std;

static int sheets=0;

timeSheet::timeSheet()
{
    int day3=0;
    //ctor
    startTime.hrs=0;

    startTime.mins=0;

    startTime.secs=0;

    endTime.hrs=0;

    endTime.mins=0;

    endTime.secs=0;
}

        void timeSheet::setStartTime(time sTime)
        {

            startTime=sTime;
        }

        void timeSheet::setEndTime(time eTime)
        {

            endTime=eTime;
        }

        void timeSheet::TIMEsheet()
        {
            cout<<"\nTHE TIME OF SHEET IS START IN : "<<startTime.hrs<<":"<<startTime.mins<<":"<<startTime.secs<<endl;

            cout<<"\nTHE TIME OF SHEET IS END IN : "<<endTime.hrs<<":"<<endTime.mins<<":"<<endTime.secs<<endl;


        }

        void timeSheet::getdur(){
        cout<<"THE TOTAL TIME : "<<endTime.hrs-startTime.hrs<<":"<<endTime.mins-startTime.mins<<":"<<endTime.secs-startTime.secs<<endl;
        };

        void timeSheet::setsheet()
        {
            sheets++;
        }

          void timeSheet::readINP()
        {
            char opr=' ';
            cout<<"\nENTER START SHEET TIME S:M:H : ";
            cin>>startTime.secs>>opr>>startTime.mins>>opr>>startTime.hrs;
            cout<<"\nENTER END TIME SHEET s:m:h : ";
            cin>>endTime.secs>>opr>>endTime.mins>>opr>>endTime.hrs;
            cout<<"\nENTER SHEET NAME : ";
            cin>>nameSHEET;
        }

        void timeSheet::PRINT()
        {
            char opr=':';
            cout<<"\nSTART SHEET TIME : "<<startTime.secs<<opr<<startTime.mins<<opr<<startTime.hrs;
            cout<<"\nEND TIME SHEET : "<<endTime.secs<<opr<<endTime.mins<<opr<<endTime.hrs;
            cout<<"\nSHEET NAME : "<<nameSHEET;
        }



        void timeSheet::setNameSheet (string Sname)
        {
            nameSHEET=Sname;
        }

        string timeSheet::getNameSheet()
        {
            return nameSHEET;
        }

timeSheet::~timeSheet()
{
}
