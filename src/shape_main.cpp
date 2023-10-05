#include <iostream>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    
    
    int choice  = 0;
    cout << "To choose triangle enter 1, To choose rectangle enter 2" << endl;
    cin >> choice;

    if (choice ==  2){
        double height, width;
        Rectangle rect1;
        cout << "Enter width" << endl;
        cin >> width;
        if (width < 0 && cin.fail()){
           return 0;
            
            
        }
        else{
            rect1.set_width(width);
        }
        
        cout << "Enter height" << endl;
        cin >> height;
        if (height < 0){
            bool good = false;
            while (good == false){
                cout << "Enter height" <<endl;
                cin >> height;
                if (height>0){
                    good = true;
                }
            }
        }
        else{
            rect1.set_height(height);
        }
        
        cout << "Rectangle 1 area: " << rect1.area() << endl;
    }

    else if (choice == 1) {
        double height, base;
        Triangle t1;
        cout << "Enter base" << endl;
        cin >> base;
        if (base < 0){
            bool good = false;
            while (good == false){
                cout << "Enter base" <<endl;
                cin >> base;
                if (base>0){
                    good = true;
                }
            }
        }
        
        t1.set_base(base);
        
        cout << "Enter height" << endl;
        cin >> height;
        if (height < 0){
            bool good = false;
            while (good == false){
                cout << "Enter height" <<endl;
                cin >> height;
                if (height>0){
                    good = true;
                }
            }
        }
        
        t1.set_height(height);
        cout << "Triangle 1 area: " << t1.area() << endl;
    }
    
    
    return 0;
}