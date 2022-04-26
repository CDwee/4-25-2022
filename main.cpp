// Started at 4:39 4-25-2022

#include <iostream>

// This is a comment

/*  This is a multiple
    line
    comment
*/

int main() {
    int favorite_number; // this is where my favorite number is stored
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}

// Section 5
// Basic I/O using cin and cout

#include <iostream>

using namespace std;

int main() {
    
//    cout << "Hello world!";

//    cout << "Hello";
//    cout << "World" << endl;
    
//    cout << "Hello world!" << endl;
//    cout << "Hello" << " world!" << endl;
//    cout << "Hello" << " world!\n";
//    cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3;
//    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;

//    cout << "Enter a first integer: ";
//    cin >> num1;
//    
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    
//    cout << "You entered " << num1 << " and " << num2 << endl;


//    cout << "Enter 2 integers separated with a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;
    
    
   
//    cout << "Enter a double: ";
//    cin >> num2;
//    
//    cout << "You entered: " << num2 << endl;


    cout << "Enter an integer: ";
    cin >> num1;
    
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "The integer is: " << num1 << endl;
    cout << "And the double is: " << num3 << endl;
    

    return 0;
}

#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {
    
    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room is " << room_width * room_length << " square feet" << endl;
    
    return 0;
}

// Section 6
// Global and local variables

#include <iostream>

using namespace std;

int age {18} // Global variable

int main() {
    
    int age {16}
    
    cout << age << endl;
    
    return 0;
}

// Section 6
// Primitive types

#include <iostream>

using namespace std;

int main() {
    /*********************************
     * Character type
     ********************************/
     char middle_intial{'J'}; // Notice the single quotes around characters
     cout << "My middle intial is " << middle_intial << endl;
     
     /*********************************
     * Integer type
     ********************************/ 
      unsigned short int exam_score {55}; // same as unsigned short exam_score {55};
      cout << "My exam score was " << exam_score << endl;
      
      int countries_represented {65};
      cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
      
      long people_in_florida {20610000};
      cout << "There are about " << people_in_florida << " people in Florida" << endl;
      
      long long people_on_earth {7'600'000'000};
      cout << "There are about " << people_on_earth << " people on Earth" << endl;
      
      long long distance_to_alpha_centauri {9'461'000'000'000};
      cout << "The distance to Alpha Centauri " << distance_to_alpha_centauri << " kilometers" << endl;
      
      
      /*********************************
     * Floating point types
     ********************************/
     float car_payment {401.23};
     cout << "My car payment is " << car_payment << endl;
     
     double pi {3.14159};
     cout << "PI is " << pi << endl;
     
     long double large_amount {2.7e120};
     cout << large_amount << " is a very big number" << endl;
     
     /*********************************
     * Boolean type
     ********************************/
     bool game_over {false};
     cout << "The value of game_over is " << game_over << endl;
     
     /*********************************
     * Overflow example
     ********************************/
     short value1 {30000};
     short value2 {1000};
     short product {value1 * value2}; // Produces overflow error
     
     cout << "The product of " << value1 << " and " << value2 << "is " << product << endl;
     
     return 0;
}

// Ended a 7:40 4-25-2022
