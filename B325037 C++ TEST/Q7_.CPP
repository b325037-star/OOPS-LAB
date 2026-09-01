#include <iostream>

using namespace std;

int main()
{
    char message[200];

    cout << "Enter a sentence: ";
    cin.getline(message, 200);

    char *ptr = message;

    int upper = 0, lower = 0, spaces = 0;

    while(*ptr != '\0')
    {
        if(isupper(*ptr))
            upper++;
        else if(islower(*ptr))
            lower++;
        else if(*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "NUMBER OF Uppercase letters: " << upper << endl;
    cout << "NUMBER OF Lowercase letters: " << lower << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}