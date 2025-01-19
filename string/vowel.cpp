#include <iostream>
#include <string>
using namespace std;
int main()
{

    string name;
    cout << "Enter a sentence :";
    getline(cin, name);

    int count = 0;
    for (int i = 0; i < name.length() - 1; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
            count++;
    }
    cout << "Total Vowel present in this Sentence :" << count << endl;
    return 0;
}