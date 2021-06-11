// Copyright (c) 2021 Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 11, 2021
// This program generates 10 random numbers into an array/list between 0 and 100
// and displays the number with the highest value

#include <time.h>
#include <iostream>
#include <random>
#include <array>

// declare constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_VALUE = 0;
const int MAX_VALUE = 100;


int findMaxValue(std::array<int, MAX_ARRAY_SIZE> array) {
    // checks for the highest value/number in a list/array
    int max = 0, counter = MIN_VALUE;
    max = array[counter];

    for (counter = MIN_VALUE; counter < array.size(); counter++) {
        if (array[counter] > max) {
            max = array[counter];
        } else {
            max = max;
        }
    }
    return max;
}


int main() {
    // declare local variables
    int randomNumber, maxValue;

    // create array
    std::array<int, MAX_ARRAY_SIZE> numberArray;

    // reset random numbers every runtime
    srand(time(NULL));

    for (int counter = MIN_VALUE; counter < MAX_ARRAY_SIZE; counter++) {
        // generate random number from 0 to 100 and add it to the array
        randomNumber = (rand() % MAX_VALUE) + MIN_VALUE;

        numberArray[counter] = randomNumber;

        // display the random number added and at which position/index
        std::cout << randomNumber << " added to the list at position ";
        std::cout << counter << ".\n";
    }
    std::cout << "\n";

    // call function to check for the highest value in the array
    maxValue = findMaxValue(numberArray);

    // display the highest value in the array
    std::cout << "The maximum value is: " << maxValue;
}
