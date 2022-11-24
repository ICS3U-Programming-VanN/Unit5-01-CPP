// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: November 22, 2022
// This program asks the user for the temperature
// in celsius and then it converts it to fahrenheit
// The program will then display the converted temperature to the user


#include <iostream>


// This function converts asks the user for the temperature in celsius,
// then converts it to fahrenheit and then displays it to the user
void Fahrenheit() {
    // Declared Variables
    float celsiusFloat, fahrenheit;
    std::string celsiusString;

    // Asks user for the temperature in celsius
    std::cout << "Enter the temperature in degrees celsius (°C): ";
    std::cin >> celsiusString;

    // Checks for exceptions
    try {
        // Converts the celsius variable to a float
        celsiusFloat = stof(celsiusString);

        // Converts (calculates) the celsius to fahrenheit
        fahrenheit = (static_cast<float>(9) / static_cast<float>(5))
        * celsiusFloat + 32;

        // Displays the conversion to the user (including the fahrenheit)
        std::cout << celsiusFloat << "°C is equal to " << fahrenheit << "°F"
        << std::endl;

    // In the event of an exception
    } catch (std::invalid_argument) {
        std::cout << "You must enter a number for the celsius!" << std::endl;
    }
}


int main() {
    // Displays Program Title
    std::cout << "Celsius to Fahrenheit Program" << std::endl;

    // Calls function to convert user's celsius to fahrenheit
    Fahrenheit();
}
