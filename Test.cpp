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
  
  testConstructor();
  testDestructor();
  testEmpty();
  testAddFrontSingle();
  testAddFrontMultiple();
  testIsNotEmpty();
  testSizeFunction();
  testSearchIsInList();
  testSearchNotInList();
  testAddBackSingle();
  testAddBackMultiple();
  testRemoveFrontEmpty();
  testRemoveFrontSingle();
  testRemoveFrontMultiple();
  testRemoveFrontReturnsTrueWithNonEmptyList();
  testRemoveBackEmpty();
  testRemoveBackSingle();
  testRemoveBackMultiple();
  testRemoveBackReturnsTrueWithNonEmptyList();

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

bool Test::testConstructor()
{

  bool passed = false;
  LinkedListOfInts list;

  if(list.toVector().size() == 0) // Since we are told toVector works, I get the size of the vector instead of using our normal size function
  {
    passed = true;
  }

  cout << "A LinkedListOfInts is being constructed as an empty list: ";

  printTrueOrFalse(passed);

  return passed; // Test passes

}

bool Test::testDestructor()
{

  bool passed = true;
  LinkedListOfInts list;

  list.addFront(1);

  /* I am not even sure this works but I found a thing on geek for geeks
     that apparently this works.  I question that this actually destroys
     anything and I likely need a pointer to the object to test if anything is
     actually destroyed. */
  list.~LinkedListOfInts();

  if(list.toVector()[0] == 1)
  {
    cout << "The destructor does not work!" << endl;
    passed = false;
  }

  // try
  // {
  //   list.toVector();
  // }
  // catch
  // {
  //   passed = true;
  // }

  cout << "A LinkedListOfInts is being properly destructed: ";

  printTrueOrFalse(passed);

  return passed; // Test fails

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

  return passed; // Test passes

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

  return passed; // Test passes
}

bool Test::testAddFrontMultiple()
{
  bool passed = false;
  LinkedListOfInts list;

  for(int i = 1; i <= 100; i++)
  {
    list.addFront(i);
  }

  if(list.toVector()[0] == 100)
  {
    passed = true;
  }

  cout << "addFront() adds multiple ints in the front of the list: ";

  printTrueOrFalse(passed);

  cout << "and the item at the front of this list is: " << list.toVector()[0] << endl;

  return passed;

}

bool Test::testSizeFunction()
{
  bool passed = false;
  LinkedListOfInts list;

  for(int i = 0; i < 100; i++)
  {
    list.addFront(i);
    cout << "Added " << i + 1 << " values to the list and the size is currently: "
    << list.size() << endl;
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

bool Test::testSearchIsInList()
{

  bool passed = false;
  LinkedListOfInts list;

  for(int i = 1; i <= 100; i++)
  {
    list.addFront(i);
  }

  if(list.search(1) == true && list.search(50) == true && list.search(100) == true && list.search(80) == true)
  {
    passed = true;
  }

  cout << "Search has found 1, 50, 80, and 100 in the list: ";

  printTrueOrFalse(passed);

  return passed;

}

bool Test::testSearchNotInList()
{

  bool passed = true;
  LinkedListOfInts list;

  for(int i = 0; i <= sizeof(int); i++)
  {
    if(list.search(i) == true)
    {
      passed = false;
      break;
    }
  }

  cout << "Search found no values in an empty list: ";

  printTrueOrFalse(passed);

  return passed;

}

bool Test::testAddBackSingle()
{
  bool passed = false;
  LinkedListOfInts list;

  list.addBack(1);

  if(list.size() == 1)
  {
    passed = true;
  }

  cout << "addBack() adds a single int to the list: ";

  printTrueOrFalse(passed);

  return passed;
}

bool Test::testAddBackMultiple()
{
  bool passed = false;
  LinkedListOfInts list;

  for(int i = 1; i <= 100; i++)
  {
    list.addBack(i);
  }



  if(list.toVector().back() == 100)
  {
    passed = true;
  }

  cout << "addBack() adds multiple ints in the back of the list: ";

  printTrueOrFalse(passed);

  cout << "and the item in this list at the back is: " << list.toVector().back() << endl;

  return passed;

}

bool Test::testRemoveFrontEmpty()
{
  bool passed = false;
  LinkedListOfInts list;

  if(list.removeFront() == false)
  {
    passed = true;
  }

  cout << "removeFront() returns false for an empty list: ";

  printTrueOrFalse(passed);

  return passed;
}

bool Test::testRemoveFrontSingle()
{
  bool passed = false;
  LinkedListOfInts list;


  list.addFront(1); // Using addFront since testing determined addBack doesn't work but appears to be the same as addFront.

  list.removeFront();

  if(list.size() == 0)
  {
    passed = true;
  }

  cout << "removeFront() does remove the item in a one item list: ";

  printTrueOrFalse(passed);

  cout << "The size of the list is now: " << list.size() << ". The size should be 0." << endl;

  return passed;
}

bool Test::testRemoveFrontMultiple()
{
  bool passed = false;
  LinkedListOfInts list;

  for(int i = 1; i <= 100; i++)
  {
    list.addFront(i);
  }

  for(int i = 0; i < 50; i++)
  {
    list.removeFront();
  }

  if(list.toVector()[0] == 49)
  {
    passed = true;
  }

  cout << "removeFront() removes multiple ints in the front of the list: ";

  printTrueOrFalse(passed);

  cout << "and the item in this list at the front is: " << list.toVector()[0] << ". The list size is now: "
  << list.size() << ".  It should be size 50." << endl;

  return passed;
}

bool Test::testRemoveFrontReturnsTrueWithNonEmptyList()
{
  bool passed;
  LinkedListOfInts list;

  list.addFront(1); // Using addFront since testing determined addBack doesn't work but appears to be the same as addFront.

  passed = list.removeFront();

  cout << "removeFront() returns true when removing an item with a non-empty list: ";

  printTrueOrFalse(passed);

  return passed;

}

bool Test::testRemoveBackEmpty()
{

  bool passed = false;
  LinkedListOfInts list;

  if(list.removeBack() == false)
  {
    passed = true;
  }

  cout << "removeFront() returns false for an empty list: ";

  printTrueOrFalse(passed);

  return passed;

}

bool Test::testRemoveBackSingle()
{
  bool passed = false;
  LinkedListOfInts list;

  list.addFront(1);

  list.removeBack();

  if(list.size() == 0)
  {
    passed = true;
  }

  cout << "removeBack() does remove the item in a one item list: ";

  printTrueOrFalse(passed);

  cout << "The size of the list is now: " << list.size() << ". The size should be 0." << endl;

  return passed;

}

bool Test::testRemoveBackMultiple()
{

  bool passed = false;
  LinkedListOfInts list;

  for(int i = 1; i <= 100; i++)
  {
    list.addFront(i);
  }

  for(int i = 0; i < 50; i++)
  {
    list.removeBack();
  }

  if(list.toVector().back() == 50)
  {
    passed = true;
  }

  cout << "removeBack() removes multiple ints in the front of the list: ";

  printTrueOrFalse(passed);

  cout << "and the item in this list at the back is: " << list.toVector().back() << ". The list size is now: "
  << list.size() << ".  It should be size 50." << endl;

  return passed;

}

bool Test::testRemoveBackReturnsTrueWithNonEmptyList()
{

  bool passed;
  LinkedListOfInts list;

  list.addFront(1); // Using addFront since testing determined addBack doesn't work but appears to be the same as addFront.

  passed = list.removeBack();

  cout << "removeBack() returns true when removing an item with a non-empty list: ";

  printTrueOrFalse(passed);

  return passed;

}
