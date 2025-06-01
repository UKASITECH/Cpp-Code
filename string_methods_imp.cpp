#include <iostream>
#include <string> // for string functions
using namespace std;

int main() {
    string text = "  Hello, OpenAI World!  ";

    // length() - gives total number of characters in string
    cout << "Length of string: " << text.length() << endl;

    // substr(pos, len) - gives part of string from pos with length len
    cout << "Substring from 2nd char (5 chars): " << text.substr(2, 5) << endl;

    // find() - tells the position of a word/letter, string::npos if not found
    cout << "Position of 'OpenAI': " << text.find("OpenAI") << endl;

    // replace(pos, len, newtext) - replaces part of string
    string replaced = text;
    replaced.replace(replaced.find("World"), 5, "Universe");
    cout << "Replace 'World' with 'Universe': " << replaced << endl;

    // insert(pos, text) - adds text at a position
    string inserted = text;
    inserted.insert(2, "Hey! ");
    cout << "After inserting 'Hey!': " << inserted << endl;

    // erase(pos, len) - deletes part of string from pos
    string erased = text;
    erased.erase(2, 5); // remove 5 chars starting from index 2
    cout << "After erasing 5 chars from 2nd index: " << erased << endl;

    // append() - adds something at end of string
    string appended = text;
    appended.append(" Let's go!");
    cout << "After append: " << appended << endl;

    // compare() - compares two strings (returns 0 if equal)
    string s1 = "OpenAI";
    string s2 = "OpenAI";
    cout << "Comparing s1 and s2: " << s1.compare(s2) << endl;

    return 0;
}
