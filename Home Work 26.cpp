#include <iostream>

using namespace std;

int main()
{
    char strMass[80];
    int word = 0, count = 0;
  
    cout << "Enter a line of text: " << endl;
    gets_s(strMass, 80);

    int i = 0;
    while (strMass[i] == ' ' && strMass[i] != '\0')
    {
        i++;
    }
    
    while (strMass[i] != '\0') 
    {
        if (strMass[i] != ' ' && word == 0)
        {
            word = 1;
            count++;
        }
        else if (strMass[i] == ' ')
        {
            word = 0;
        }
        i++;
    }
    cout << "Number of words per line -  " << count << endl;
    system("pause");
    return 0;
}