#pragma once

#include <iostream>
#include <cstring>

using namespace std;

// Template node structure
template <typename T>
struct Node {
    T data;
    Node* next;
};

// Template function to add an element to the end of the list
template <typename T>
void push(Node<T>*& front, Node<T>*& end, T data) {
    Node<T>* newNode = new Node<T>;
    newNode->data = data;
    newNode->next = nullptr;
    if (end != nullptr) {
        end->next = newNode;
    }
    end = newNode;
    if (front == nullptr) {
        front = newNode;
    }
}

// Template function to remove an element from the front of the list
template <typename T>
T pop(Node<T>*& front) {
    if (front == nullptr) {
        throw runtime_error("Queue is empty");
    }
    Node<T>* temp = front;
    T data = front->data;
    front = front->next;
    delete temp;
    return data;
}

// Template function to check if the list is empty
template <typename T>
bool isEmpty(Node<T>* front) {
    return front == nullptr;
}

// Template function to form a new list L
template <typename T>
void formList(Node<T>* L1, Node<T>* L2, Node<T>*& L) {
    Node<T>* current1 = L1;

    while (current1 != nullptr) {
        bool found = false;
        Node<T>* current2 = L2;

        // Check if the element is in L2
        while (current2 != nullptr) {
            if (current1->data == current2->data) {
                found = true;
                break;
            }
            current2 = current2->next;
        }

        // If not found, add to the new list
        if (!found) {
            push(L, L, current1->data);
        }
        current1 = current1->next;
    }
}

// Template function to print the list
template <typename T>
void printList(Node<T>* front) {
    Node<T>* current = front;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Template function to free memory
template <typename T>
void freeList(Node<T>*& front) {
    while (front != nullptr) {
        Node<T>* temp = front;
        front = front->next;
        delete temp;
    }
}

// Function to input elements into the list
template <typename T>
void inputList(Node<T>*& front, Node<T>*& rear, int count) {
    for (int i = 0; i < count; ++i) {
        T value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        push(front, rear, value);
    }
}