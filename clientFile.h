#ifndef CLIENTFILE_H
#define CLIENTFILE_H
#include <iostream>
#include "project.h"
#include "Client.h"

using namespace std;

class clientFile
{
  private:

    int size1;

    int countER;

    int counterProject;

    Client* m_client;

  public:
    void addClient();

    void print();

    Client * searchClient(string nameClient);


    clientFile(int sizeClient = 10);
    ~clientFile();
};

#endif // CLIENTFILE_H
