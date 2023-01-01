/*
Name: Jermaine Presbery
File Name: array.h
Assignment #4
Date: 09/15/2020

Brief Description:
This is the Interface file where I will create the member functions
*/




/******************************************************
 The interface file for the class defining the Array class
 ******************************************************/

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

// Class definition
    class Array
    {
        private:
            int* arr;
            int capacity;
            int size;
        public:
            Array(int cap);        // Parameter Constructor
            ~Array();                   // Destructor
            void insert(int value);     // Setter
            void print() const;         // Setter
    };

#endif
