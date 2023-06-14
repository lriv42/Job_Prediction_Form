/*
Program name lab3
Author Liam Rivers
Description: Job Forecaster
Date: 5/30/2023
*/

//necessary libraries
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    //variables - starLines needed for formatting and output
    string starLines(79, '*');
    string companyLike;
    string anotherCompany;
    string companyHate;
    string carLike;
    string anotherCar;
    string carHate;
    int userInt = 0;
    double salary = 0; //double to display decimals
    int randSalary = 0;
    int randYears = 0;
    int userOption = 0;

    //generates random number for salary calculation and years to work
    srand(time(0));
    randSalary = (rand()%10) +1;
    randYears = (rand()%60) +1;

    //more formatting and text
    cout << setprecision(2) << fixed;
    cout << starLines << endl;
    cout << "JOB FORECAST" << endl;
    cout << starLines << endl;
    cout << endl;

    cout << endl;
    cout << "Enter the information requested below and I will determine the job you will" << endl;
    cout << "get, how many years you will work there, and the company car you will drive" << endl;
    cout << endl;

    //getting inputs for companies, cars, and random number from user to determine switch cases and salary
    cout << "Company you like: ";
    getline(cin, companyLike);
    cout << "Another company you like: ";
    getline(cin, anotherCompany);
    cout << "Company you hate: ";
    getline(cin, companyHate);
    cout << endl;

    cout << "Vehicle you like: ";
    getline(cin, carLike);
    cout << "Another vehicle you like: ";
    getline(cin, anotherCar);
    cout << "Vehicle you hate: ";
    getline(cin, carHate);
    cout << endl;

    cout << "Pick an integer between 1 to 25 (inclusively) : ";
    cin >> userInt;
    cout << endl;
    cout << starLines << endl;
    cout << endl;

    //determining users options based on number they input
    if ((userInt >= 20) && (userInt <= 25)){
        userOption = 1;
    }
    else if ((userInt > 7) && (userInt < 20)) {
        userOption = 2;
    }
    else if ((userInt <=7)&&(userInt > 0)){
        userOption = 3;
    }
    else {
        cout << "Invalid Number." << endl;
    }
    
    //generating users salary
    salary = userInt * 10000 * randSalary;

    //determines users job forecast
    switch(userOption) {
        case 1:
            cout << "You will work at " << companyLike << " for " << randYears << " years making $" << salary << " per year \n";
            cout << "and driving a red " << carLike << " on business trips." << endl;
            break;

        case 2:
            cout << "You will work at " << anotherCompany << " for " << randYears << " years making $" << salary << " per year \n";
            cout << "and driving a royal blue " << anotherCar << " on business trips." << endl;
            break;

        case 3:
            cout << "You will work at " << companyHate << " for " << randYears << " years making $" << salary << " per year \n";
            cout << "and driving a neon  orange " << carHate << " on business trips." << endl;
            break;

        default:
            cout << "No job forecast." << endl;


    }
    cout << endl;
    cout << starLines << endl;

    return 0;
}