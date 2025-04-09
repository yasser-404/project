#include <iostream> // used for cin and cout
#include <cctype> // used for the seed function
#include <ctime> // used for the time function
#include <vector> // used for declareing a vector
#include <algorithm> // used for the find function

using namespace std;

class tic_tac_toe
{
  private:
    char *Ptr_of_arr = nullptr; // declaring a pointer to access an out of scope array

  public:

    // this function cheacks for winning for either X and O
    bool cheack_winnig(char arr[], char symbol)
    {
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

        return false;
    }

    // this function cheacks for draw
    bool cheack_draw(char arr[])
    {
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
                    return true;
                }
            }
        }
        return false;
    }
 
    // this function is used for the strucure of the game and postioning the X's and O's
    bool game_shape(int postion = 0, char x = 'X') 
    {
      const int size = 9;
      static char arr[size] = {'1','2','3','4','5','6','7','8','9'};
      Ptr_of_arr = arr;

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

      // cheacks the game rules
      if(cheack_winnig(arr,x) == true)
      {
        return true;
      }

      return false;
    }

    // this function makes the ai moves better and more smart
    int ai_enhancing(vector <int> v)
    {
      for(int i = 0 ; i < v.size(); i++)
      {
        if(v[i] == 5)
        {
          return 5; // if the center is empty return it
        }  
      }

      // cheacking for the first row
      int count = 0;
      for(int i = 0; i < 3; i++)
      {
        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }
        if(i == 2 && count == 2)
        {
          for(int j = 0 ; j < 3; j++)
          {
            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the second row
      count = 0;
      for(int i = 3; i < 6; i++)
      {
        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }
        if(i == 5 && count == 2)
        {
          for(int j = 3 ; j < 6; j++)
          {
            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the third row
      count = 0;
      for(int i = 6; i < 9; i++)
      {
        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }
        if(i == 8 && count == 2)
        {
          for(int j = 6 ; j < 9; j++)
          {
            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the first column
      count = 0;
      for(int i = 0; i < 7; i++)
      {
        if( i != 0 && i != 3 && i != 6)
        {
          continue;
        }

        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }

        if(i == 6 && count == 2)
        {
          for(int j = 0 ; j < 7; j+=3)
          {
            if( j != 0 && j != 3 && j != 6)
            {
              continue;
            }

            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the second column
      count = 0;
      for(int i = 1; i < 8; i++)
      {
        if( i != 1 && i != 4 && i != 7)
        {
          continue;
        }

        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }

        if(i == 7 && count == 2)
        {
          for(int j = 1 ; j < 8; j++)
          {
            if( j != 1 && j != 4 && j != 7)
            {
              continue;
            }

            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the third column
      count = 0;
      for(int i = 2; i < 9; i++)
      {
        if( i != 2 && i != 5 && i != 8)
        {
          continue;
        }

        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }

        if(i == 8 && count == 2)
        {
          for(int j = 2 ; j < 9; j+=3)
          {
            if( j != 2 && j != 5 && j != 8)
            {
              continue;
            }

            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the first diagnal
      count = 0;
      for(int i = 0; i < 9; i++)
      {
        if(i != 0 && i != 4 && i != 8)
        {
          continue;
        }

        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }

        if(i == 8 && count == 2)
        {
          for(int j = 0 ; j < 9; j++)
          {
            if(j != 0 && j != 4 && j != 8)
            {
              continue;
            }

            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }
      // cheacking for the second diagnal
      count = 0;
      for(int i = 2; i < 7; i++)
      {
        if(i != 2 && i != 4 && i != 6)
        {
          continue;
        }

        if(*(Ptr_of_arr + i) == 'X')
        {
          count++;
        }

        if(i == 6 && count == 2)
        {
          for(int j = 2 ; j < 7; j+=2)
          {
            if(j != 2 && j != 4 && j != 6)
            {
              continue;
            }

            if(*(Ptr_of_arr + j) != 'X' && *(Ptr_of_arr + j) != 'O')
            {
              return *(Ptr_of_arr + j) - 48; // if the player is about to win return the postion
            }
          }
        }
      }

      int random_num = rand() % v.size();
      int ai_num2 = v[random_num]; // genrating a random number from the vector

      // returning the number to be used in the game
      return ai_num2;
    }

    // this function is used to apply the previous functions and other things
    void playing(bool playing_with_ai, int num1 = 0, int num2 = 0)
    {
      int ai_num2 = 0 ,player2_num = 0 ,palyer_num = 0;
      bool on_game = true;
      vector <int> vec = {9,8,7,6,5,4,3,2,1};
      srand(time(0)); // used to genrate a new sequence of numbers each time the code runs
      playing_with_ai ? cout << "you play as X\n" : cout << "X player begains\n";
      game_shape(); // calling the function without parameters to demonstrate the game

      while(on_game)
      {
        cout << "=================\n";
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
        // cheacking if there is any remaining number has left in the vector and if its a draw
        if(vec.size() == 0 && cheack_draw(Ptr_of_arr) == true)
        {
          cout << "its a draw!" << endl;
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

          ai_num2 = ai_enhancing(vec);
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
  int playing_with_ai;
  cout << "wlecome to tic tac toe game\n";
  cout << "press 1 to play with the computer or 0 to play with another player\n";
  enum { TRUE = 1, FALSE = 0};
  cin >> playing_with_ai;
  switch(playing_with_ai)
  {
    case TRUE:

        game.playing(true);
        break;

    case FALSE:

        game.playing(false);
        break;

    default:
        cout << "error choosing an a option" << endl;     
  }
  return 0;
}