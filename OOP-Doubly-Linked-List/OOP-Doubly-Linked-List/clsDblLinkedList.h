#pragma once
#include<iostream>
using namespace std;
template <class T> class clsDblLinkedList
{
private:
    short _Size = 0;
public:
    class Node {
    public:
        T Value;
        Node* Next;
        Node* Previous;
    };

    Node* Head = NULL;

    void InsertAtBeginning(T Value) {
        Node* NewNode = new Node();

        NewNode->Value = Value;
        NewNode->Previous = NULL;
        NewNode->Next = Head;

        if (Head != NULL) {
            Head->Previous = NewNode;
        }

        Head = NewNode;
        _Size++;
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
        _Size++;
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
        _Size++;
    }

    void DeleteNode(Node*& CurrentNode) {

        if (Head == NULL || CurrentNode == NULL) return;

        if (Head == CurrentNode) Head = CurrentNode->Next;

        if (CurrentNode->Next != NULL) CurrentNode->Next->Previous = CurrentNode->Previous;

        if (CurrentNode->Previous != NULL) CurrentNode->Previous->Next = CurrentNode->Next;

        delete CurrentNode;
        _Size--;
    }

    void DeleteFirstNode() {
        Head->Next->Previous = NULL;
        Head = Head->Next;
        _Size--;
    }

    void DeleteLastNode() {
        if (Head == NULL) return;

        if (Head->Next == NULL) {
            _Size--;
            delete Head;
            return;
        }

        Node* Current = Head;
        while (Current->Next != NULL) {
            Current = Current->Next;
        }
        Current->Previous->Next = NULL;
        delete Current;
        _Size--;
    }

    short Size() {
        return _Size;
    }

    bool IsEmpty() {
        return _Size == 0;
    }

    void Clear() {
        while (_Size > 0) DeleteLastNode();
    }

    void Reverse() {
        Node* CurrentNode = Head;
        Node* TempNode = nullptr;

        while (CurrentNode != nullptr) {
            TempNode = CurrentNode->Previous;
            
            CurrentNode->Previous = CurrentNode->Next;
            CurrentNode->Next = TempNode;

            CurrentNode = CurrentNode->Previous;
        }

        if (TempNode != nullptr) {
            Head = TempNode->Previous;
        }


    }
};

