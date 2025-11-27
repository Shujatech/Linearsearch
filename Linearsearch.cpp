


#include <iostream>
using namespace std;

// Function for Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // return index if found
        }
    }
    return -1; // return -1 if not found
}

int main() {
    const int size = 30; // Arrays to store roll numbers and marks of 30 students
    int roll[size];
    int PF[size], OOP[size], DSA[size];

    // ---------- Input Section ----------
    cout << "Enter Roll Numbers and Marks of 30 Students:\n";
    for (int i = 0; i < size; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        cout << "Enter Roll Number: ";
        cin >> roll[i];
        cout << "Enter PF Marks (out of 100): ";
        cin >> PF[i];
        cout << "Enter OOP Marks (out of 100): ";
        cin >> OOP[i];
        cout << "Enter DSA Marks (out of 100): ";
        cin >> DSA[i];

        // Basic input validation
        if (PF[i] < 0 || PF[i] > 100 || OOP[i] < 0 || OOP[i] > 100 || DSA[i] < 0 || DSA[i] > 100) {
            cout << "Invalid marks entered. Please enter marks between 0 and 100.\n";
            i--; // retry for current student
        }
    }

    // ---------- Search Section ----------
    int key;
    cout << "\nEnter Roll Number to Search: ";
    cin >> key;
    int index = linearSearch(roll, size, key);

    // ---------- Output Section ----------
    if (index != -1) {
        int total = PF[index] + OOP[index] + DSA[index];
        float percentage = (total / 300.0f) * 100;
        cout << "\nRecord Found!\n";
        cout << "Roll Number: " << key << endl;
        cout << "PF Marks: " << PF[index] << endl;
        cout << "OOP Marks: " << OOP[index] << endl;
        cout << "DSA Marks: " << DSA[index] << endl;
        cout << "Total Marks: " << total << " / 300\n";
        cout << "Percentage: " << percentage << "%\n";
    } else {
        cout << "\nRecord Not Found\n";
    }

    return 0;
}

