#include <iostream>
#include <fstream>

// ==========================================
// Exercice 1                              ||
// ==========================================

void q1(std::string filename) {
    auto count = 0;
    std::ifstream in("../" + filename);
    std::string word;
    if (!in.is_open()) {
        std::cout << "Failed to open " << filename << std::endl;
    } else {
        while (in >> word)
            count++;
        in.close();
        std::cout << "File " << filename << " has " << count << " words." << std::endl;
    }
}

void rot13(std::string filename) {
    std::ifstream in("../" + filename);
    std::string word;
    if (!in.is_open()) {
        std::cout << "Failed to open " << filename << std::endl;
    } else {
        while (in >> word) {
            std::string result;
            std::cout << word << " => ";
            for (int i = 0; i < word.size(); i++) {
                if (word[i] >= 'a' && word[i] <= 'm') {
                    word[i] += 13;
                }
                else if (word[i] >= 'n' && word[i] <= 'z') {
                    word[i] -= 13;
                }
                else if (word[i] >= 'A' && word[i] <= 'M') {
                    word[i] += 13;
                }
                else if (word[i] >= 'N' && word[i] <= 'Z') {
                    word[i] -= 13;
                }
                result += word[i];
            }
            std::cout << result << " • ";
        }
        std::cout << std::endl;
        in.close();
    }
}

// ==========================================
// Exercice 2                              ||
// ==========================================

void swap(int& x, int& y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swapString(std::string a, std::string b) {

}


int main() {

    //Exercice 1
    q1("input.txt");
    rot13("input.txt");

    //Exercice 2
    int x = 1, y = 2;
    std::cout << "x = "<< x << " • " << "y = " << y << std::endl;
    swap(x, y);
    std::cout << "x = "<< x << " • " << "y = " << y << std::endl;

    return 0;
}