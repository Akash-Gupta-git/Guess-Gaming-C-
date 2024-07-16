#include <iostream>
using namespace std;
int main()
{

  // This area used for variable decleration
  int UserNum = 0;
  char option;
  int round;
  int ComputerNum = (rand()%50) +1;

  // This area is used to give options to the user
  cout << "\n\n\t\t========Do you want to play========={Press Y or N}====================" << endl;
  cin >> option;
  if (option == 'y' || option == 'Y')
  {
    cout << "\n\n\t\t--------------Welcome to Guess gaming------------------" << endl;
    // User have 6 chance to play Guess Game
    cout << "\t\t--------------you have 6 chance to play------------------\n" << endl;
    cout << "Guess the number between 1 to 100 : " << endl;
    // This round run in 6 time by loop
    for (round = 1; round <= 6; round++) 
    { 
    
      cin >> UserNum;
      if (UserNum == ComputerNum)
      {
        // If we found User and Computer Number both are Same then we give Greeting for User won the match
        cout << "\t\t----&&----------CONGRATULATIONS You won the match------------&&------" << endl;
        goto Summarize;
      }
      if (UserNum > ComputerNum)
      {
        // If we found User number is Greater then excute this
        cout << "\nnumber is greater then Game number :" << endl;
        cout << "Your " << round << "th round is done" << endl;
        cout << "\nTry !Again :" << endl;
      }
      if (UserNum < ComputerNum)
      {
        // If we found User number is Smaller then excute this
        cout << "\nnumber is Smaller then Game number :" << endl;
        cout << "Your " << round << "th round is done" << endl;
        cout << "\nTry !Again :" << endl;
      }
      if (UserNum > 100)
      {
        // If we found User number is Greater then excute this
        cout << "you gave wrong " << endl;
      }
      if (round == 6)
      {
        cout << "\t\t\t!!------------Loss the match--------------!!" << endl;
        break;
      }
    }
  Summarize:
    cout << "\n\n\t\t--------------You completed the match round " << round << "------------------\n";
    // cout << "--------------The number of Computer Choice is " << ComputerNum << "-------------" << endl;
    cout << "\t\t--------------Thankyou for playing Game------------------" << endl;
    cout << "\t\t--------------you are give nice performance------------------" << endl;
  }
  else
  {
    cout << "you chosen wrong option.  Please Try Again!  {Y or N}" << endl;
  }
}