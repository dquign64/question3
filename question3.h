#include <iostream>

double get_cookie_ingredients(int c){
    int cookies;
    double cook;

    std::cout << "How many cookies do you want: ";
    std::cin >> cookies;

    if (cookies > 0){
        cook = cookies / 48;

        double sugar = 1.5;
        double butter = 1.0;
        double flour = 2.75;

        sugar = sugar * cook;
        butter = butter * cook;
        flour = flour * cook;

        std::cout << "The number of cookies made is: " << cookies << "\n";
        std::cout << "The amount of sugar used was: " << sugar << "\n";
        std::cout << "The amount of butter used was: " << butter << "\n";
        std::cout << "The amount of flour used was: " << flour << "\n";

        std::cout << "How many cookies do you want: ";
        std::cin >> cookies;
    }

    else
    {
        return 0;
    }
    
}