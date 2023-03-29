#pragma once
#include<iostream>
using namespace std;
template <class T> class clsDblLinkedList
{
private:

public:
    class Node {
    public:
        T Value;
        Node* Next;
        Node* Previous;
    };

    Node* Head = NULL;

    void InsertAtBegining(T Value) {
        Node* NewNode = new Node();

        NewNode->Value = Value;
        NewNode->Previous = NULL;
        NewNode->Next = Head;

        if (Head != NULL) {
            Head->Previous = NewNode;
        }

        Head = NewNode;
    }

    void PrintNodeDetails(Node* Head)
    {

        if (Head->Previous != NULL)
            cout << Head->Previous->Value;
        else
            cout << "NULL";

        cout << " <--> " << Head->Value << " <--> ";

        if (Head->Next != NULL)
            cout << Head->Next->Value << "\n";
        else
            cout << "NULL";

    }

    void PrintListDetails()

    {
        cout << "\n\n";
        while (Head != NULL) {
            PrintNodeDetails(Head);
            Head = Head->Next;
        }
    }

    void PrintList(){

        Node* CurrentNode = Head;
        cout << "NULL <--> ";
        while (CurrentNode != NULL) {
            cout << CurrentNode->Value << " <--> ";
            CurrentNode = CurrentNode->Next;
        }
        cout << "NULL";

    }

    Node* Find(T Value)
    {
        Node* Current = Head;
        while (Current != NULL) {

            if (Current->Value == Value)
                return Current;

            Current = Current->Next;
        }

        return NULL;

    }

    void InsertAfter(Node* CurrentNode, T Value) {
        Node* NewNode = new Node();

        NewNode->Value = Value;
        NewNode->Previous = CurrentNode;
        NewNode->Next = CurrentNode->Next;

        if (CurrentNode->Next != NULL) {
            CurrentNode->Next->Previous = NewNode;
        }
        CurrentNode->Next = NewNode;
    }

    void InsertAtEnd(T Value) {
        Node* NewNode = new Node();

        NewNode->Next = NULL;
        NewNode->Value = Value;

        if (Head == NULL) {
            NewNode->Previous = NULL;
            Head = NewNode;
        }
        else {
            Node* Current = Head;

            while (Current->Next != NULL) {
                Current = Current->Next;
            }

            NewNode->Previous = Current;
            Current->Next = NewNode;
        }

    }

    void DeleteNode(Node*& CurrentNode) {

        if (Head == NULL || CurrentNode == NULL) return;

        if (Head == CurrentNode) Head = CurrentNode->Next;

        if (CurrentNode->Next != NULL) CurrentNode->Next->Previous = CurrentNode->Previous;

        if (CurrentNode->Previous != NULL) CurrentNode->Previous->Next = CurrentNode->Next;

        delete CurrentNode;
    }

    void DeleteFirstNode() {
        Head->Next->Previous = NULL;
        Head = Head->Next;
    }

    void DeleteLastNode() {
        if (Head == NULL) return;

        if (Head->Next == NULL) {
            delete Head;
            return;
        }

        Node* Current = Head;
        while (Current->Next != NULL) {
            Current = Current->Next;
        }
        Current->Previous->Next = NULL;
        delete Current;
    }


};

