/*
   Owen Kelley
   csc1710-03
   Dr Wei
   Program 3 - ROCK PAPER SCISSOR - LIZARD SPOCK
*/
   #include<string>
   #include<iostream>
   #include<iomanip>
   #include<ctime>
   using namespace std;

   int brandNum();
   int randNum();
   int winScore(int playerMove, int num, int win);
   int lossScore(int playerMove, int num, int loss);
   void winner(int playerMove, int num);
   void translation(int x);
   void rockArt();
   void scissorArt();
   void paperArt();
   void spockArt();
   void lizardArt();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
   int main()
   {
    int win = 0;
    int loss = 0;
    int playerMove;
    int gameType;
 
    cout << "==========================================" << endl
         << "  What would you like to play?" << endl
         << "  1.) Rock, Paper, Scissors" << endl
         << "  2.) Rock, Paper, Scissors, Spock, Lizard" << endl
         << "==========================================" << endl;
    cin >> gameType;
  // INPUT CHECKER
    while(gameType != 1 && gameType != 2)
    {
     cout << "====================================================================" << endl;
     cout << "  Error. Please enter the number of the game you would like to play" << endl;
     cout << "  1.) Rock, Paper, Scissors" << endl
          << "  2.) Rock, Paper, Scissors, Spock, Lizard" << endl
          << "====================================================================" << endl;
     cin >> gameType;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////
   if(gameType == 1)
   {
    cout << "================================" << endl
         << "  Rules of The Game: " << endl
         << "  1.) Rock will beat Scissors" << endl
         << "  2.) Paper will beat Rock" << endl
         << "  3.) Scissors will beat Paper" << endl
         << "================================" << endl;

// LOOP 5 TIMES FOR BEST 3 OF 5
   for(int c = 1 ; c <=5 ; c++)
   {
    if(win < 3 && loss < 3)
    {
     cout << "=======================" << endl
          << "  Pick a move to play: " << endl
          << "  1.) Rock" << endl
          << "  2.) Paper" << endl
          << "  3.) Scissor" << endl
          << "=======================" << endl;

     cin >> playerMove;
     if(playerMove != 1 && playerMove != 2 && playerMove != 3)
     {
      cout << "Invalid input, please input a number 1-3 to pick a move." << endl;
      cin >> playerMove;
     }
  // COMPUTER CAN ONLY PICK 0 - 4 SO PLAYER MOVE IS DECREASED BY 1
     playerMove = playerMove - 1;

     cout << "You picked: "; translation(playerMove); cout << endl;
     cout << "Computer picks: "; translation(brandNum()); cout << endl;

  // IF THERE IS A TIE
     while(playerMove == brandNum())
     {
      cout << "It is a tie, please pick a new number" << endl;
      cin >> playerMove;
      playerMove = playerMove - 1;
      cout << "You picked: "; translation(playerMove); cout << endl;
      cout << "Computer picks: "; translation(brandNum()); cout << endl;
     }

  // DISPLAY WIN / LOSS
     winner(playerMove, brandNum());
  // DISPLAY SCORE
     win = winScore(playerMove, brandNum(), win);
     cout << "Your score = " << win <<" / 5"<<endl;
     loss = lossScore(playerMove, brandNum(), loss);
     cout << "Computer score = " << loss <<" / 5"<< endl;
    }
   }
  // DISPLAY FINAL WINNER
    if(win == 3)
    {
     cout << "You won" << endl;
    }
    if(loss == 3)
    {
     cout << "You lost" << endl;
    }
   }
///////////////////////////////////////////////////////////////////////////////////////////////////////
   if(gameType == 2)
   {
    cout << endl
         << "==========================================" << endl
         << "  Rules of The Game: " << endl 
         << "  1.) Rock will beat Lizard and Scissors" << endl
         << "  2.) Paper will beat Rock and Spock" << endl
         << "  3.) Scissors will beat Paper and Lizard" << endl
         << "  4.) Spock will beat Scissors and Rock" << endl
         << "  5.) Lizard will beat Spock and Paper" << endl 
         << "==========================================" << endl << endl;  
  
  // LOOP 5 TIMES FOR BEST 3 OF 5
   for(int c = 1 ; c <=5 ; c++)
   {
    if(win < 3 && loss < 3)
    {
     cout << "=======================" << endl
          << "  Pick a move to play: " << endl
          << "  1.) Rock" << endl 
          << "  2.) Paper" << endl
          << "  3.) Scissor" << endl
          << "  4.) Spock" << endl
          << "  5.) Lizard" << endl
          << "=======================" << endl;

     cin >> playerMove;
  //USER INPUT CHECKER
     if(playerMove != 1 && playerMove != 2 && playerMove != 3 && playerMove != 4 && playerMove != 5)
     {
      cout << "Invalid input, please input a number 1-5 to pick a move." << endl;
      cin >> playerMove;
     }
  // COMPUTER CAN ONLY PICK 0 - 4 SO PLAYER MOVE IS DECREASED BY 1    
     playerMove = playerMove - 1;

     cout << "You picked: "; translation(playerMove); cout << endl;
     cout << "Computer picks: "; translation(randNum()); cout << endl;
  //IF THERE IS A TIE
     while(playerMove == randNum())
     {
      cout << "It is a tie, please pick a new number" << endl;
      cin >> playerMove;
      playerMove = playerMove - 1;
      cout <<endl<< "You picked: "; translation(playerMove); cout <<endl;
      cout << "Computer picks: "; translation(randNum()); cout << endl;
     }  

  // DISPLAY WIN / LOSS
     winner(playerMove, randNum());
  // DISPLAY SCORE
     win = winScore(playerMove, randNum(), win);
     cout << "Your score = " << win <<" / 5"<<endl;
     loss = lossScore(playerMove, randNum(), loss);
     cout << "Computer score = " << loss <<" / 5"<< endl << endl;
    }
   }
  // DISPLAY FINAL WINNER
    if(win == 3)
    {
     cout << "You won" << endl;
    }
    if(loss == 3)
    {
     cout << "You lost" << endl;
    }
   }

    return 0;
   }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
   int randNum()
   {
    int num;
    srand(time(0));
    num = rand() % 5;  // 0 - 4

    return num;
   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
   int brandNum() // BASIC GAME RANDNUM GENERATOR
   {
    int num;
    srand(time(0));
    num = rand() % 3; // 0 - 2

    return num;
   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
   void basicWinner(int playerMove, int num)
   {
    if(playerMove == 0)
    {
     if(num == 2)
     {
      rockArt(); cout<<"     You Win!  "; scissorArt();
     }
     else if(num == 1)
     {
      rockArt(); cout<<"     You Lost  "; paperArt();
     }
    }
// PLAYER PLAYS PAPER
    if(playerMove == 1)
    {
     if(num == 0)
     {
      paperArt(); cout <<"     You Win!  "; rockArt();
     }
     else if(num == 2)
     {
      paperArt(); cout <<"     You lost  "; scissorArt();
     }
    }
// PLAYER PLAYS SCISSOR
    if(playerMove == 2)
    {
     if(num == 1)
     {
      scissorArt(); cout <<"     You Win!  "; paperArt();
     }
     else if(num == 0)
     {
      scissorArt(); cout <<"     You lost  "; rockArt();
     }
    }
   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////

   void winner(int playerMove, int num)
   {
// PLAYER PLAYS ROCK 0 
    if(playerMove == 0)
    {
     if(num == 4)
     {
      rockArt(); cout<<"     You Win!  "; lizardArt();
     }
     else if(num == 2)
     {
      rockArt(); cout<<"     You Win!  "; scissorArt();
     }
     else if(num == 3)
     {
      rockArt(); cout<<"     You Lost  "; spockArt();
     }
     else if(num == 1)
     {
      rockArt(); cout<<"     You Lost  "; paperArt();
     }
    }
// PLAYER PLAYS PAPER
    if(playerMove == 1)
    {
     if(num == 0)
     {
      paperArt(); cout <<"     You Win!  "; rockArt();
     }
     else if(num == 3)
     {
      paperArt(); cout <<"     You Win!  "; spockArt();
     }
     else if(num == 2)
     {
      paperArt(); cout <<"     You lost  "; scissorArt();
     }
     else if(num == 4)
     {
      paperArt(); cout <<"     You lost  "; lizardArt();
     }
    }
// PLAYER PLAYS SCISSOR
    if(playerMove == 2)
    {
     if(num == 1)
     {
      scissorArt(); cout <<"     You Win!  "; paperArt();
     }
     else if(num == 4)
     {
      scissorArt(); cout <<"     You Win!  "; lizardArt();
     }
     else if(num == 3)
     {
      scissorArt(); cout <<"     You lost  "; spockArt();
     }
     else if(num == 0)
     {
      scissorArt(); cout <<"     You lost  "; rockArt();
     }
    }
// PLAYER PLAYS SPOCK
    if(playerMove == 3)
    {
     if(num == 2)
     {
      spockArt(); cout <<"     You Win!  "; scissorArt();
     }
     else if(num == 0)
     {
      spockArt(); cout <<"     You Win!  "; rockArt();
     }
     else if(num == 1)
     {
      spockArt(); cout <<"     You lost  "; paperArt();
     }
     else if(num == 4)
     {
      spockArt(); cout <<"     You lost  "; lizardArt();
     }
    }
// PLAYER PLAYS LIZARD
    if(playerMove == 4)
    {
     if(num == 3)
     {
      lizardArt(); cout <<"     You Win!  "; spockArt();
     }
     else if(num == 1)
     {
      lizardArt(); cout <<"     You Win!  "; paperArt();
     }
     else if(num == 0)
     {
      lizardArt(); cout <<"     You lost  "; rockArt();
     }
     else if(num == 2)
     {
      lizardArt(); cout <<"     You lost  "; scissorArt();
     }
    }
   }
/*
   "0.) Rock"
   "1.) Paper"
   "2.) Scissor"
   "3.) Spock"
   "4.) Lizard"
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////
   int winScore(int playerMove, int num, int win)
   {
    if(playerMove == 0)
    {
     if(num == 4 || num == 2)
     {
      win = win + 1;
     }
    }
    else if(playerMove == 1)
    {
     if(num == 0 || num == 3)
     {
      win = win + 1;
     }
    }
    else if(playerMove == 2)
    {
     if(num == 1 || num == 4)
     {
      win = win + 1;
     } 
    }
    else if(playerMove == 3)
    {
     if(num == 2 || num == 0)
     {
      win = win + 1;
     }
    }
    else if(playerMove == 4)
    {
     if(num == 1 || num == 3)
     {
      win = win + 1;
     }
    }
   return win;
   }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
   int lossScore(int playerMove, int num, int loss)
   {
    if(playerMove == 0)
    {
     if(num == 1 || num == 3)
     {
      loss = loss + 1;
     }
    }
    else if(playerMove == 1)
    {
     if(num == 2 || num == 4)
     {
      loss = loss + 1;
     }
    }
    else if(playerMove == 2)
    {
     if(num == 0 || num == 3)
     {
      loss = loss + 1;
     }
    }
    else if(playerMove == 3)
    {
     if(num == 1 || num == 4)
     {
      loss = loss + 1;
     }
    }
    else if(playerMove == 4)
    {
     if(num == 0 || num == 2)
     {
      loss = loss + 1;
     }
    }
   return loss; 
   }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
   void translation(int x)
   {
    if(x == 0)
    cout << "rock" << endl;
    else if(x == 1)
    cout << "paper" << endl;
    else if(x == 2)
    cout << "scissors" << endl;
    else if(x == 3)
    cout << "spock" << endl;
    else if(x == 4)
    cout << "lizard" << endl;
   }
//////////////////////////////////////////////////////////////////////////////////////////////////////////
   void rockArt()
   {
    cout << endl <<
"      ____" << endl <<
"  ___/     \\__" << endl <<
" /            \\_" << endl <<
"/     Rock      \\" << endl <<
"|               |" << endl <<
"\\_______________/" << endl << endl;

   }  
////////////////////////////////////
   void paperArt()
   {
    cout << endl <<
" _______________" << endl <<
"|               |" << endl <<
"|               |" << endl <<
"|     Paper     |" << endl <<
"|               |" << endl <<
"|               |" << endl <<
"|_______________|" << endl << endl;
    }
////////////////////////////////////
    void scissorArt()
    {
     cout << endl <<
"            __" << endl <<
" Scissors  / /" << endl <<
"          / /" << endl <<
"_____    / /" << endl <<
"  __ \\  / /" << endl <<
" \\__\\ \\/ /________" << endl <<
"\\___/\\___________/" << endl <<
" / __  /" << endl <<
"/ /_/ /" << endl <<
"_____/" << endl << endl;
    }
////////////////////////////////////
    void spockArt()
    {
     cout << endl <<
" _ _  Spock _ _" << endl <<
"\\ \\ \\      / / /" << endl <<
" \\ \\ \\    /_/_/" << endl <<
"  \\ \\ \\  / / /" << endl <<
"   \\_\\_\\/_/_/" << endl <<
"   |___/    |  __" << endl <<
"   |      __| / /" << endl << 
"   |     /  |/ /" << endl <<
"   \\__________/" << endl << endl;
    }
///////////////////////////////////
    void lizardArt()
    {
     cout << endl <<
"      ____" << endl <<
"   __/    \\__" << endl <<
" _/    /\\    \\_" << endl <<
"/     |  |     \\" << endl <<
"\\_    |  |    _/" << endl <<
"  \\__  \\/  __/" << endl <<
"     \\____/" << endl <<
"     Lizard     " << endl << endl;
    }

