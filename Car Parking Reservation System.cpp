#include<iostream>
#include<conio.h>
using namespace std;

int greet()
{
   string pass ="";
   char ch;
  
  
  
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tCar Parking Reservation System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = getch();
   while(ch != 13)
   {
   //character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "pass")
   {
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      
   }
   else
   {
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      greet();
  }
   }
   
   int main()
{
 
 greet();
 
string nic;
char   v[20];
int    n;
int    price;
char   name[15];
char   fname[15];
string no;



cout<<"                 "<<endl;




system("CLS");

 cout<<"\n\n\n\n\n\n\n\n"<<"                   *******|  Welcome to the Packages Mall car parking system program  |*******"<<endl;
cout<<"                           ( Please Enter the Required Informations for car parking )"<<endl;



cout<<"\n\n\n"<<endl;
cout<<"                     ************************             "<<endl;
cout<<"             -------------------------------------------  "<<endl;
cout<<"                 "<<endl;
cout<<"                 ENTER DRIVER NAME     : ";
cin>>name;
cout<<"                 ENTER FATHER NAME     : ";
cin>>fname;
cout<<"                 ENTER YOUR NIC NO     : ";
cin>>nic;
cout<<"                 ENTER CAR NO          : ";
cin>>no;
cout<<"                 "<<endl;
cout<<"             -------------------------------------------  "<<endl;
cout<<"                     ************************             "<<endl;
cout<<"                 "<<endl;
cout<<"  VECHEL NAME : ";
cin>>v;


cout<<"\n";
cout<<"CHOOSE WHICH PACKAGE YOU WANT TO PARK  VECHEL "<<endl<<"1) for 2 hrs"<<endl<<"2) for 4 hrz"<<endl<<"3) for 6 hrz"<<endl<<"4) for 8 hrz"<<endl;
cout<<"\n";
cin>>n;



switch(n)
{
case 1:
{
cout<<"\n\n\n"<<".................................."<<endl;
cout<<"you have choose the pakage no 1"<<endl;
cout<<v<<" is parked for 2 hours";
price= 30*2;
cout<<endl<<"price of ticket"<<"="<<price<<"RS"<<endl;
cout<<".................................."<<endl;


cout<<"\n\n\n";


 system("PAUSE");

break;
}


case 2:
{
cout<<"\n\n\n"<<".................................."<<endl;
cout<<"you have choose the pakage no 2"<<endl;
cout<<v<<" is parked for 4 hours";
price=50*4;
cout<<endl<<"price of ticket"<<"="<<price<<"RS"<<endl;
cout<<".................................."<<endl;


cout<<"\n\n\n";

system("PAUSE");

break;
}

case 3:
{
cout<<"\n\n\n"<<".................................."<<endl;	
cout<<"you have choose the pakage no 3"<<endl;
cout<<v<<" is parked for 6 hours";
price=70*6;
cout<<endl<<"price of ticket"<<"="<<price<<"RS"<<endl;
cout<<".................................."<<endl;


cout<<"\n\n\n";

system("PAUSE");

break;
}

case 4:
{
cout<<"\n\n\n"<<".................................."<<endl;	
cout<<"you have choose the pakage no 4"<<endl;
cout<<v<<" is parked for 8 hours";
price=90*8;
cout<<endl<<"price of ticket"<<"="<<price<<"RS"<<endl;
cout<<".................................."<<endl;


cout<<"\n\n\n";

system("PAUSE");

break;
}



default:
{
cout<<"no package is here the choice u entered"<<endl<<"try agian"<<endl;
}

}
cout<<"thank you for using our services"<<endl;
cout<<"................................";
cout<<"                 "<<endl;







system("CLS");

cout<<endl;
          cout<<"             -----------------------------------------------------"<<endl;
          cout<<"                        .....R.E.C.I.P.T....."<<endl;
          cout<<"             -----------------------------------------------------"<<endl;
          cout<<"                DRIVER NAME  IS               :  "           <<name<<endl;
          cout<<"                YOUR FATHER NAME IS           :  "          <<fname<<endl;
          cout<<"                YOUR  NIC NO IS               :  "            <<nic<<endl;
          cout<<"                YOUR "<<v<<" NO IS                :  "         <<no<<endl;
          cout<<"                PACKAGE YOU CHOOSED IS NUMBER :  "              <<n<<endl;
          cout<<"                price of ticket"<<"               :  "<<price<<"RS"<<endl;
          cout<<"             -----------------------------------------------------"<<endl;
          cout<<"                      Thank You for using our  service            "<<endl;    
          cout<<"             -----------------------------------------------------"<<endl;
          
          cout<<"\n\n\n\n\n"<<"                                           *CAR GOT PARKED * ";




getch ();
}
