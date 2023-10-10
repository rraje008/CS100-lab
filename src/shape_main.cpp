#include "../header/triangle.hpp"
#include "../header/rectangle.hpp"

#include <iostream>
#include <limits> 



using namespace std;


int main()
{
    
int userChoice = 0;

do 
{

    cout << "Choose 1 for triangle or choose 2 for rectangle" << endl;
    cin >> userChoice;


    if (cin.fail()) 
    {
        cin.clear(); 

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        cout << "Error! Change Value" << endl;

        continue; 
    }

} while  (userChoice > 1 || userChoice < 0);

if  (userChoice == 1) 
{
    bool badChoice = false;
    double height;
    double base;
    

    Triangle triangle;
    

    badChoice = false;

    cout << "Enter  Height: " << endl;
    cin >> height;


    if (cin.fail() || height < 0 ) 
    {
        badChoice = true;
    }

    while (badChoice == true) 
    {
        cout << "Enter  Height: " << endl;
        cin >> height;
        if (!cin.fail() && height > 0 ) 
        {
            badChoice = false;
        } 
        else 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Change Value" << endl;
        }
    }


    cout << "Enter  Base: " << endl;
    cin >> base;


    if (cin.fail() || base < 0) 
    {
        badChoice = true;
    }


    while (badChoice == true) 
    {
        cout << "Enter  Base: " << endl;
        cin >> base;
        if (!cin.fail() && base > 0 ) 
        {
            badChoice = false;
        } 
        else 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Change Value" << endl;
        }
    }
    triangle.set_base(base);


    triangle.set_height(height);
    cout << "Triangle area: " << triangle.area() << endl;
}




else if  (userChoice == 2) 

{
    bool badChoice = false;

    
    double height;
    double width;

    Rectangle rectangle;

   
    
    cout << "Enter  Height: " << endl;
    cin >> height;
    if (height < 0 || cin.fail()) 
    {
        badChoice = true;
    }
    while (badChoice == true) 
    {
        cout << "Enter Height: " << endl;
        cin >> height;
        if (!cin.fail() && height > 0) {
            badChoice = false;
        } 
        else 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Change Value" << endl;
        }
    }


    rectangle.set_height(height);

    badChoice = false;
    cout << "Enter  Width: " << endl;
    cin >> width;


    if (cin.fail() || width< 0  ) 
    {
        badChoice = true;
    }

    while (badChoice == true) {
        cout << "Enter  Width: " << endl;
        cin >> width;
        if ( !cin.fail() && width > 0 ) 
        {
            badChoice = false;
        } 
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Change Value" << endl;
        }

    }


    rectangle.set_width(width);


    cout << "Rectangle area: " << rectangle.area() << endl;
}  

}







