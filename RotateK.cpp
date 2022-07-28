#include <iostream>
#include <string>

using namespace std;



void rotatek(string&, int );

int main()
{
    string input;
    int k;

    cout << "Enter a string: ";
    //cin >> input; // store the input string
    getline(cin, input);
    cout << "enter the number of times to rotate ";
    cin >> k;

    rotatek(input, k); // the reverse of the input string is stored in input itself

    cout << input << endl;
}


void rotatek(string& word, int k)
{
    int n = word.length();
    char tmp;

    /* outer loop to rotate k times */
    for(int i=1 ; i<=k; i++)
    {
        tmp = word[0];
        for (int j = 0; j < n-1; j++)
        {
            word[j] = word[j+1];
        }
        word[n-1] = tmp;
    }
    //cout << word << endl;
}
