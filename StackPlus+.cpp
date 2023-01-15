// StackPlus+.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

int STACK[12], top;

void push(int[], int);

void pop(int[], int);
void display(int[]);



int main()
{
    cout << "Stack Menu" << endl;
    cout << "1 = display" << endl;
    cout << "2 = push" << endl;
    cout << "3 = pop" << endl;
    cout << "4 = exit" << endl;
}

void push(int stack[], int item)
{
    top++;
    stack[top] = item;
}

void pop(int stack[]) {
    int deletedItem;
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else {
        deletedItem = stack[top];
        top--;
        cout << "Deleted  " << deletedItem;
    }
}

void display(int stack[])
{
    for (i = top - 1; i >= 0; i--) 
    {
        cout << stack[i];
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
