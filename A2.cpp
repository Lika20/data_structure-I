/**
 * @file A2.cpp
 * @author Ramata Melika BALO
 * @brief : refer Assignment 2 for details
 * @version 0.1
 * Due Date 09/20/22
 */


#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

class Card
{
    private :
    // I decided to call the values 2 through 10, J, Q, K, and A: Front and Deck for the suits values
     string Front;
     string Deck;
    int pivot;
    public:
    Card(): Front(""), Deck(""){}
    Card( string f, string d)  : Front (f), Deck(d) {pivot= 0;}
    string getFront();
    string getDeck();
    void setpivot(int p);
    int getpivot();
    void print();
    };


     string Card::getFront() //the following line will help yo return the value
     { return Front; }

     string Card::getDeck() 
     { return Deck; }

void Card::setpivot(int p)
{
       pivot = p;
}
   int Card::getpivot()
   {return pivot;
   
}
void Card:: print()
{
    cout<<Front<<" - " << Deck<<endl;

}

//Shuffle cards
void shuffle(Card cards[],int l)
{
    srandom(time(NULL));
    
    for(int i=l-1;i>0;i--)
    {
int j = random() % (i+1);
// we use swap for the quicksort
swap(cards[i], cards[j]);
    }
}
void printCards(Card cards[], int l)
{
    for (int i=0; i<l; i++)
    {
        cards[i].print();
    }
    cout<<endl;
}

void SortCardsByFront(Card cards[], int l) // sorting card by value. I use a do, while, and if statements
{
    int j=1;
    bool unsorted;
    do{
        unsorted = false;
        int i=0;
        while(i<l-j)
        {

            if (cards[i].getpivot()>cards[i+1].getpivot())
            {
          swap(cards[i], cards[i+1]);
          unsorted = true;
            }
            i++;
        }
        j++;
    } while(unsorted);

}

void SortCardsByDeckAndFront(Card cards[], int l)// sorting card by Suit and values
{
    int i = 1;
    while ( i<l)
{
    Card temp = cards[i];
    int j;
    for(j= i-1; j>=0; j--)
    {
 if (cards[j].getDeck()>temp.getDeck() || (cards[j].getDeck()==temp.getDeck()  && cards[j].getpivot()>temp.getpivot()))
    cards[j+1] = cards[j];
 else
 break;
    }
    cards[j+1] = temp; // temp for switching between the arrays
    i++;
    }
    }
    int main()
    {
        string Front[13] = {
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
            "8",
            "9",
            "10",
            "J",
            "Q",
            "K",
            "A"
        } ;
        string Deck[4] = {"H", "D", "C", "S"};
     const int GameCards = 52;
      Card cards[GameCards];
      for (int i = 0; i <4; i++)
      {
        for (int j= 0; j<13; j++)
        {
            cards[13*i+j] = Card(Front[j], Deck[i]);
            cards[13*i+j].setpivot(j);
        }
      }

      shuffle(cards, GameCards);  
      cout<<" Unsorted array of Cards:"<<endl;// print unsorted arry of card objects
      printCards(cards, GameCards);


      SortCardsByFront(cards, GameCards); // In this block of code lines, the program will return the "value" that are in the function SortCardsbyFront and print them out
     cout<<" Sorted by value:"<<endl;
      printCards(cards, GameCards);

      SortCardsByDeckAndFront(cards, GameCards); // In this block of code lines, the program will return the "values and suits" that are in the function SortCardsByDeckAndFront and print them out
      cout<<" Sorted by suit and value:"<<endl;
       printCards(cards, GameCards);
       return 0;
        }

      

  


