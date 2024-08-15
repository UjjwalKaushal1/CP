#include <iostream>
#include <string>
using namespace std;

int longestRepetition(const string &dna) {
    if (dna.empty()) return 0;
    
    int maxLength = 1;
    int currentLength = 1;

    for (size_t i = 1; i < dna.length(); ++i) {
        if (dna[i] == dna[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    
    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    string dna;
    cin >> dna;

    int result = longestRepetition(dna);
    cout << result;

    return 0;
}
