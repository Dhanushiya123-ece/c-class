#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main()
{
    // Mixed list of 50 words from various categories (all uppercase)
    vector<string> words = {
        "APPLE", "BANANA", "ELEPHANT", "GIRAFFE", "KANGAROO", "CANADA", "BRAZIL",
        "COMPUTER", "PYTHON", "TELEVISION", "MOUNTAIN", "RIVER", "OCEAN", "DESERT",
        "ORANGE", "PELICAN", "ZEBRA", "CAMERA", "JUPITER", "SATURN", "VIOLIN",
        "GUITAR", "UMBRELLA", "LANTERN", "PENGUIN", "PARIS", "LONDON", "TOKYO",
        "SPAIN", "INDIA", "CHINA", "FRANCE", "SWEDEN", "TIGER", "LEOPARD",
        "BASKETBALL", "FOOTBALL", "BASEBALL", "SOCCER", "TENNIS", "VOLCANO",
        "PYRAMID", "CASTLE", "BRIDGE", "ISLAND", "DESK", "CHAIR", "TABLE", "CLOCK"};

    // Initialize random seed
    srand(static_cast<unsigned int>(time(nullptr)));

    // Pick a random word from the list
    string secretWord = words[rand() % words.size()];
    string guessedWord(secretWord.size(), '_');
    vector<char> guessedLetters;
    int maxTries = 6;
    int tries = 0;

    cout << "Welcome to Hangman!\n";

    while (tries < maxTries && guessedWord != secretWord)
    {
        cout << "\nWord: ";
        for (char c : guessedWord)
            cout << c << ' ';
        cout << "\nTries left: " << (maxTries - tries) << "\n";

        cout << "Guess a letter: ";
        char guess;
        cin >> guess;
        guess = toupper(guess);

        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end())
        {
            cout << "You already guessed '" << guess << "'. Try again.\n";
            continue;
        }

        guessedLetters.push_back(guess);

        bool correct = false;
        for (size_t i = 0; i < secretWord.size(); i++)
        {
            if (secretWord[i] == guess)
            {
                guessedWord[i] = guess;
                correct = true;
            }
        }

        if (!correct)
        {
            tries++;
            cout << "Wrong guess!\n";
        }
        else
        {
            cout << "Good guess!\n";
        }
    }

    if (guessedWord == secretWord)
    {
        cout << "\nCongratulations! You guessed the word: " << secretWord << "\n";
    }
    else
    {
        cout << "\nGame over! The word was: " << secretWord << "\n";
    }

    return 0;
}
