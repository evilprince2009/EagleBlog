#include <string>
#include <iostream>

using namespace std;
string LanguageDetector()
{
    return "This file is to detect the language of the project. Do not delete this file.";
}

int main(int argc, char const *argv[])
{
    std::cout << LanguageDetector() << std::endl;
    return 0;
}
