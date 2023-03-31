#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    /*if (MydblLinkedList.IsEmpty()) cout << "List is empty" << endl;
    else cout << "List is not empty" << endl;*/

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nList Content: " << endl;
    MydblLinkedList.PrintList();
    cout << endl;

   //Basic Operations
   /* clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();
    
    cout << "\nSize of the list is: " << MydblLinkedList.Size() << endl;*/

   //Clear List
    /*cout << "\nAfter Insertion" << endl;
   if (MydblLinkedList.IsEmpty()) cout << "\nList is empty" << endl;
   else cout << "\nList is not empty" << endl;

   cout << "\nLinked List Content:\n";
   MydblLinkedList.PrintList();

   cout << "\nClearing List" << endl;
   MydblLinkedList.Clear();

   if (MydblLinkedList.IsEmpty()) cout << "\nList is empty" << endl;
   else cout << "\nList is not empty" << endl;*/

   //Reverse List
   /* cout << "\nReverse List: " << endl;
    MydblLinkedList.Reverse();
    MydblLinkedList.PrintList();*/

  //GetNode
  /*  clsDblLinkedList <int>::Node* N1;

    N1 = MydblLinkedList.GetNode(0);

    cout << "\nNode Value is: "<< N1->Value << endl;*/

    //GetItem
   /* cout << "\nValue of node at index 2: " << MydblLinkedList.GetItem(2) << endl;
   */

    //Update Item
   /* cout << "\nUpdate Item at index 2" << endl;
    MydblLinkedList.UpdateItem(2, 12);
    MydblLinkedList.PrintList();
    cout << endl;*/

    //Insert After By Index
    cout << "Inserting 9 after node at index 3" << endl;
    MydblLinkedList.InsertAfter(3, 9);
    MydblLinkedList.PrintList();
    cout << endl;








    system("pause>0");

}