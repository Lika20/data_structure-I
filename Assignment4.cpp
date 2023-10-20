/**
 * @file Assignment4.cpp
 * @author Ramata Melika BALO
 * @brief See Assignment3(Hurricane List 1) for more details, data used(2015 -wikipedia)
 * @version 0.1
 * @date 2022-09-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//Struct members are public by default

#include <iostream>
using namespace std;

struct Storm {     
    string name;
    int maxWind;
   string monthFormed;
    int category;
    Storm(){}


    Storm(string n,int w, string m, int c) {
        name = n;
        maxWind = w;
        monthFormed = m;
        category = c;
    }
};

   struct Node{
    struct Storm s;
    Node * next;
 };


struct HurricaneList{  ///Hurricane with a  void push_back, void insert, and void print functions.
    struct Node*head ;           // head pointer
    struct Node* tail;     


    HurricaneList() {   // construtor.Setting the head and the tail to NULL
      head = NULL;
      tail = NULL;
    }

    void push_back (Storm h) {
        struct Node * newNode = new struct Node; //New node
         
         newNode->s = h;
         newNode->next = NULL;

         if(head == NULL) {        // Empty list
          head = newNode;
          tail = newNode;
      }

      else {

        tail-> next = newNode;   // This will set the current tail node to point to the new node as being next.
        tail = tail->next;    // set the list's tail pointer to point to the new node.
      }
      }

      void insert(Storm h, int index) {  // Insert a new node
       struct Node * temp = head;
       int counter= 0;

       while( counter< index-1 && temp != NULL) {
      temp = temp->next;   
       counter++;             
      
       }
        struct Node * newNode = new struct Node;
        newNode->s = h;
        newNode->next = temp->next;
        temp->next = newNode;

      }

      void print () {

        struct Node* temp = head;
        while (temp != NULL) {
            if(temp->s.category ==0)
            cout <<"Tropical Storm";

        else cout<< "Hurricane ";
             cout<<temp->s.name<<" - Wind Speed: "
              <<temp->s.maxWind<<" MPH" "\n" "Month Formed:" 
                 <<temp->s.monthFormed<<"\nCategory "
                 <<temp->s.category<<'\n';

                temp = temp->next;
        }
      }
      };

      int main() {  // Driver class/Main

        HurricaneList list;    // Data found on wikipedia
        
        Storm h0 (" Alex", 85, " January", 1 ); 
        Storm h1 (" Bonnie", 45, " May", 0 );
        Storm h2 (" Colin", 50, " June", 0);
    
        Storm h3 (" Danielle", 45, " June", 0 ); 
        Storm h4 (" Earl", 85, " August", 1 );
        Storm h5 (" Fiona", 50, " August", 0);

        Storm h6 (" Gaston", 120, " August", 3 ); 
        Storm h7 (" Hermine", 80, " August", 1);
        Storm h8 (" Ian", 60, " September", 0 ); 

        Storm h9 (" Julia", 50, " September", 0 );
        Storm h10 (" Karl", 70, " September", 0);
        Storm h11 (" Lisa", 50, " September", 0 );

        Storm h12 (" Matthew", 165, " September", 5 );
        Storm h13 (" Nicole", 140, " October", 4);
        Storm h14 (" Otto", 115, " November", 3);



       list.push_back(h0);
       list.push_back(h1);
       list.push_back(h2);

       list.push_back(h3);
       list.push_back(h4);
       list.push_back(h5);

       list.push_back(h6);
       list.push_back(h7);
       list.push_back(h8);

       list.push_back(h9);
       list.push_back(h10);
       list.push_back(h11);

       list.push_back(h12);
       list.push_back(h13);
       

       list.insert(h14, 0);
       list.print();
       return 0;
      }