#include "Client.h"

    int countProject2=0;

Client::Client(int size2)
{
    phone=10;
    email="unknown";
    name="unknown";
    note="unknown";
    m_project = new project[size2];

}

    void Client::newProject()
    {
        //countProject2++;
        project* newPro= new project();
        newPro->reedIN();
        m_project[countProject2]=* newPro;
        countProject2++;

        //countPROJECT ++;
    }

    project* Client::searchProject(string projectN)
    {
        int s;
        project* findProject = new project();
        if (countProject2==0)
            {cout<<" NO PROJECT HERE ";}
        else
        {
            for (s=0;s<countProject2;s++)
              {
                  if(m_project[s].getProjectName()==projectN)
                     {
                         //m_project[s].isDeadlinePass();
                         cout<<" THE NUMBER OF PROJECT IS " <<s+1<<endl;
                         m_project[s].print5();
                         *findProject = m_project[s];
                         s=0;
                         break;

                     }
              }
        }
       if(s==countProject2)
              { cout<<" THERE IS NO PROJECT WITH THIS NAME !";
              return 0;}
       else

            return findProject;
    }

    void Client::setName(string nme)
    {
        name=nme;
    }

    void Client::setPhone(string phon)
    {
        phone=phon;
    }

    void Client::setEmail(string emal)
    {
        email=emal;
    }

    void Client::setNote(string notte)
    {
        note=notte;
    }

    void Client::setDate(int DAY,int MONTH,int YEAR)
    {
        addedDate.day=DAY;
        addedDate.month=MONTH;
        addedDate.year=YEAR;
    }

    string Client::getName()
    {
        return name;
    }

    string Client::getPhone()
    {
        return phone;
    }

    string Client::getEmail()
    {
        return email;
    }

    string Client::getNote()
    {
        return note;
    }

    void Client::prinT()
    {
        cout<<"THE NAME IS : "<<name<<endl;

        cout<<"THE NUMBER IS : "<<phone<<endl;

        cout<<"THE MAIL IS : "<<email<<endl;

        cout<<"THE NUMBER OF PROJECTS : "<<countProject2<<endl;

    }

    void Client::readInput()
    {
        cout<<"\nENTER THE NAME : ";
        cin>>name;
        cout<<"\nENTER THE NUMBER : ";
        cin>>phone;
         cout<<"\nENTER THE EMAIL : ";
        cin>>email;
        cout<<"\nENTER THE NOTES : ";
        cin>>note;
    }

    void Client::printProjects()
    {
            //cout<<countProject<<endl;
        for (int i=0;i<countProject2;i++){
        cout<<"\nTHE NUMBER OF PROJECT  : "<<i+1<<endl;
        m_project[i].print5();
        cout<<"\t"<<endl;
        }
    }

Client::~Client()
{
    delete [] m_project;
}
