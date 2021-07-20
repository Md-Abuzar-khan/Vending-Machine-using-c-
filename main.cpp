//Project of automatic vending machine
#include <iostream>

using namespace std;

int main()
{
   //For main menu
    cout << "*************************PROGRAM FOR FULLY AUTOMATIC VENDING MACHINE*************************" << endl;
    while(true) // for repeating menu
    {
    char ch;
    cout << "\nChoose Your desire Menu Option \n Press c for Coffee \n Press t for Tea \n Press s for Soup \n Press b for Beverages" <<endl;
    cin >> ch;  //End Of main menu
    //Start For sub menu
    switch(ch)
    {
    case 'c':
        {
            // Start For coffee menu
            int vh;
            cout << "\n ******Coffee****** \n Choose Your Desire Coffee \n 1. Expresso Coffee \n 2. Cuppucino Coffee \n 3. Latte Coffee"<< endl;
            cin >> vh;
            switch(vh){
            case 1:
                {
                    cout << "Welcome to CCD \n Enjoy your Expresso Coffee" << endl;
                    break;
                }
                 case 2:
                {
                    cout << "Welcome to CCD \n Enjoy your Cuppucino Coffee" << endl;
                    break;
                }
                 case 3:
                {
                    cout << "Welcome to CCD \n Enjoy your latte Coffee" << endl;
                    break;
                }
                 default:
                    {
                        cout << "Invalid Selection" << endl;
                        break;
                    }
            }
            break;  // End of coffee menu
    case 't':
        {
            //Start For Tea Menu
            int bh;
            cout << "\n ******Tea****** \n Choose Your Desire Tea \n 1. Plain tea \n 2. Assam tea \n 3. Ginger Tea \n 4. Cardamom Tea \n 5. Masala Tea \n 6. Lemon Tea \n 7. Green Tea \n 8. Organic Darjeeling Tea"<< endl;
            cin >> bh;
            switch(bh){
            case 1:
                {
                    cout << "Welcome to CCD \n Enjoy your Plain Tea" << endl;
                    break;
                }
                 case 2:
                {
                    cout << "Welcome to CCD \n Enjoy your Assam Tea" << endl;
                    break;
                }
                 case 3:
                {
                    cout << "Welcome to CCD \n Enjoy your Ginger Tea" << endl;
                    break;
                }
                case 4:
                {
                    cout << "Welcome to CCD \n Enjoy your Cardamom Tea" << endl;
                    break;
                }
                 case 5:
                {
                    cout << "Welcome to CCD \n Enjoy your Masala Tea" << endl;
                    break;
                }
                 case 6:
                {
                    cout << "Welcome to CCD \n Enjoy your Lemon Tea" << endl;
                    break;
                }
                 case 7:
                {
                    cout << "Welcome to CCD \n Enjoy your Green Tea" << endl;
                    break;
                }
                 case 8:
                {
                    cout << "Welcome to CCD \n Enjoy your Organic Darjeeling Tea" << endl;
                    break;
                }
                 default:
                    {
                        cout << "Invalid Selection" << endl;
                        break;
                    }
                 }
                 break;   //End of tea menu
    case 's':
        {
            //Start For soup menu
            int vs;
            cout << "\n ******Soups****** \n Choose Your Desire Soup \n 1. Hot and Sour Soup \n 2. Veg Corn Soup \n 3. Tomato Soup \n 4. Spicy Soup"<< endl;
            cin >> vs;
            switch(vs){
            case 1:
                {
                    cout << "Welcome to CCD \n Enjoy your Hot and Sour Soup" << endl;
                    break;
                }
                 case 2:
                {
                    cout << "Welcome to CCD \n Enjoy your Veg Corn Soup" << endl;
                    break;
                }
                 case 3:
                {
                    cout << "Welcome to CCD \n Enjoy your Tomato Soup" << endl;
                    break;
                }
                 case 4:
                    {
                        cout << "Welcome To CCD \n Enjoy Your Spicy Tomato Soup" << endl;
                        break;
                    }
                 default:
                    {
                        cout << "Invalid Selection" << endl;
                        break;
                    }
                   }
                        break;     //End of Soup Menu
    case 'b':
        {
              //Start For Beverages menu
              int vb;
            cout << "\n ******Beverages****** \n Choose Your Desire Beverages \n 1. Hot Chocolste \n 2. Badam Drink \n 3. Badam-Pista Drink"<< endl;
            cin >> vb;
            switch(vb){
            case 1:
                {
                    cout << "Welcome to CCD \n Enjoy your Hot Chocolate " << endl;
                    break;
                }
                 case 2:
                {
                    cout << "Welcome to CCD \n Enjoy your Badam Drink" << endl;
                    break;
                }
                 case 3:
                {
                    cout << "Welcome to CCD \n Enjoy your Badam-Pista Drink" << endl;
                    break;
                }
                 default:
                    {
                        cout << "Invalid Selection" << endl;
                        break;
                    }
                }
                  break;   // End of beverages menu
           // default of sub menu
          default:
            {
               cout << "Invalid Selection" << endl;
               break; // End of sub menu
            }
        }
    return 0;  // end of main menu
}
}
}
    }
}
}


