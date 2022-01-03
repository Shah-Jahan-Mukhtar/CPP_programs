#include<iostream>
#include <string>
#include <fstream>
using namespace std;
void create();
void display();
void search();
void deposit();
void withdraw();
void quit();
void intro();
struct Bank
{
	char name[25];
	int AccNo;
	long int blc;
};
Bank arr[20] , arr1[20];
int main()
{
	CHOICES:
	cout<<endl<<endl<<endl;
	cout<<"\t          ACCOUNTS MANAGEMENT SYSTEM OF BANK          \n";
	cout<<"\t  ----------------------------------------------------\n";
	cout<<"\t  1- Create Account \n";
	cout<<"\t  2- Display Record \n";
	cout<<"\t  3- Search Account \n";
	cout<<"\t  4- Deposit Money  \n";
	cout<<"\t  5- Withdraw Money \n";
	cout<<"\t  6- Quit           \n";
	cout<<"\t  7-Intro\n";
	cout<<"\t  ----------------------------------------------------\n";
	cout<<"\t>>>>>>>>>>>>Take Your Choice form above one<<<<<<<<<<<\t";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			create();
			goto CHOICES;
			break;
		case 2:
			display();
			goto CHOICES;
			break;
		case 3:
			search();
			goto CHOICES;
			break;
		case 4:
			deposit();
			goto CHOICES;
			break;
		case 5:
			withdraw();
			goto CHOICES;
			break;
		case 6:
			quit();
			break;
		case 7:
		intro();
		goto CHOICES;
		break;	
		default:
			cout<<"\n\t        SORRY invalid choice       ";
			break;
			system ("pause");
	}
	return 0;
}


	void create()
	{
		char ch;
		int i=0;
		ofstream outfile;
		outfile.open("BankAcc.txt", ios::out | ios::app |ios::in);
		do
		{
		system("cls");		
		cout << "\n\nEnter Account Number :\t" ;
        cin>>arr[i].AccNo; 
        outfile<<arr[i].AccNo<<"\t\t";
        cout << "Enter NAME of Person :\t"  ;
        cin>>arr[i].name;
        outfile<<arr[i].name<<"\t\t";	
		cout << "Enter the Amount You Wants to Deposit :\t" ;
        cin>>arr[i].blc;
        outfile<<arr[i].blc<<"\t\t";
        i++;
        cout<<"\nDo You Want to Create More Accounts (Y/N): ";
        cin>>ch;
        outfile<<endl;
        }
        while(ch=='y'||ch=='Y' && i<1);
        outfile.close();
        system("cls");
        cout<<"\t====================================================\n";
        cout<<"\t Congratulations! Account(s) has created Successfully.\n";
        cout<<"\t====================================================\n";
        cout<<endl<<endl<<endl;
	}
	

	void display()
{
	system("cls");
	ifstream infile;
	infile.open("BankAcc.txt",ios::in|ios::out);
	cout<<"======================================================================"<<endl;
	cout<<"                          ACCOUNTS DETAILS                            "<<endl;
	cout<<"======================================================================"<<endl;
	cout<<"   Account Number        Name of Acc Holder            Balance        "<<endl;
	cout<<"======================================================================"<<endl;
	int i=0;
	while(infile>>arr[i].AccNo){
		infile>>arr[i].name>>arr[i].blc;
		cout<<"\t"<<arr[i].AccNo<<"\t\t\t"<<arr[i].name<<"\t\t\t"<<arr[i].blc<<endl;
		cout<<"....................................................................."<<endl;
		cout<<endl<<endl;
	}
	infile.close();
}


void search()
{
	bool els = false;
	system("cls");
	int search;
	fstream infile("BankAcc.txt",ios::in|ios::out);
	for(int i=0;i<20;i++)
	{
		infile>>arr1[i].AccNo>>arr1[i].name>>arr1[i].blc;
	}
	infile.close();
	again:
	cout<<"\n\nEnter (Account Number) of Account Holder To Search :   ";
	cin>>search;
		for(int i=0;i<20;i++)
			{
				if(search==arr1[i].AccNo)
				{
					cout<<"\n\n\t\t        ACCOUNTS DETAILS       "<<endl<<endl<<"\t\t      ---------------------"<<endl<<endl;
					cout<<"\t\tAccount Number      :  "<<arr1[i].AccNo<<endl;
					cout<<"\t\tAccount Holder Name :  "<<arr1[i].name<<endl;
					cout<<"\t\tBalance in Account  :  "<<arr1[i].blc<<endl;	
					els = true;
					break;
				}
			}
				 if(els == false) {
					cout << "\n\n\t\t      SORRY Invalid Account No. To Search      "<<endl;
				}
}


void deposit()
{
	system("cls");
	bool els = false;
	int search;
	fstream infile("BankAcc.txt",ios::in|ios::out);
	for(int i=0;i<20;i++)
	{
		infile>>arr1[i].AccNo>>arr1[i].name>>arr1[i].blc;
	}
	infile.close();
	again:
	cout<<"\n\n\tEnter (Account Number) of Account Holder :   ";
			cin>>search;
			long int yes;
		for(int i=0;i<20;i++)
			{
				if(search==arr1[i].AccNo)
				{	
					cout<<"\n\tBalance in Account is  :    "<<arr1[i].blc;
					yes=arr1[i].blc;
					els = true;
					break;
				}
			}
				 if(els == false) {
					cout << "\n\n\t<<<<<SORRY Invalid Account no.>>>>>\n";
				}
				else{
				int A_no,dmoney;
				cout<<"\n\tEnter the amount you wnt to Deposit: ";
				cin>>dmoney;
			    yes=yes+dmoney;
				cout<<"\t====================================================\n";
                cout<<"\t         YOU Have Deposit Money Successfully        \n";
                cout<<"\t====================================================\n";
                cout<<"\tYour new Balance is :    "<< yes<<endl;
				for(int i = 0; i < 20; i++)
				{
				if(search == arr1[i].blc)
					{
						infile << yes;
					}
				}
			}
}


void withdraw()

{
	system("CLS");
	bool bbc = false;	
	int srch;
	fstream infile("BankAcc.txt",ios::in|ios::out);
	for(int i=0;i<20;i++)
	{
		infile>>arr1[i].AccNo>>arr1[i].name>>arr1[i].blc;
	}
	infile.close();
	again:
	cout<<"\n\n\tEnter (Account Number) of Account Holder :   ";
			cin>>srch;
			long int NO;
		for(int i=0;i<20;i++)
			{		
				if(srch==arr1[i].AccNo)
				{		
					cout<<"\n\tBalance in Account is  :    "<<arr1[i].blc<<endl;
					NO=arr1[i].blc;
					bbc = true;
					break;
				}
			}
				 if(bbc == false) {
					cout << "\n\n\t     SORRY Invalid Account no.     \n";
				}
				else{
				int AccNO,wmoney;
				cout<<"\tEnter the amount you wnt to Withdraw: ";
				cin>>wmoney;
			    NO=NO-wmoney;
			    if(NO>=0)
			    {
			    cout<<"\n\t====================================================\n";
                cout<<"\t         YOU Have WITHDRAW Money Successfully        \n";
                cout<<"\t====================================================\n";	
			    cout<<"\n\tYOUR new Balance is :    "<< NO<<endl<<endl;		
			   }
			   if (NO < 0)
			   {
			    cout<<"\n\t====================================================\n";
                cout<<"\t        SORRY Insufficant Balance To WITHDRAW      \n";
                cout<<"\t====================================================\n";
			    }
				for(int i = 0; i < 20; i++)
				{
				if(srch == arr1[i].blc)
					{
						infile << NO;
					}
				}
			}
}
void intro(){
	system("CLS");
cout<<"\t\t\t****************************Bank Management*************************\n\n\n";	
cout<<"\n\n\t\t\tGroup#  01\n\n";
cout<<"\t\tDeveloped By:\n\t\t\tRaja Tayyab Aman(19014156-018)\n\t\t\tHamyun Saeed(19014156-019)\n\t\t\tShahjahan(19014156-032)\n";	
cout<<"\n\n\t\t\tIT-19-A\n";
}

void quit()
{
	cout<<"\n\t\t\t===================";
	cout<<"\n\t\t\t   PROGRAM ENDED";
	cout<<"\n\t\t\t===================";
}

