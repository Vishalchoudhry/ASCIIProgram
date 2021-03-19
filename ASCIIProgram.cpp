#include <iostream>
#include <string.h>
void WelcomeMess()
{
    std::cout << "\n\t\t*****************************************";
    std::cout << "\n\t\t  WELCOME IN ASCII PROGRAM";
    std::cout << "\n\t\t*****************************************";
};

int ASCII()
{
    char ASCII;
    std::cout << "\n\t_______________________________________________";
    std::cout << "\n|ENTER ANY CHARACTER FROM YOUR KEYBOARD|";
    std::cout << "\n|| ";
    std::cin >> ASCII;
    std::cout << " ||";
    return static_cast<int>(ASCII);
};
void PrintASCII(int input)
{
    std::cout << "\n";
    std::cout << "| Your Entered Character in ASCII |:|"
              << "=| " << input << " |";
};
int Quit()
{
    int x;
    std::cout << "\n\t|| THANKS FOR USING ASCII ||";
    std::cout << "\n\t|| ENTER SOMETHING TO QUIT PROGRAM ||";
    std::cin >> x;
    return 1;
};
int main()
{
    std::string q;
    WelcomeMess();
    do
    {
        PrintASCII(ASCII());
        std::cout << "\n|| Would You Like To Run Again ASCII Program ||";
        std::cin >> q;
        std::cin.ignore();
        std::cin.clear();
    } while (q == "1" || q == "yes" || q == "yeah" || q == "Yes" || q == "YES" || q == "y" || q == "Y");
    return Quit();
};