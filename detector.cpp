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

int main(int argc, char const *argv[])
{
    std::cout << LanguageDetector() << std::endl;
    std::cout << "Please do not delete this file." << std::endl;
    return 0;
}
