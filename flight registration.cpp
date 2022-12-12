#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void mainMenu();//globally declared, it is the function prototype
class Management
{
    public:

    Management()
    {
        mainMenu();
    }
};


class Details
{
    public:
    static string Name, Gender;
    int phoneNo;
    int age;
    string address;
   static int Customer_id;

    char arr[100];

    void information()
    {
        cout<<"\nEnter the Customer ID: ";
        cin>>Customer_id;
        cout<<"\nEnter the Name: ";
        cin>>Name;
        cout<<"\nEnter the Age: ";
        cin>>age;
        cout<<"\nAddress: ";
        cin>>address;
        cout<<"\nEnter the Gender: ";
        cin>>Gender;
        cout<<"Your Details are saved with Us\n"<<endl;
    }

};

 int Details::Customer_id;
string Details::Name;
string Details::Gender;

class Registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void Flights()
    {
        string FlightN[] = {"America(USA)", "London(UK)", "Singapur",
                            "Dubai", "Netherland", "Japan", "Jarmany",
                            "Australia","Thailand","South Korea"
                           };

        for(int a=0; a<10; a++)
        {
            cout<<(a+1)<<". Flight to "<<FlightN[a]<<endl;
        }

        cout<<"\n******  Welcome to INDIGO Airlines!!  *****"<<endl;
        cout<<"Press the number of the country of which you want to book the flight: ";
        cin>>choice;


        switch(choice)
        {
            case 1:
            {
                cout<<"_______Welcome to London(UK) Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1. LONDON(UK) - 498"<<endl;
                cout<<"\t22-11-2022 8:00 10hrs Rs. 14000"<<endl;
                cout<<"1. LONDON(UK) - 658"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1. LONDON(UK) - 508"<<endl;
                cout<<"\t24-11-2022 12:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight LONDON(UK) - 498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 10000;
                    cout<<"\n You have Successfully booked the flight LONDON(UK) - 658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 9000;
                    cout<<"\n You have Successfully booked the flight LONDON(UK) - 508"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

            case 2:
            {
                cout<<"_______Welcome to America(USA) Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.AMERICA(USA) - 132"<<endl;
                cout<<"\t22-11-2022 8:00 10hrs Rs. 14000"<<endl;
                cout<<"1.AMERICA(USA) - 234"<<endl;
                cout<<"\t23-11-2022 6:00 10hrs Rs. 10000"<<endl;
                cout<<"1.AMERICA(USA) - 444"<<endl;
                cout<<"\t24-11-2022 10:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 60000;
                    cout<<"\n You have Successfully booked the flight AMERICA(USA) - 132"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 13400;
                    cout<<"\n You have Successfully booked the flight AMERICA(USA) - 234"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 6000;
                    cout<<"\n You have Successfully booked the flight AMERICA(USA) - 444"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

            case 3:
            {
                cout<<"_______Welcome to Singapur Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.SINGAPOOR - 142"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.SINGAPOOR  - 244"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.SINGAPOOR  - 484"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight SINGAPOOR  - 142"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight SINGAPOOR  - 244"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight SINGAPOOR  - 484"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

            case 4:
            {
                cout<<"_______Welcome to Dubai Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.Dubai - 142"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.Dubai  - 244"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.Dubai  - 484"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight Dubai  - 142"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight Dubai  - 244"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight Dubai - 484"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 5:
            {
                cout<<"_______Welcome to Nethrland Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.NETHERLAND - 144"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.NETHRLAND  - 254"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.NETHERLAND  - 684"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight NETHERLAND  - 144"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight NETHERLAND  - 254"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight NETHERLAND  - 684"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

            case 6:
            {
                 cout<<"_______Welcome to Japan Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.Japan - 242"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.Japan  - 544"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.Japan  - 464"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight Japan  - 242"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight Japan  - 544"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight Japan  - 464"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

            case 7:
            {
                 cout<<"_______Welcome to Jarmany Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.JARMNAY - 742"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.JARMNAY  - 644"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.JARMNAY  - 494"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight JARMNAY  - 742"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight JARMNAY  - 644"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight JARMNAY  - 494"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 8:
            {
                 cout<<"_______Welcome to Australia Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.Australia - 444"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.Australia  - 333"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.Australia  - 222"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight AUSTRALIA  - 444"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight AUSTRALIA  - 333"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight AUSTRALIA  - 222"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 9:
            {
                 cout<<"_______Welcome to Thailand Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1.Thailand - 142"<<endl;
                cout<<"\t22-11-2022 5:00 10hrs Rs. 14000"<<endl;
                cout<<"1.Thailand  - 244"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1.Thailand  - 484"<<endl;
                cout<<"\t24-11-2022 11:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 25000;
                    cout<<"\n You have Successfully booked the flight THAILAND  - 142"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 20000;
                    cout<<"\n You have Successfully booked the flight THAILAND  - 244"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight THAILAND  - 484"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
                case 10:
            {
                cout<<"_______Welcome to South Korea Emirates_____\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!!"<<endl;

                cout<<"Following are the FLights \n"<<endl;

                cout<<"1. SOUTH KOREA - 498"<<endl;
                cout<<"\t22-11-2022 8:00 10hrs Rs. 14000"<<endl;
                cout<<"1. SOUTH KOREA - 658"<<endl;
                cout<<"\t23-11-2022 4:00 10hrs Rs. 10000"<<endl;
                cout<<"1. SOUTH KOREA - 508"<<endl;
                cout<<"\t24-11-2022 12:00 10hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to bool: ";
                cin>>choice1;

                if(choice1 == 1)
                {
                    charges = 14000;
                    cout<<"\n You have Successfully booked the flight SOUTH KOREA - 498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 2)
                {
                    charges = 10000;
                    cout<<"\n You have Successfully booked the flight SOUTH KOREA - 658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1 == 3)
                {
                    charges = 9000;
                    cout<<"\n You have Successfully booked the flight SOUTH KOREA - 508"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"invalid input, Shifting to the previous menu"<<endl;
                    Flights();
                }

                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

            default:
            {
                cout<<"Invalid input, Shifting to the main menu!!"<<endl;
                mainMenu();
                break;
            }
        }

    }
};

float Registration::charges;
int Registration::choice;


class Ticket: public Registration, public Details
{
    public:

    void Bill()
    {
        string destination=" ";
        ofstream outf("records.txt");//it is used to create and write information in the files  records.txt--in which data of files will stored; ==outf--obj
        {
            outf<<"________INDIGO Airline________"<<endl;
            cout<<endl;
            outf<<"___________Ticket_____________"<<endl;
            outf<<"______________________________"<<endl;

            outf<<"Custmer Id: "<<Details::Customer_id<<endl;
            outf<<"Custmer Name: "<<Details::Name<<endl;
            outf<<"Custmer Gender: "<<Details::Gender<<endl;
            outf<<"\t Description "<<endl<<endl;

            if(Registration::choice==1)
            {
                destination="London";
            }
            else if(Registration::choice==2)
            {
                destination="America(USA)";
            }
             else if(Registration::choice==3)
            {
                destination="Singapoor";
            }
             else if(Registration::choice==4)
            {
                destination="Dubai";
            }
             else if(Registration::choice==5)
            {
                destination="Netherland";
            }
             else if(Registration::choice==6)
            {
                destination="Japan";
            }
            else if(Registration::choice==7)
            {
                destination="Australia";
            }
             else if(Registration::choice==8)
            {
                destination="jarmany";
            }
             else if(Registration::choice==9)
            {
                destination="Thailand";
            }
            else if(Registration::choice==10)
            {
                destination="South Korea";
            }

            outf<<"Destination==\t\t"<<destination<<endl;
            outf<<"Flight cost== \t\t"<<Registration::charges<<endl;
        }

        outf.close();
    }

    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;


    cout<<"\t******************* INDIGO Airlines *********************\n"<<endl;
    cout<<"\t_____________________  Main Menu  _______________________"<<endl;

    cout<<"\t_________________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;


    cout<<"\t||\t Press 1 to add the Customer Details      \t||"<<endl;
    cout<<"\t||\t Press 2 for Flight Registration          \t||"<<endl;
    cout<<"\t||\t Press 3 for Ticket and Charges           \t||"<<endl;
    cout<<"\t||\t Press 4 to Exit                          \t||"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;
    cout<<"\t_________________________________________________________"<<endl<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;


    Details d;
    Registration r;
    Ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"_____Customers____\n"<<endl;
            t.information();
            cout<<"Press any key to go back to the Main Menu ";
            cin>>back;

            if(back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"_____Book a Flight using this system_____\n"<<endl;
            t.Flights();
            break;
        }

        case 3:
        {
        cout<<"______GET YOUR TICKET_____\n"<<endl;
        t.Bill();

        cout<<"Your Ticket is Printed, You can collect it \n"<<endl;
        cout<<"Press 1 to Display your ticket ";

        cin>>back;

           if(back == 1)
           {
               t.dispBill();
               cout<<"Press any key to go back to main menu: ";
               cin>>back;

               if(back == 1)
               {
                   mainMenu();
               }
               else
               {
                   mainMenu();
               }
           }
           else
           {
               mainMenu();
           }
           break;
        }

        case 4:
        {
            cout<<"\n\n\t______Thank You_____"<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid Input, Please try again!!\n"<<endl;
            mainMenu();
            break;
        }
    }
}

int main()
{
    Management Mobj;
   return 0;
}
