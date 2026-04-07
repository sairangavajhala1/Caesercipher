#include <iostream>
#include <string>
using namespace std;

class CaesarCipher {
public:
    // Encryption
    string encrypt(string text, int shift) {
        string result = "";

        for (char c : text) {
            if (isalpha(c)) {
                char base = isupper(c) ? 'A' : 'a';
                result += char((c - base + shift) % 26 + base);
            } else {
                result += c;
            }
        }
        return result;
    }

    // Decryption
    string decrypt(string text, int shift) {
        return encrypt(text, 26 - shift);
    }

    // Brute Force Attack
    void bruteForce(string text) {
        cout << "\nBrute Force Results:\n";
        for (int shift = 1; shift < 26; shift++) {
            cout << "Shift " << shift << ": ";
            cout << decrypt(text, shift) << endl;
        }
    }
};

int main() {
    CaesarCipher obj;
    string message;
    int shift, choice;

    cout << "===== Caesar Cipher Program =====\n";
    cout << "1. Encrypt\n2. Decrypt\n3. Brute Force Attack\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    cout << "Enter message: ";
    getline(cin, message);

    if (choice == 1) {
        cout << "Enter shift value: ";
        cin >> shift;
        cout << "Encrypted Text: " << obj.encrypt(message, shift) << endl;
    }
    else if (choice == 2) {
        cout << "Enter shift value: ";
        cin >> shift;
        cout << "Decrypted Text: " << obj.decrypt(message, shift) << endl;
    }
    else if (choice == 3) {
        obj.bruteForce(message);
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}