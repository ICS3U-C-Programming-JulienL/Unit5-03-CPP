// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: November 30, 2023
// This program displays your grade in percent based off your level.

#include <iostream>

int calcMark(std::string level) {
     // use an if else structure to show what % the levels are represented by
    if (level == "4+") {
        return 97;
    } else if (level == "4") {
        return 90;
    } else if (level == "4-") {
        return 83;
    } else if (level == "3+") {
        return 78;
    } else if (level == "3") {
        return 75;
    } else if (level == "3-") {
        return 71;
    } else if (level == "2+") {
        return 68;
    } else if (level == "2") {
        return 65;
    } else if (level == "2-") {
        return 61;
    } else if (level == "1+") {
        return 58;
    } else if (level == "1") {
        return 55;
    } else if (level == "1-") {
        return 51;
    } else if (level == "1-") {
        return 51;
    } else if (level == "0") {
        return 25;
    } else {
        // if the user enters an invalid number, return -1
        return -1;
    }
}

int main() {
    // declare variables
    int calculatedMark;
    std::string userLevel;

    // get user level
    std::cout << "This program displays your grade in % based off your level."
    << std::endl;
    std::cout << ("Enter your level (ex. 3+): ");
    std::cin >> userLevel;

    // set calculated_mark to calc_mark() and call the function
    calculatedMark = calcMark(userLevel);

    // if the user enters an invalid number, tell them to enter a valid level
    if (calculatedMark == -1) {
        std::cout << "Please enter a valid level." << std::endl;
    } else {
         // otherwise display user level
         std::cout << calculatedMark << "% <<" std::endl;
    }
}
