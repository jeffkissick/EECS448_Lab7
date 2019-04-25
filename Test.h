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

  bool testConstructor(); // Test that a linked list is being created
  bool testDestructor(); // Test that the linked list is being destroyed
  bool testEmpty(); // Test that an empty list is empty using isEmpty()
  bool testAddFrontSingle(); // Test that addFront() works for a single value
  bool testAddFrontMultiple(); // Test that addFront() works for several values
  bool testIsNotEmpty(); // Test that a non-empty list is not empty using isEmpty()
  bool testSizeFunction(); // Test the size() function works properly
  bool testSearchIsInList(); // Test the search function can find a few different values
  bool testSearchNotInList(); // Test the search function doesn't find values that aren't in the list
  bool testAddBackSingle(); // Test that addBack() works for a single value
  bool testAddBackMultiple(); // Test that addBack() works for multiple values
  bool testRemoveFrontEmpty(); // Test that removeFront() doesn't work on empty list
  bool testRemoveFrontSingle(); // Test that removeFront() works for a single element
  bool testRemoveFrontMultiple(); // Test that removeFront() works for several elements, with seperate calls, in a list
  bool testRemoveFrontReturnsTrueWithNonEmptyList(); // Should be clear what this is testing
  bool testRemoveBackEmpty(); // Test that removeBack() doesn't work on an empty list
  bool testRemoveBackSingle(); // Test that removeBack() works for a single element
  bool testRemoveBackMultiple(); // Test that removeBack() works for multiple elements
  bool testRemoveBackReturnsTrueWithNonEmptyList(); // Self-explanitory

};
