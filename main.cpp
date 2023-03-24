#include <iostream>
#include <string>
#include "Client.h"
#include "clientFile.h"
#include "project.h"
#include "timeSheet.h"
#include<windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void self_exit()
{
    system("cls");
    cout << "\n\n\t\tThank You for using our System!"<<endl;
    exit(1);
}

void header()
{
    system("color 0B");
    cout<<"\t\tWELCOME IN CLIENT SYSTEM\t\t"<<endl;
    cout<<"\t  YOU CAN START WITH ADD YOUR CLIENT"<<endl;
    cout<<"____________________________________________________________\n";
}


int main ()
{
    Client* c1;
    int flag2=0;
//
//    clientFile d;
//    d.addClient();
//    Client* v=d.searchClient("amr");
//    v->newProject();
//    v->printProjects();
//
//
//

    header();
    int choice1=9;
    cout<<"\n\tPLEASE ENTER THE SIZE OF YOUR SYSTEM : ";
    int siZe=8;
    cin>>siZe;
    while (siZe>3000 || siZe<1 )
    {
        cout<<"\tMAX NUMBER SYSTEM IS 3000 TRY AGAIN : ";
        cin>>siZe;
    }
    system("cls");
    clientFile c(siZe);
label:
    cout<<"\n\t\tTO EXIT : [0] \n\tADD CLIENT : 1 \n\tSERCH ABOUT CLIENT : 2 \n\tPRINT ALL CLIENTS : 3 \n\tADD PROJECT FOR SPECFIC CLIENT : 4 \n\tSEARCH PROJECT : 5" ;
    char choic55='y';
    while (choic55=='y')
    {
        cout<<"\n\tENTER THE NUM : ";
        char choice3='0';
        cin >>choice3;
        system("cls");
        int choose=1;
        switch(choice3)
        {
        case '1':
        {
            if(flag2<siZe){
            c.addClient();
            flag2++;
            }
            else
                cout<<"THE SIZE SYSTEM FORBID YOU FROM ADD ANY CLIENTS !";

        }
            break;
        case '2':
        {

            cout<<"\n\tENTER THE NAME THAT YOU WANT TO FIND HIS DETIALS : ";
            string name23;
            cin>>name23;
            c1=c.searchClient(name23);
             if(c1 ==0){
                cout<<"\nGET ERROR TRY AGIAN WITH RIGHT NAME !";
            }
            else
            c1->printProjects();
            //c1=0;
        }
            break;

        case '3':
            {c.print();}
        break;

        case '4':
            {

          //  c1=new Client;
            cout<<"\n\tENTER THE NAME THAT YOU WANT TO ADD PROJECT FOR HIM  : ";
            string name23;
            cin>>name23;
            c1=c.searchClient(name23);
            if(c1 ==0){
                cout<<"\nGET ERROR TRY AGIAN WITH RIGHT NAME !";
            }
            else{
            char filesearch='y';
            while(filesearch=='y')
            {
                c1->newProject();
                //c1->printProjects();
                cout<<"\nADD AGAIN ? (y/n) :";
                cin>>filesearch;
            }
            //delete c1 ;
            }
            break;
        }
        case '5':
        {
            cout<<"\n\tSEARCH IN PROJECTS AND SYSTEM SHEETS 1 \n\tPRINT HIS PROJECTS 2 \n\tIF YOU WANT TO END 3 : ";
            cin>> choice1;
            system("cls");
            switch(choice1)
            {
            case 1:
        {
            cout<<"\n\tENTER THE NAME THAT YOU WANT TO SEARCH PROJECT FOR : ";
            string name23;
            cin>>name23;
            c1=new Client;
            c1=c.searchClient(name23);
             if(c1 ==0){
                cout<<"\nGET ERROR TRY AGIAN WITH RIGHT NAME !";
                Sleep(5);
                system("cls");
                goto label;
            }
            else
            cout<<"\nENTER THE NAME OF PROJECT THAT YOU WANT TO FIND HIS DETIALS : ";
            string name2;
            cin>>name2;

            project *p1=c1->searchProject(name2);
            cout<<endl;
            if(p1==0){
                cout<<"\nGET ERROR TRY AGIAN WITH RIGHT NAME !";
               // Sleep(20);
                //system("cls");
                goto label;
            }
            else
               cout<<endl;
               c1->printProjects();
               p1->stillAvailable();

            cout<<"\n\tADD SHEET ENTER 1 \n\tSEARCH ABOUT SPECIFIC SHEET 2 \n\tEND PROCESS 3 \n\tTHE NUMBER : ";
            char choic2='y';
            while (choic2=='y')
            {
                system("cls");
                cout<<"\n\tADD SHEET ENTER : 1 \n\tSEARCH ABOUT SPECIFIC SHEET : 2 \n\tEND PROCESS : 3 \n\tTHE NUMBER : ";

                //
                char choice8;
                cin>>choice8;
                switch(choice8)
                    //
                {
                case '1':
                    //
                {
                    p1->newSheet();
                }
                break;
                case '2':
                {
                    cout<<"\nENTER THE NAME OF SHEET THAT YOU WANT TO FIND HIS DETIALS : ";
                    string name3;
                    cin>>name3;
                    timeSheet* s1=p1->findSheet(name3);

                    if(p1==0){
                cout<<"\n\tGET ERROR TRY AGIAN WITH RIGHT NAME !";
                       }
                }
                break;
                case '3':
                {
                    system("cls");
                    goto label;
                }
                break;
                default :
                    cout<<"\nERROR";
                }
                   // system("cls");
                    cout<<"\n\nDO YOU WANT SOMTHING AGAIN IN PROJECTS?(y/n) : ";
                    cin>>choic2;
                }
        }
                break;
            case 2:
                {
            cout<<"\n\tENTER THE NAME THAT YOU WANT TO PRINT PROJECTS FOR HIM  : ";
            string name230;
            cin>>name230;
            //c1=new Client;
            c1=c.searchClient(name230);
            system("cls");
             if(c1 ==0){
                cout<<"\n\tGET ERROR TRY AGIAN WITH RIGHT NAME !";
            }
            else
            c1->printProjects();
                }
                break;

            case 3:
            {
                system("cls");
                goto label ;

            break;
            }
            default :
                cout<<"\tSOMETHING WENT ERROR"<<endl;
            }
        }
        break;
            case '0':
                {
                    self_exit();
                }
                break;
            default:
                  cout<<"\nSOMETHING WENT ERROR ";
        }

        cout<<"\n\tBACK[y] : ";
        cin>>choic55;
        if(choic55=='n'){self_exit();}
        system("cls");
        goto label;
    }
     self_exit();
    return 0;
}
