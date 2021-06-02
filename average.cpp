// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on June 2021
// This program prints 10 random integers and finds their average

#include <iostream>
#include <random>


int main() {
    // This function prints 10 random integers and finds their average
    std::cout << "This program prints 10 random integers between, 1 and 100,"
              << " and finds their average." << std::endl;
    std::cout << "" << std::endl;

    // variables
    int randomList[10];
    int randomNumber;
    float sum;
    float average;

    std::cout << "Displayed below are 10 random integers "
              << "between 1 and 100:" << std::endl;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        // random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);

        randomList[loop_counter] = randomNumber;

        std::cout << randomNumber << std::endl;
    }

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        sum = sum + randomList[loop_counter];
    }

    average = sum / 10;

    std::cout << "" << std::endl;
    std::cout << "The average of these 10 random integers is: " << average
              << std::endl;
}
