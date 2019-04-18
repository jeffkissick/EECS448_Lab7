/**
* @Jeff Kissick
* @4/18/2019
* @file Test.h
* @class declaration for TestSuite
*/

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <math.h>
#include <random>

using namespace std;

class Test
{
public:

  void runTests(); // Runs the Tests
  void printTrueOrFalse(bool); // Prints True or False instead of 1 or 0

  bool testEmpty(); // Test that an empty list is empty using isEmpty()
  bool testAddFrontSingle(); // Test that addFront() works for a single value
  bool testAddFrontMultiple(); // Test that addFront() works for several values
  bool testIsNotEmpty(); // Test that a non-empty list is not empty using isEmpty()

};
