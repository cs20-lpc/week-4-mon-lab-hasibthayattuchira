#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main(){
    // integer test
    LinkedList<int> intList;

    cout << "TESTING WITH INTEGERS" << endl;
    cout << "Initial List - intList: " << intList << endl;
    intList.append(1);
    intList.append(2);
    intList.append(3);
    cout << "New List (appended 1, 2, 3) - intList: " << intList << endl;
    cout << "Size after append: " << intList.getLength() << endl;

    cout << "Index 1: " << intList.getElement(0) << endl;
    intList.replace(0, 10);
    cout << "Replaced index 1 with 10: " << intList << endl;

    cout << "Clearing intList" << endl;
    intList.clear();
    cout << "Cleared: " << intList << endl;

    // double test
    LinkedList<double> doubleList;

    cout << "TESTING WITH DOUBLES" << endl;
    doubleList.append(1.1);
    doubleList.append(2.2);
    doubleList.append(3.3);
    doubleList.append(4.4);
    cout << "New List (appended 1.1, 2.2, 3.3, 4.4) - doubleList: " << doubleList << endl;
    cout << "Size after append: " << doubleList.getLength() << endl;

    cout << "Index 2: " << doubleList.getElement(1) << endl;
    doubleList.replace(1, 10.1);
    cout << "Replaced index 2 with 10.1: " << doubleList << endl;

    cout << "Clearing doubleList" << endl;
    doubleList.clear();
    cout << "Cleared: " << doubleList << endl;

    // string test
    LinkedList<string> strList;

    cout << "TESTING WITH STRINGS" << endl;
    strList.append("Pizza");
    strList.append("Burger");
    strList.append("Taco");
    strList.append("Burrito");
    strList.append("Noodles");
    cout << "New List (appended Pizza, Burger, Taco, Burrito, Noodles): " << strList << endl;
    cout << "Size after append: " << strList.getLength() << endl;

    cout << "Index 3: " << strList.getElement(2) << endl;
    strList.replace(2, "Cake");
    cout << "Replaced index 1 with Cake: " << strList << endl;

    cout << "Clearing strList" << endl;
    strList.clear();
    cout << "Cleared: " << strList << endl;

    // char test
    LinkedList<char> charList;
    
    cout << "TESTING WITH CHARACTERS" << endl;
    charList.append('A');
    charList.append('B');
    charList.append('C');
    charList.append('D');
    charList.append('E');
    charList.append('F');
    cout << "New List (appended A, B, C, D, E, F): " << charList << endl;
    cout << "Size after append: " << charList.getLength() << endl;

    cout << "Index 4: " << charList.getElement(3) << endl;
    charList.replace(3, 'Z');
    cout << "Replaced index 4 with Z: " << charList << endl;

    cout << "Clearing charList" << endl;
    charList.clear();
    cout << "Cleared: " << charList << endl;

    // terminate
    return 0;
}