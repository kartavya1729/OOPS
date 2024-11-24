#include <iostream>
#include <cstring>
using namespace std;

class GoodString {
private:
    static const int MAX_SIZE = 50;  // Maximum allowed size of the string
    char str[MAX_SIZE + 1];          // +1 for null terminator

public:
    // Constructor: Ensures no overflow and copies only a fixed number of characters
    GoodString(const char* input) {
        int i = 0;
        // Copy at most MAX_SIZE characters from input string
        while (i < MAX_SIZE && input[i] != '\0') {
            str[i] = input[i];
            i++;
        }
        str[i] = '\0';  // Null terminate the string
    }

    // Function to get the leftmost 'n' characters
    GoodString left(int n) const {
        GoodString temp("");
        int i = 0;
        while (i < n && i < strlen(str)) {
            temp.str[i] = str[i];
            i++;
        }
        temp.str[i] = '\0';
        return temp;
    }

    // Function to get the middle 'n' characters starting from index 's'
    GoodString mid(int s, int n) const {
        GoodString temp("");
        if (s >= 0 && s < strlen(str)) {
            int i = 0;
            for (int j = s; j < s + n && j < strlen(str); j++) {
                temp.str[i] = str[j];
                i++;
            }
            temp.str[i] = '\0';
        }
        return temp;
    }

    // Function to get the rightmost 'n' characters
    GoodString right(int n) const {
        GoodString temp("");
        int len = strlen(str);
        if (n > len) {
            n = len;
        }
        int i = 0;
        for (int j = len - n; j < len; j++) {
            temp.str[i] = str[j];
            i++;
        }
        temp.str[i] = '\0';
        return temp;
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    int max_size;
    char input[100];

    // Read maximum size
    cin >> max_size;
    cin.ignore(); // To clear newline left by the integer input
    
    // Read input string
    cin.getline(input, 100);

    // Create a GoodString object
    GoodString s1(input);

    // Display the entire string
    cout << "Original string: ";
    s1.display();

    // Get leftmost 'max_size' characters
    GoodString leftStr = s1.left(max_size);
    cout << "Left " << max_size << " characters: ";
    leftStr.display();

    // Get middle 'max_size' characters starting from position 0
    GoodString midStr = s1.mid(0, max_size);
    cout << "Middle " << max_size << " characters from position 0: ";
    midStr.display();

    // Get rightmost 'max_size' characters
    GoodString rightStr = s1.right(max_size);
    cout << "Right " << max_size << " characters: ";
    rightStr.display();

    return 0;
}
