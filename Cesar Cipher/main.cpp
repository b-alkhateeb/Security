#include <iostream>
#include <string>

using namespace std;

string cesarCipher(string, int);

int main() {
    string x;
    int key;

    cout << "Enter string to cipher: ";
    cin >> x;
    cout << "Enter key value: ";
    cin >> key;

    cout << "Cipher text : " << cesarCipher(x, key) << endl;
    return 0;
}


string cesarCipher(string s, int key) {
    for (int i = 0; i < s.length(); i++) {
        s[i] += key;
    }
    return s;
}