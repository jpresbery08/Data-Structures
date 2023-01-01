/*
Name: Jermaine Presbery
File Name: array.h
Assignment #5
Date: 09/21/2020

Brief Description:
This is the Interface file where I will create the member functions
*/

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

/*------------------------ Class Defintion ----------------------*/

class Array
{
    private:
        int* arr;
        int capacity;
        int size;
        void moveTowardFront(int index);
        void moveTowardEnd(int index);
        
    public:
        Array(int capacity);        // Parameter Constructor
        ~Array();                   // Destructor
        void insert(int value);     // Setter
        void remove(int value);     // Setter
        void print() const;         // Setter

};

#endif
