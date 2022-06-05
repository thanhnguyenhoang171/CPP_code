#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int nSecret, nGuess;
    srand(time(NULL));
    nSecret = rand() % 10 + 1;
    do
    {
        cout << "Guess the number (1 to 10): ";
        cin >> nGuess;

        if (nSecret < nGuess)
        {
            cout << "The secret number is lower" << endl;
        }
        else if (nSecret > nGuess)
        {
            cout
                << "The secret number is higher" << endl;
        }
    } while (nSecret != nGuess);

    cout << "Congratulations!" << endl;

    return 0;
}