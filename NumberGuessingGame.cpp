// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks if guessed number is correct or wrong

#include <iostream>

int main() {
    // this function checks if guessed number is correct or wrong
    const int MY_NUMBER = 5;
    int guessedNumber;

    // input
    std::cout << "Can you guess the number I choose from 0 to 9?" << std::endl;
    std::cout << "Enter the guessed number: ";
    std::cin >> guessedNumber;
    std::cout << "" << std::endl;

    // process
    if (guessedNumber == MY_NUMBER)
            // output
            std::cout << "Correct!";
    else
    std::cout << "Incorrect, the number was 5."
    ;}
