#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    int numChar = 0;
    int numSpaces = n;
    //count-controlled loop based on n.
    for (int i = 0; i < n; i++) {
        //First line: print (n-1) spaces followed by the character in question.
        numSpaces--;
        for (int i = 0; i < numSpaces; i++) {
            cout << " ";
        }
        numChar++;
        for (int i = 0; i < numChar; i++) {
            cout << '#';
        }
        if ( i < (n-1)) {
            cout << endl;
        }

        //if n >1, print second line
        //Second line: print newline, then (n-2) spaces followed by 2 characters (character count iterator?)
    }

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}
