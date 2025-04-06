#include <iostream> // used for cin and cout
#include <cctype> // used for the seed function
#include <ctime> // used for the time function
#include <vector> // used for declareing a vector
#include <algorithm> // used for the find function

using namespace std;

class tic_tac_toe
{
  public: 
    bool game_shape(int postion = 0, char x = 'X') // this function is used for the strucure of the game and checking the rules
    {
      const int index = 9;
      static char arr[index] = {'1','2','3','4','5','6','7','8','9'};

      // used to replace the numbers with X or O
      if((postion >= 1 && postion <= 9) && (x == 'X' || x == 'O'))
      {
        arr[postion - 1] = x;
      }
      
    // bulding the shape of the game

      for(int i = 1; i <= 11; i++)
      {
        if(i == 4 || i == 8)
        {
          for(int j = 1 ; j<=19; j++)
          {
            cout << '-';
          }
        }

        for(int j = 1; j <=5; j++)
        {
          if( i == 2 && j == 3)
          {
            cout << arr[0];
          }
          else if( i == 6 && j == 3)
          {
            cout << arr[3];
          }
          else if( i == 10 && j == 3)
          {
            cout << arr[6];
          }
          else{
            cout << " ";
          }
        }

        if(i != 4 && i != 8)
        {
          cout << '|';
        }

        // setting the right postion for each number

        for(int j = 1; j <=5; j++)
        {
          if( i == 2 && j == 3)
          {
            cout << arr[1];
          }
          else if( i == 6 && j == 3)
          {
            cout << arr[4];
          }
          else if( i == 10 && j == 3)
          {
            cout << arr[7];
          }
          else{
            cout << " ";
          }
        }

        if( i!= 4 && i!= 8)
        {
          cout << '|';
        }

        for(int j = 1; j <=5; j++)
        {
          if( i == 2 && j == 3)
          {
            cout << arr[2];
          }
          else if( i == 6 && j == 3)
          {
            cout << arr[5];
          }
          else if( i == 10 && j == 3)
          {
            cout << arr[8];
          }
          else{
            cout << " ";
          }
        }
        cout << endl;
      }

    //                          game rules
    
    //                           x winnig

      if(arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X') //horizatel
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49); // returning the array as it was as the game end
        }
        return true;

      }else if(arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X') //horizatel
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X') //horizatel
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X') // diagnally
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;
      }else if(arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X') // diagnally
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X') // vertically
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X') // vertically
      {
        cout << "X player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;
      
      }else if(arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X') // vertically
      {
        cout << "congrats you won!\n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;
      //                        O winnig

      }else if(arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O') //horizatel
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O') //horizatel
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O') //horizatel
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O') // diagnally
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O') // diagnally
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O') // vertically
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O') // vertically
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;

      }else if(arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O') // vertically
      {
        cout << "O player won! \n";
        for(int i = 0; i < 9; i++)
        {
          arr[i] = char(i + 49);
        }
        return true;
      }

      // used to refreash the array in case of a draw
      int count = 0;
      for(int i = 0 ; i < 9 ; i++)
      {
        if(int(arr[i]) != (i + 49))
        {
          count++;
          if(count == 9)
          {
            for(int i = 0; i < 9; i++)
            {
              arr[i] = char(i + 49);
            }
            cout << "its a draw\n";
            return true;
          }
        }
      }
      return false;
    }

    // this function is used to apply the previous function and other things
    void playing(bool playing_with_ai = true, int num1 = 0, int num2 = 0)
    {
      int ai_num1 = 0 ;
      int ai_num2 = 0 ,player2_num = 0 ,palyer_num = 0;
      bool on_game = true;
      vector <int> vec = {9,8,7,6,5,4,3,2,1};
      srand(time(0)); // used to genrate a new sequence of numbers each time the code runs
      playing_with_ai ? cout << "you play as X\n" : cout << "X player begains\n";
      game_shape(); // calling the function without modificion to demonstrate the game

      while(on_game)
      {
        playing_with_ai ? cout << "your turn....\n" : cout << "X player turn\n";
        cout << "enter your postion: ";
        cin >> palyer_num; // player number 1 entering the postion

        // finding the index of the postion number
        auto iter_of_player = find(vec.begin(),vec.end(),palyer_num);
        int index_of_player = iter_of_player - vec.begin();

        // making sure that the number entered is a valid number
        while(iter_of_player == vec.end())
        {
          cout << "the number you've entered is out of reach please try again" << endl;
          cin >> palyer_num;
          // if so also making sure that is a valid number
          iter_of_player = find(vec.begin(),vec.end(),palyer_num);
          index_of_player = iter_of_player - vec.begin();
        }

        // in case of X winnig
        if(game_shape(palyer_num,'X') == true)
        {
          cout << "enter 1 if you wanna play again or 0 to termeniate" << endl;
          bool playing_again;
          cin >> playing_again;
          if(playing_again == true)
          {
            palyer_num = 0 ;
            if(playing_with_ai != true)
            {
              player2_num = 0;
              playing(false,palyer_num,player2_num);
              return;
            }else{
              ai_num2 = 0;
              playing(true,palyer_num,ai_num2);
              return;
            }
            return; // termenating after the recursion has been executed
          }else{
            return;
          }
        }

        // deleating the number that player 1 entered from the vector
        vec.erase((vec.begin() + index_of_player));
        cout << "=================\n";

        // in case of a draw
        if(size(vec) == 0) // cheacking if there is any remaining number has left in the vector
        {
          cout << "enter 1 of you wanna play again or 0 to termeniate" << endl;
          bool playing_again = false;
          cin >> playing_again;
          if(playing_again == true)
          {
            palyer_num = 0 ;
            if(playing_with_ai != true)
            {
              player2_num = 0;
              playing(false,palyer_num,player2_num);
              return;

            }else{
              ai_num2 = 0;
              playing(true,palyer_num,ai_num2);
              return;
            }
            return;
          }else{
            return;
          }
        }

        int *P_index_of_player2 = nullptr; // using a pointer to accses an a out of scope variable
        if(playing_with_ai != true)
        {
          cout << "O player turn" << endl;
          cout << "enter your postion: " << endl;
          cin >> player2_num;

          // finding and makeing sure that the number is in the vector
          auto iter_of_player2 = find(vec.begin(),vec.end(),player2_num);
          int index_of_player2 = iter_of_player2 - vec.begin();
          P_index_of_player2 = &index_of_player2;

          while(iter_of_player2 == vec.end())
          {
            cout << "the number you've entered is out of reach please try again" << endl;
            cin >> player2_num;
            iter_of_player2 = find(vec.begin(),vec.end(),player2_num);
            index_of_player2 = iter_of_player - vec.begin();
            P_index_of_player2 = &index_of_player2;
          }

          // in case of O player winning
          if(game_shape(player2_num,'O') == true)
          {
            cout << "enter 1 of you wanna play again or 0 to termeniate" << endl;
            bool playing_again;
            cin >> playing_again;
            if(playing_again == true)
            {
              palyer_num = 0 ;
              player2_num = 0;
              playing(false,palyer_num,player2_num);
              return;
            }else{
              return;
            }
          }
        }
        else{ // in case of playing with the computer
          ai_num1 = rand() % size(vec); // choosing a random index from the vector
          ai_num2 = vec[ai_num1];
          cout << "oppoent turn....\n";
          cout << "oppoent choose postion number " << ai_num2 << endl;

          // in case of O player computer winning
          if(game_shape(ai_num2,'O') == true)
          {
            cout << "enter 1 of you wanna play again or 0 to termeniate" << endl;
            bool playing_again = false;
            cin >> playing_again;
            if(playing_again == true)
            {
              palyer_num = 0 ;
              ai_num2 = 0;
              playing(true,palyer_num,ai_num2);

            }else{
              return;
            }
          }
        }

        // finding and earising the number from the vector in case of ai and in case of playnig with other player
        if(playing_with_ai == true)
        {
          auto iter_of_ai = find(vec.begin(),vec.end(),ai_num2);
          int index_of_ai = iter_of_ai - vec.begin();
          vec.erase(vec.begin() + index_of_ai);
        }else{
          vec.erase(vec.begin() + *(P_index_of_player2));
        }
      }
    }

};

int main()
{
  tic_tac_toe game;
  bool playing_with_ai = true;
  cout << "wlecome to tic tac toe game\n";
  cout << "press 1 to play with the computer or 0 to play with another player\n";
  cin >> playing_with_ai;
  if(playing_with_ai != true)
  {
    game.playing(!true);
  }else{
    game.playing();
  }
}