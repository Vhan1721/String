#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Jika ada karakter yang tidak sama, bukan palindrom
        }
        left++;
        right--;
    }
    return true; // Semua karakter sama, jadi palindrom
}

int main() {
    string input;
    cout << "Check kata" << endl;
    cout << "Input kata : ";
    cin >> input;

    // Tampilkan hasil dalam format "Hasil : True" atau "Hasil : False"
    cout << "Hasil : " << (isPalindrome(input) ? "True" : "False") << endl;

    return 0;
}
