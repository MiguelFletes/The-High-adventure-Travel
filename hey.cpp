//# The-High-adventure-Travel
//We will implement an agency program
#include<iostream>
#include<string>
//Jesus Perez
//Michael Fletes
//Sandra 

using namespace std;
char menu();
int getUserInputP();
int getUserInputD();
void message();

double climbing( int people, int days, int instuctor, int rental);
double scuba( int people, int days, int scuba);
double skyDiveColorado(int people, int days, int lodging, char option);
double Barron Cliff(int people, int days, int rental);

int main()
{
    char selection;
    char option;
    int people, days;
    int instructor, scuba, lodging, rental;// variables to decide how many people will be doing what
                                           // depending on what activity they will be doing
    
    message();// function that will display a message to the user, (user interface)
    selection = menu();// checks what the user wants for the packages
    
    switch(selection)
    {
        case'a':  people = getUserInputP();// gets the number of people
                  days = getUserInputD();// gets the number of days
                  cout << "please enter how many people would like instuctors for rock climbing" << endl;
                  cin >> instuctor;
                  
                  climbing(people, days, instructor);
                  break;
                  
        
        case'b':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people would like scuba lessons" << endl;
                  cin >> scuba;
                  
                 scuba(people, days, scuba);
                 break;
        
        case'c':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people will want lodging" << endl;
                  cin >> lodging;
                  cout << "What lodge do you want?" << endl;
                  cin >> option;
                  
                  skyDiveColorado(people, days, lodging, option);
                  break;
        
        case'd':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people would like to rent equipment" << endl;
                  cin >> rental;
              
                  Barron Cliff(people, days, rental);
                  break;
        default: cout <<" Sorry did not understand you request" << endl;
                  break;

        
        
    }
    return 0;
    
    
}



















































































//***********************************************
double climbing(int people, int days, int instructees, int rentees)
{
    double total = 0;
    double discount;
    int baseCharge = 350;
    int instruction = 100;
    int rentals = 40;
    total = total + (baseCharge * people);
    total = total + (instructees * instruction);
    total = total + ((days * rentals) * rentees); 
    discount = getDiscount(total, people);
    
    return discount;
}

//***********************************************
double scuba(int people, int diving)
{
    double total = 0;
    double discount;
    int baseCharge = 1000;
    int scubaInstruction = 100;
    total = (people * baseCharge);
    total = total + (scubaInstruction * diving);
    discount = getDiscount(total, people);
    
    
    
    return discount;
}

//***********************************************
double skyDive(int people, int days, int lodging, char option)
{
    double total = 0;
    double discount;
    int baseCharge =   700.0;
    int wildLodge = 65.0;
    int luxInn = 120.0;
    
    
    total += (baseCharge * people);
    
    if(option = 'W')
    {
        total += (wildLodge * people) * days;
    }
    else
    {
        total += (luxInn * people) * days;
    }
    discount = getDiscount(total, people);
    
    return discount;
}

//***********************************************
double spelunk(int people, int days, int rentees)
{
    double total = 0;
    double discount;
    int baseCharge = 700;
    int rentals = 40;
    total = people * baseCharge;
    total = total +((rentees * rentals) * days);
    discount= getDiscount(total, people);
    
    return discount;
}
//*************************************************
double getDiscount(double total, int people)
{
    double discountPercent = 0.10;
    double result = 0;
    double discount = 0;
    if(people >= 5)
    {
        discount = (total * discountPercent);
        result = total - discount;
        return result;
    }
    else
    {
        result = total;
    }
    return result;
}
double climbing(int people, int days, int instructees, int rentees);
double scuba(int people, int diving);
double skyDive(int people, int days, int lodging, char option);
double spelunk(int people, int days, int rentees); 
double getDiscount(double total, int people);
