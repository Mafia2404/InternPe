#include <iostream>
#include <ctime> // For generating random numbers

using namespace std;
void gamePrint()
{
    std::cout << "   _______       _______     _______" << std::endl;
    std::cout << "  |       |     |       |   |       |" << std::endl;
    std::cout << "  | Rock  |     | Paper |   |Scissor|" << std::endl;
    std::cout << "  |_______|     |_______|   |_______|" << std::endl;
}
void won(){
   cout<<endl;
    cout << "W       W   OOO   N   N" << endl;
    cout << " W     W   O   O  NN  N" << endl;
    cout << "  W W W   O   O  N N N" << endl;
    cout << "   W W    O   O  N  NN" << endl;
    cout << "   W W     OOO   N   N" << endl; 
}
void lost(){
     cout << "  L      OOO   SSS  TTTTT" << endl;
    cout << "  L     O   O  S       T  " << endl;
    cout << "  L     O   O   SS     T  " << endl;
    cout << "  L     O   O     S    T  " << endl;
    cout << "  LLLL   OOO   SSS     T  " << endl;
}
void tie() {
    cout << " TTT  III  EEEE" << endl;
    cout << "  T    I   E   " << endl;
    cout << "  T    I   EEE " << endl;
    cout << "  T    I   E   " << endl;
    cout << "  T   III  EEEE" << endl;

    
}
// Function to get user's choice
int getUserChoice()
{
    int choice;
    gamePrint();
    cout << "Enter your choice \n1 for Rock\n2 for Paper\n3 for Scissors:->";
    cin >> choice;
    return choice;
}

// Function to get computer's choice
int getComputerChoice()
{
    // Generate a random number between 1 and 3
    return rand() % 3 + 1;
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        tie();
        cout << "It's a tie!" << endl;
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        won();
        cout << "You won!" << endl;
    }
    else
    {
        lost();
        cout << "Computer wins!" << endl;
    }
}

int main()
{
    srand(time(0)); // Seed the random number generator with current time

    cout << "Welcome to Rock, Paper, Scissors game!" << endl;

    char playAgain;
    do
    {
        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        cout << "You chose: ";
        switch (userChoice)
        {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
        }

        cout << "Computer chose: ";
        switch (computerChoice)
        {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
        }

        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
