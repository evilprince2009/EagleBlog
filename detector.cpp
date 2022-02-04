// Just ignore this file while working

#include <string>
#include <iostream>

using namespace std;
string LanguageDetector()
{
    return "This file is to detect the language of the project. Do not delete this file.";
}

// write a function to calculate the number of lines in a file
int NumberOfLines(string filename)
{
    int count = 0;
    ifstream file(filename);
    string line;
    while (getline(file, line))
    {
        count++;
    }
    return count;
}

// write a function to calculate the number of words in a file
int NumberOfWords(string filename)
{
    int count = 0;
    ifstream file(filename);
    string line;
    while (getline(file, line))
    {
        string word;
        istringstream iss(line);
        while (iss >> word)
        {
            count++;
        }
    }
    return count;
}

// write a function to calculate the number of characters in a file
int NumberOfCharacters(string filename)
{
    int count = 0;
    ifstream file(filename);
    string line;
    while (getline(file, line))
    {
        count += line.length();
    }
    return count;
}

// write a function to determine the most common word in a file
string MostCommon(string filename)
{
    int count = 0;
    string word;
    string mostCommon;
    ifstream file(filename);
    while (file >> word)
    {
        if (count == 0)
        {
            mostCommon = word;
        }
        if (word == mostCommon)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return mostCommon;
}

// check palindrome
bool IsPalindrome(string word)
{
    int length = word.length();
    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::cout << LanguageDetector() << std::endl;
    std::cout << "Please do not delete this file." << std::endl;
    return 0;
}
