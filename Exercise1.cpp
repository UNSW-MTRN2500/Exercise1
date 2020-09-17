// File:        Exercise1_z1234567.cpp
// Description: Exercise 1, MTRN2500 20T3
// Autor:       XX XX
// zID:         z1234567
// Date:        XX/XX/2020

// -------------------------general instructions--------------------------------
// implement all the functions except the main() to make this program work;
// you can modify both the parameters and the body of the functions;
// try using range_based for loops;
// try using const, auto and reference (&) wherever possible and appropriate
// and think about why if some of them did not work in places you have tried
// -----------------------------------------------------------------------------

#include <array>
#include <iostream>

// ------------------------------stage 1----------------------------------------
// TODO: modify readFiveIntegersFromCin function using range-based for loop
// description: read five integers from std::cin;
// return:      a std::array storing five integers user entered
std::array<int, 5> readFiveIntegersFromCin(void) {
  // create an int array with five elements using std::array
  // and initialise the elements with zeros
  std::array<int, 5> inputs{};
  // TODO: replace the following for loop with a range-based for loop
  for (unsigned int i = 0; i < 5; ++i) {
    std::cin >> inputs[i];
  }
  return inputs;
}

// TODO: implement printArrayToCout function for intArray;
// description: print five integers to std::cout
//              printing extra spaces is fine
void printArrayToCout(std::array<int, 5> intArray) {  // can be modified
  // your code here...
  for (auto &i : intArray) {
    std::cout << i << '\n';
  }
}

// TODO: implement findMaximumValue function for intArray;
// description: find the maximum value in the array;
// return:      the found value
int findMaximumValue(std::array<int, 5> intArray) {  // can be modified
  // your code here...
  return 0;
}

// TODO: implement findMinimumValue function for intArray;
// description: find the minimum value in the array;
// return:      the found value
int findMinimumValue(std::array<int, 5> intArray) {  // can be modified
  // your code here...
  return 0;
}

// TODO: implement printMaximumToCout function for intArray;
// description: print the maximum number in the array to std::cout
void printMaximumToCout(std::array<int, 5> intArray) {  // can be modified
  int maximum = findMaximumValue(intArray);             // can be modified
                                                        // your code here...
}

// TODO: implement printMinimumToCout function for intArray;
// description: print the minimum number in the array to std::cout
void printMinimumToCout(std::array<int, 5> intArray) {
  int minimum = findMinimumValue(intArray);  // can be modified
                                             // your code here...
}

// -----------------------------stage 2-----------------------------------------
// TODO: implement readFiveDoublesFromCin function;
// description: read five doubles from std::cin;
// return:      a std::array storing five doubles user entered
std::array<double, 5> readFiveDoublesFromCin(void) {
  // your code here...
  return std::array<double, 5>{};
}

// TODO: implement printArrayToCout function for doubleArray;
// description: print five doubles to std::cout
//              printing extra spaces is fine
void printArrayToCout(...) {  // can be modified
                              // your code here...
}

// TODO: implement findMaximumValue function for doubleArray;
// description: find the maximum value in the array;
// return:      the found value
double findMaximumValue(...) {  // can be modified
  // your code here...
  return 0.0;
}

// TODO: implement findMinimumValue function for doubleArray;
// description: find the minimum value in the array;
// return:      the found value
double findMinimumValue(...) {  // can be modified
  // your code here...
  return 0.0;
}

// TODO: implement printMaximumToCout function for doubleArray;
// description: print the maximum number in the array to std::cout
void printMaximumToCout(...) {  // can be modified
                                // your code here...
}

// TODO: implement printMinimumToCout function for doubleArray;
// description: print the minimum number in the array to std::cout
void printMinimumToCout(...) {  // can be modified
                                // your code here...
}

// -----------------------------main function-----------------------------------
// you should not make changes to the main function;
// instead, implement the other functions to make this program work
int main() {
  // Stage 1
  // ask user to input five integer numbers and store them in an int array
  std::cout << "1 - Please input five integers:\n";
  std::array<int, 5> intArray = readFiveIntegersFromCin();

  // print all the elements of the int array to std::cout
  printArrayToCout(intArray);

  // print the maximum value to std::cout
  printMaximumToCout(intArray);
  // print the minimum value to std::cout
  printMinimumToCout(intArray);

  // Stage 2
  // ask user to input five decimal numbers and store them in a double array
  std::cout << "2 - Please input five decimals:\n";
  std::array<double, 5> doubleArray = readFiveDoublesFromCin();

  // print all the elements of the double array to std::cout
  printArrayToCout(doubleArray);

  // print the maximum value to std::cout
  printMaximumToCout(doubleArray);
  // print the minimum value to std::cout
  printMinimumToCout(doubleArray);

  return 0;
}
