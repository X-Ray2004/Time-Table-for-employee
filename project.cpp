#include "project.h"

  date currentDate;

  static int NUM=0;

      project::project(int size3)
      {
        countSheet=0;

        projectName="";

        timeOut="";

        Today1.day=0; Today1.month=0; Today1.year=0;

        describtion="";

        m_Sheet = new timeSheet[size3];

        }

         void project::newSheet ()
         {
             timeSheet* newSh = new timeSheet();
             newSh->readINP();
             m_Sheet[countSheet++]=* newSh;
         }

        timeSheet* project::findSheet(string nameSheet)
        {
            int z;
            timeSheet* findSH=new timeSheet();
            if(countSheet==0)
                {cout<<"THERE IS NO SHEETS";}
            else
            {
                for(z=0;z<countSheet;z++)
                {
                    if(m_Sheet[z].getNameSheet() == nameSheet)
                    {
                        cout<<"THE NUMBER OF SHEET IS : "<<z;
                        m_Sheet[z].PRINT();
                        *findSH = m_Sheet[z];
                        z=0;
                        break;
                    }
                }
            }
             if(z==countSheet)
              { cout<<" THERE IS NO PROJECT WITH THIS NAME !";
              return 0;}
       else
            return findSH;
        }

      void project::addproject(){
     NUM++;
     }


      int project::counter(){
      return NUM;
      }

       bool project::stillAvailable ()
       {
           date dur;
            dur.day=Deadline.day-Today1.day;
            dur.month=Deadline.month-Today1.month;
            dur.year=Deadline.year-Today1.year;
          if (timeOut=="")
        {
            cout<<"\n\tIT STILL AVAILABLE FOR : "<<(Deadline.day-Today1.day)<<"/"<<(Deadline.month-Today1.month)<<"/"<<(Deadline.year-Today1.year) <<endl;
            cout<<"\n\tIT ARROUND : "<<((dur.year*12*30*24*60*60)+(dur.month*30*24*60*60)+(dur.day*24*60*60))<<" HOURS";

               return false;
                }
          else {
            cout<<"\n\tIT PASSED FROM : "<<((dur.day>=0)? dur.day*=-1:dur.day)<<"/"<<((dur.month>=0)? dur.month*=-1:dur.month)<<"/"<<((dur.year>=0)? dur.year*=-1:dur.year) <<endl;
            cout<<"\n\tIT ARROUND : "<<((dur.year*12*30*24*60*60*-1)+(dur.month*30*24*60*60*-1)+(dur.day*24*60*60*-1))<<" HOURS";
            return true ;}
       }


       void project::setProjectName(string name) {
       projectName=name;
       }

       string project::getNumber(){
        return projectName;
       }

        void project::setCurrentDate(date current)
        {
            currentDate=current;
        }

        void project::print5()
        {
            isDeadlinePass();
            cout<<"NAME PROJECT : "<<projectName<<endl;
            cout<<"DESCRIBTION IS : " <<describtion<<endl;
            cout<<"DEADLINE IS : "<<Deadline.year<<":"<<Deadline.month<<":"<<Deadline.day<<endl;
           // cout<<"DEADLINE PASS : "<<stillAvailable()<<endl;
        }


        void project::setDescribtion(string des) {
       describtion=des;
       }

       string project::getDescribtion(){
        return describtion;
       }

        void project::setDeadline(date D) {
           Deadline=D;
       }

        void project::addsheet()
        {
            timeSheet::setsheet();
        }

         void project::isDeadlinePass()
         {
             char y=':';
             cout<<"ENTER THE CURRENT TIME D:M:Y : ";
             cin>>Today1.day>>y>>Today1.month>>y>>Today1.year;
             if(Today1.year>Deadline.year)
             {
                 timeOut="TIME OUT";
                 cout<<endl<<timeOut<<endl;
             }
             else if(Today1.year==Deadline.year && Today1.month>Deadline.month)
             {
                 timeOut="TIME OUT";
                 cout<<endl<<timeOut<<endl;
             }
             else if (Today1.year==Deadline.year && Today1.month>Deadline.month && Today1.day>Deadline.day)
             {
                 timeOut="TIME OUT";
                 cout<<endl<<timeOut<<endl;
             }
             else
                cout<<"\nIT STILL AVAILABLE !"<<endl;
         }

        void project::reedIN()
        {
           // int opr=':',opr2=':';
            cout<<"\nENTER PROJECT NAME : ";
            cin>>projectName;
            cout<<"\nENTER DATE OF DEADLINE d m y : ";
            cin>>Deadline.day;
           // cin>>opr;
            cin>>Deadline.month;
           //cin>>opr2;
            cin>>Deadline.year;
            cout<<"\nENTER DESCRIPTION : ";
            cin>>describtion;
        }

        string project::getProjectName()
        {
            return projectName;
        }


project::~project()
{
        delete []m_Sheet;
}
