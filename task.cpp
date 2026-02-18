#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

// --- Helper Function to Replace All Occurrences of a Word ---
string replaceAll(string str, const string& from, const string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Move past the last replacement
    }
    return str;
}

int main() {
    string filename = "data_file.txt";
    
    // --- STEP 1: Create File and Write Data ---
    // The sentence repeats "2025" and "was" to test frequency logic.
    ofstream outFile(filename);
    string content = "The year 2025 was amazing and 2025 was fast";
    
    if (!outFile) { cerr << "Error creating file."; return 1; }
    outFile << content;
    outFile.close();
    
    cout << "Original File Content: \"" << content << "\"\n" << endl;

    // --- STEP 2: Read File for Processing ---
    ifstream inFile(filename);
    if (!inFile) { cerr << "Error opening file."; return 1; }

    // Read the entire file into a string for easy manipulation
    stringstream buffer;
    buffer << inFile.rdbuf();
    string fileData = buffer.str();
    inFile.close();

    // --- STEP 3: Character Counts (Vowels, Consonants, etc.) ---
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    
    for (char ch : fileData) {
        char lowerCh = tolower(ch);
        if (isdigit(ch)) digits++;
        else if (ch == ' ') spaces++;
        else if (isalpha(ch)) {
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "--- Character Analysis ---" << endl;
    cout << "Vowels: " << vowels << " | Consonants: " << consonants 
         << " | Digits: " << digits << " | Spaces: " << spaces << endl;
    cout << "--------------------------" << endl;

    // --- STEP 4: Word Frequency (Counting Repetitions) ---
    map<string, int> wordCount;
    stringstream ss(fileData); // Use stringstream to split words by spaces
    string word;
    
    while (ss >> word) {
        wordCount[word]++; // Increment count for this word
    }

    cout << "\n--- Word Frequencies ---" << endl;
    // Specifically check for our repeated words
    cout << "Frequency of '2025': " << wordCount["2025"] << " times" << endl;
    cout << "Frequency of 'was':   " << wordCount["was"] << " times" << endl;
    cout << "Frequency of 'year': " << wordCount["year"] << " time" << endl;

    // --- STEP 5: Search for a Word ---
    string searchTarget = "amazing";
    size_t foundPos = fileData.find(searchTarget);
    
    cout << "\n--- Search Operation ---" << endl;
    if (foundPos != string::npos) {
        cout << "Word '" << searchTarget << "' found at index: " << foundPos << endl;
    } else {
        cout << "Word '" << searchTarget << "' not found." << endl;
    }

    // --- STEP 6: Replace a Word ---
    string target = "2025";
    string replacement = "2026";

    
    string modifiedData = replaceAll(fileData, target, replacement);

    cout << "\n--- Replace Operation ---" << endl;
    cout << "Replacing '" << target << "' with '" << replacement << "'..." << endl;
    cout << "New String: \"" << modifiedData << "\"" << endl;

    return 0;
}