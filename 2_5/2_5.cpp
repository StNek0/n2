#include "functions.h"
// Main program
int main() {
    int count;

    // Input list for type int
    cout << "Enter the number of elements for list L1 (int): ";
    cin >> count;

    Node<int>* L1_int = nullptr;
    Node<int>* rear1_int = nullptr;

    inputList(L1_int, rear1_int, count);

    cout << "Enter the number of elements for list L2 (int): ";
    cin >> count;

    Node<int>* L2_int = nullptr;
    Node<int>* rear2_int = nullptr;

    inputList(L2_int, rear2_int, count);

    Node<int>* L_int = nullptr;

    formList(L1_int, L2_int, L_int);

    cout << "Elements in L (int) that are in L1 but not in L2: ";
    printList(L_int);

    // Free memory for int lists
    freeList(L1_int);
    freeList(L2_int);
    freeList(L_int);


    // Input list for type char
    cout << "Enter the number of elements for list L1 (char): ";
    cin >> count;

    Node<char>* L1_char = nullptr;
    Node<char>* rear1_char = nullptr;

    inputList(L1_char, rear1_char, count);

    cout << "Enter the number of elements for list L2 (char): ";
    cin >> count;

    Node<char>* L2_char = nullptr;
    Node<char>* rear2_char = nullptr;

    inputList(L2_char, rear2_char, count);

    Node<char>* L_char = nullptr;

    formList(L1_char, L2_char, L_char);

    cout << "Elements in L (char) that are in L1 but not in L2: ";
    printList(L_char);

    // Free memory for char lists
    freeList(L1_char);
    freeList(L2_char);
    freeList(L_char);


    // Input list for type float
    cout << "Enter the number of elements for list L1 (float): ";
    cin >> count;

    Node<float>* L1_float = nullptr;
    Node<float>* rear1_float = nullptr;

    inputList(L1_float, rear1_float, count);

    cout << "Enter the number of elements for list L2 (float): ";
    cin >> count;

    Node<float>* L2_float = nullptr;
    Node<float>* rear2_float = nullptr;

    inputList(L2_float, rear2_float, count);

    Node<float>* L_float = nullptr;

    formList(L1_float, L2_float, L_float);

    cout << "Elements in L (float) that are in L1 but not in L2: ";
    printList(L_float);

    // Free memory for float lists
    freeList(L1_float);
    freeList(L2_float);
    freeList(L_float);


    // Input list for type double
    cout << "Enter the number of elements for list L1 (double): ";
    cin >> count;

    Node<double>* L1_double = nullptr;
    Node<double>* rear1_double = nullptr;

    inputList(L1_double, rear1_double, count);

    cout << "Enter the number of elements for list L2 (double): ";
    cin >> count;

    Node<double>* L2_double = nullptr;
    Node<double>* rear2_double = nullptr;

    inputList(L2_double, rear2_double, count);

    Node<double>* L_double = nullptr;

    formList(L1_double, L2_double, L_double);

    cout << "Elements in L (double) that are in L1 but not in L2: ";
    printList(L_double);

    // Free memory for double lists
    freeList(L1_double);
    freeList(L2_double);
    freeList(L_double);


    return 0;
}