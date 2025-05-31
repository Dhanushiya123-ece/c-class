#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Function to scramble the letters of a word
string scrambleWord(const string &word)
{
    string scrambled = word;
    random_shuffle(scrambled.begin(), scrambled.end());
    return scrambled;
}

int main()
{
    // List of 30 mixed random words (uppercase)
    vector<string> words = {
        "APPLE", "BANANA", "ELEPHANT", "GIRAFFE", "KANGAROO", "CANADA", "BRAZIL",
        "COMPUTER", "PYTHON", "TELEVISION", "MOUNTAIN", "RIVER", "OCEAN", "DESERT",
        "ORANGE", "PELICAN", "ZEBRA", "CAMERA", "JUPITER", "SATURN", "VIOLIN",
        "GUITAR", "UMBRELLA", "LANTERN", "PENGUIN", "PARIS", "LONDON", "TOKYO",
        "SPAIN", "INDIA"};

    srand(static_cast<unsigned int>(time(nullptr)));

    // Pick a random word
    string word = words[rand() % words.size()];

    // Scramble it
    string scrambled = scrambleWord(word);

    cout << "Welcome to Word Scramble!\n";
    cout << "Unscramble the letters to find the word.\n";

    cout << "Scrambled word: " << scrambled << "\n";

    string guess;
    cout << "Your guess: ";
    cin >> guess;

    // Convert guess to uppercase to compare fairly
    transform(guess.begin(), guess.end(), guess.begin(), ::toupper);

    if (guess == word)
    {
        cout << "Correct! You guessed the word.\n";
    }
    else
    {
        cout << "Oops! The correct word was: " << word << "\n";
    }

    return 0;
}
