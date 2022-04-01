// horoscopes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //declare variables 
    int birthMonth;
    int birthDay;

    // prompt the user for the two digits of their birth month
    std::cout << "Enter the digit of your birth month (for example if you were born in January, digits would be 1): ";
    std::cin >> birthMonth;

     
    
    if (birthMonth == 1){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 19)
        {
            std::cout << "You are a Capricorn";
        }
        else
        {
            std::cout << "You are an Aquarius";
        }
    }


    if (birthMonth == 2) {
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 19)
        {
            std::cout << "You are an Aquarius ";
        }
        else
        {
            std::cout << "You are a Pisces";
        }
    }


    if (birthMonth == 3){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 19)
        {
            std::cout << "You are a Pisces ";
        }
        else
        {
            std::cout << "You are an Aries ";
        }
    }


    if (birthMonth == 4){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 19)
        {
            std::cout << "You are an Aries ";
        }
        else
        {
            std::cout << "You are a Taurus ";
        }
    }

    if (birthMonth == 5){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 20)
        {
            std::cout << "You are a Taurus ";
        }
        else
        {
            std::cout << "You are a Gemini ";
        }
    }


    if (birthMonth == 6){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 20)
        {
            std::cout << "You are a Gemini ";
        }
        else
        {
            std::cout << "You are a Cancer ";
        }
    }
        


    if (birthMonth == 7){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay == 3)
        {
            std::cout << "You and the dev have the same birthday! \n";
        }
        if (birthDay <= 22)
        {
            std::cout << "You are a Cancer ";
        }
        else
        {
            std::cout << "You are a Leo ";
        }
    }


    if (birthMonth == 8){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 22)
        {
            std::cout << "You are a Leo ";
        }
        else
        {
            std::cout << "You are a Virgo ";
        }
    }

    if (birthMonth == 9){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 22)
        {
            std::cout << "You are a Virgo ";
        }
        else
        {
            std::cout << "You are a Libra ";
        }
    }


    if (birthMonth == 10){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 22)
        {
            std::cout << "You are a Libra ";
        }
        else
        {
            std::cout << "You are a Scorpio ";
        }
    }

    if (birthMonth == 11){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 21)
        {
            std::cout << "You are a Scorpio ";
        }
        else
        {
            std::cout << "You are a Sagittarius ";
        }
    }


    if (birthMonth == 12){
        std::cout << "What day of the month were you born?: ";
        std::cin >> birthDay;
        if (birthDay <= 22)
        {
            std::cout << "You are a Sagittarius ";
        }
        else
        {
            std::cout << "You are a Capricorn ";
        }
    }

    if (birthMonth > 12){
        std::cout << "There are 12 months in a year dude....";
    }



    return 0;

    }




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
