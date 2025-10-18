#include <iostream>
#include <string>
#include <set>
//Testing some basic stuff in C++
//Program to detect a pangram ( sentence containing each letter of the alphabet )
using namespace std;


string removeSpace(string sentence) {
    string new_sentence;
    for ( int i = 0 ; i < sentence.length() ; i++ ) {
        if ( sentence[i] != ' ') {
            new_sentence += sentence[i];
        }
    }
    return new_sentence;
}

int main () {
    string sentence;
    cout << "Write any sentence that you like -> ";
    getline(cin , sentence);
    string space_No = removeSpace(sentence);
    set<char> letters;

    for (char c : space_No) {
        if (isalpha(c)) {
            letters.insert(tolower(c));
        }
    }

    if (letters.size() == 26) {
        cout << "The Sentence you entered is an pangram :)" << endl;
    } else {
        cout << "The Sentence was not a pangram" << endl;
    }
    return 0;
}