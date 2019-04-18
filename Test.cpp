/**
* @Jeff Kissick
* @4/18/2019
* @file Test.cpp
* @class definitions for TestSuite
*/

#include "Test.h"
#include "LinkedListOfInts.h"

void Test::runTests()
{

  testEmpty();
  testAddFrontSingle();
  testAddFrontMultiple();
  testIsNotEmpty();

}

void Test::printTrueOrFalse(bool passed)
{

  if(passed == true)
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }

}

bool Test::testEmpty()
{

  bool passed = false;
  LinkedListOfInts list;

  if(list.isEmpty() == true)
  {
    passed = true;
  }

  cout << "An Empty List passes an isEmpty Check: ";

  printTrueOrFalse(passed);

  return passed;

}

bool Test::testAddFrontSingle()
{
  bool passed = false;
  LinkedListOfInts list;

  list.addFront(1);

  if(list.size() == 1)
  {
    passed = true;
  }

  cout << "addFront() adds a single int to the list: ";

  printTrueOrFalse(passed);

  return passed;
}

bool Test::testAddFrontMultiple()
{
  bool passed = false;
  LinkedListOfInts list;

  for(int i = 0; i < 100; i++)
  {
    list.addFront(i);
    cout << "Added " << i + 1 << "values to the list and the size is currently: "
    << list.size() << endl;;
  }

  if(list.size() == 100)
  {
    passed = true;
  }

    cout << "A list of 100 items has a size of 100: ";

  printTrueOrFalse(passed);

  return passed;

}

bool Test::testIsNotEmpty()
{

  bool passed = false;
  LinkedListOfInts list;

  list.addFront(0);

  if(list.isEmpty() == false)
  {
    passed = true;
  }

  cout << "A Non-empty List fails an isEmpty Check: ";

  printTrueOrFalse(passed);

  return passed;
}
