#ifndef functions_hpp
#define functions_hpp


#include <iostream>     // cout, cin
#include <cassert>      // assert in fib function
#include <string>       // parameter in get_double
#include <vector>       // a lot of code using vectors
#include <utility>      // swap


// Question 1a.
/**
Test the parameter(year) if it is divisible by 4.
If the number is divisible by 4
; if not, return false
; if yes, then tests if it is divisible by 100
; if not, return true
; if yes, tests if it is divisible by 400
; if not, return false
; if yes, then return true.
@param year: the year to test if it is a leap year.
@return whether it is a leap year.
*/
bool leap_year(int year);

// Question 1b.
/**
print the first N fibonacci number separate by space,
and an endl occurs at the end.
@param N: the first N fibonacci to print.
*/
void fib(int N);

// Question 1c.
/**
* Asks the user to input a value as the answer to the given prompt, then return the value
    @param prompt: prints the given prompt which ask the user to enter an input
    @return the input as a double.
 }
*/
double get_double(std::string prompt);


// Michael made this function. Do NOT delete it!!
/**
 Prints a vector of ints;
 the ints are separated by spaces,
 and an endl occurs at the end.

 @param v : the vector to print
*/
void printMyVector(const std::vector<int>& v);

// Question 2.
// Michael commented this function.
/**
 Concatenates two vectors of ints.
 @param v : the first vector
 @param w : the second vector
 @return the concatenation of v and w, that is,
         the vector storing all of the values of v
         followed by all of the values of w.
*/
std::vector<int> concatenateMyVectors(const std::vector<int>& v,
                                      const std::vector<int>& w);


// Question 3.
/**
 Arranges 5 numbers in increasing order
 @param int& i1, int& i2, int& i3, int& i4, int& i5: numbers need to be arranged(swapped)
*/
void sort5(int& i1, int& i2, int& i3, int& i4, int& i5);


// Question 4.
/**
 Place the numbers in the vector reversely.
 @param v: the vector to place reversely. 
*/
void reverse(std::vector<int>& v);


// Question 5.
// prints the numbers in vector without space,
// @param v: the vector to print
void print(const std::vector<bool>& v);
// Adds 0s to the vector 
// @param v: vector to add 0s
// @param numberToAdd: numbers of 0s add to vector
void addZeros(std::vector<bool>& v, size_t numberToAdd);
// do the binary addition for two vectors,
// store the carry in another vector
// @param v : the first vector
// @param w : the second vector
// @return the binary addition of v and w (z).
std::vector<bool> addition(std::vector<bool> v,
                           std::vector<bool> w);


#endif /* functions_hpp */
