#include "clientFile.h"
#include <iostream>
using namespace std;

clientFile::clientFile(int size1)
{
    m_client = new Client[size1];
    countER=0;

}

    void clientFile::addClient()
{
    Client* newClient = new Client();
    newClient->readInput();
    m_client[countER++] = * newClient;
}

    void clientFile::print()
{
    for (int i=0;i<countER;i++){
            cout<<"\nTHE NUMBER OF CLIENT : "<<i+1<<endl;
        m_client[i].prinT();
        cout<<"\t"<<endl;
        }
}
    Client* clientFile::searchClient(string nameClient)
{
    Client* findClient=new Client;
    int x=0;
            int flag=0;

    if(countER==0 ){cout<<"\tTHERE IS NO CLIENTS !"<<endl;}
    else
    {
      for(x;x<countER;x++)
      {
          if(m_client[x].getName()==nameClient)
          {
              cout<<"THE NUMER OF CLIENT IS : "<<x+1<<endl;
              m_client[x].prinT();
              *findClient=m_client[x];
              flag=0;
          }
          else
             flag++;

      }
    }
      if(flag==countER)
     {cout<<"THERE IS NO WITH THIS NAME !";
     return 0;}
     else{
    return findClient;
}
}

clientFile::~clientFile()
{
    delete [] m_client;
}
