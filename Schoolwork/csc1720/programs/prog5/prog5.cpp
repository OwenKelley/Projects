/*
   Owen Kelley
   csc1720
   4/28/2022

   This program is a card guessing game where a user can choose to guess the face or suit of a card

   g++ prog5.cpp
*/

 #include <iostream>
 #include <string>
 #include <vector>
 #include <algorithm>

 using namespace std;


 struct Card
 {
  string face;
  string suit;
 };

 void buildDeck(vector<Card> &cards);
 void inputFix(string &guess);

 int main()
 {
    vector<Card> cards(52);
    string selection;
    string guess;

////////////////////////////////////////////////////////////
    buildDeck(cards);

    cout<<"==Guess=="<<endl
        <<"1.) Suit"<<endl
        <<"2.) Face"<<endl;
    cin>>selection;

// had issues with infinite loop using int if you typed in anything other than an int
    while(selection != "1" && selection != "2")
    {
     cout<<"Invalid input, enter 1 or 2"<<endl;
     cout<<"==Guess=="<<endl
         <<"1.) Suit"<<endl
         <<"2.) Face"<<endl;
     cin>>selection;
    }

    if(selection == "1")
    {
     cout<<"Guess the Suit: "<<endl;
     cin>>guess;

     inputFix(guess);

     if(guess == cards[0].suit)
     {
      cout<<"You guessed correctly"<<endl;
     }
     else
     {
      cout<<"You guessed wrong"<<endl;
     }
    }
/////////////////////////////////////////////////
    else if(selection == "2")
    {
     cout<<"Guess the Face: "<<endl;
     cin>>guess;

     inputFix(guess);

     if(guess == cards[0].face)
     {
      cout<<"You guessed correctly"<<endl;
     }
     else
     {
      cout<<"You guessed wrong"<<endl;
     } 
    }

// each suit has 13 cards
// total of 52
   return 0;
 }

//////////////////////////////////////////////////////////////////////////
   void buildDeck(vector<Card> &cards)
   {
    int x = -1;
// SUIT LOOP
    for(int i=0 ; i<4 ; i++)
    {
// FACE LOOP
     for(int j=0 ; j<13 ; j++)
     {
      x = x+1;

  // // // SPADES
      if(i == 0)
      {
       cards[x].suit = "Spades";
      }
      else if(i == 1)
      {
       cards[x].suit = "Clubs";
      }
      else if(i == 2)
      {
       cards[x].suit = "Hearts";
      }
      else if(i == 3)
      {
       cards[x].suit = "Diamonds";
      }

   // // // FACE
      if(j == 0)
      {
       cards[x].face = "2";
      }
      else if(j == 1)
      {
       cards[x].face = "3";
      }
      else if(j == 2)
      {
       cards[x].face = "4";
      }
      else if(j == 3)
      {
       cards[x].face = "5";
      }
      else if(j == 4)
      {
       cards[x].face = "6";
      }
      else if(j == 5)
      {
       cards[x].face = "7";
      }
      else if(j == 6)
      {
       cards[x].face = "8";
      }
      else if(j == 7)
      {
       cards[x].face = "9";
      }
      else if(j == 8)
      {
       cards[x].face = "10";
      }
      else if(j == 9)
      {
       cards[x].face = "Jack";
      }
      else if(j == 10)
      {
       cards[x].face = "Queen";
      }
      else if(j == 11)
      {
       cards[x].face = "King";
      }
      else if(j == 12)
      {
       cards[x].face = "Ace";
      }
     }
    }

    random_shuffle(cards.begin(), cards.end());
/*
    for(int i=0 ; i<52 ; i++)
    {
     cout<<cards[i].suit<<"  "<<cards[i].face<<endl;
    }
*/
   }
//////////////////////////////////////////////////////////////////////
    void inputFix(string &guess)
    {
     if(guess == "spades" || guess == "Spade" || guess == "spade")
     {
      guess = "Spades";
     }
     else if(guess == "clubs" || guess == "Club" || guess == "club")
     {
      guess = "Clubs";
     }
     else if(guess == "hearts" || guess == "Heart" || guess == "heart")
     {
      guess = "Hearts";
     }
     else if(guess == "diamonds" || guess == "Diamond" || guess == "diamond")
     {
      guess = "Diamonds";
     }
     else if(guess == "jack" || guess == "jacks" || guess == "Jacks")
     {
      guess = "Jack";
     } 
     else if(guess == "queen" || guess == "queens" || guess == "Queens")
     {
      guess = "Queen";
     }
     else if(guess == "king" || guess == "kings" || guess == "Kings")
     {
      guess = "King";
     }
    } 



