#include <iostream>
using namespace std;
int main()
{

    int r=0,c=0,b=0,amount=0,total_veh=0,choice;
    while(true)
    {

        cout<<"Welcome to Parking System"<<endl;
        cout<<"\nPress 1 : for Two Wheelers"<<endl;
        cout<<"\nPress:2 For Cars"<<endl;
        cout<<"Press 4 : For Show Record"<<endl;
        cout<<"Press 5 : For Delete Record"<<endl;
        cin>>choice;

        switch(choice)
        {

        case 1:
            r++;
            amount=amount+100;
            total_veh++;
            cout<<"Add 1 Two Wheeler in Record\n"<<endl;
            system("Pause");
            system("cls");
        case 2:
            c++;
            amount=amount+200;
            total_veh++;
            cout<<"\nAdd 1 Car in Record \n"<<endl;
            system("pause");
            system("cls");
        case 3:
            b++;
            amount=amount+300;
            total_veh++;
            cout<<"\nAdd 1 Bus in Record \n"<<endl;
            system("pause");
            system("cls");
        case 4:
            cout<<"Total Amount = "<<amount<<endl;
            cout<<"Total Vehicles = "<<total_veh<<endl;
            cout<<"Two Wheelers = "<<r<<endl;
            cout<<"Cars = "<<c<<endl;
            cout<<"Buses = "<<b<<endl;
            system("pause");
            system("cls");

        case 5:
            c=0;r=0;b=0;amount=0;total_veh=0;
            cout<<"\n\nDelete Record "<<endl;
            break;
        default:
            cout<<"\n\nInvalid Input"<<endl;



        }
    }
}
