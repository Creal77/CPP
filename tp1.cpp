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

void concat(std::string& a, std::string& b , std::string& out) {
    out = a + b;
}

// ==========================================
// Exercice 3                              ||
// ==========================================

class Stack {

    typedef int stack_content_t;
    struct node_type {
        stack_content_t val;
        node_type*      next;
    };

public:
    Stack(){

    }

    void push(const stack_content_t& x) {

    }

    void pop() {

    }

    stack_content_t& top() const{

    }

    stack_content_t& top() {

    }


    void flush() {

    }

    unsigned size() {

    }

    bool empty() {

    }

private:

};

int main() {

    //Exercice 1
    q1("input.txt");
    rot13("input.txt");

    //Exercice 2
    int x = 1, y = 2;
    std::cout << "x = "<< x << " • " << "y = " << y << std::endl;
    swap(x, y);
    std::cout << "x = "<< x << " • " << "y = " << y << std::endl;
    std::string a = "Yolo", b = "Mdr", c;
    std::cout << "a = "<< a << " • b = " << b << " • c = " << c << std::endl;
    concat(a, b, c);
    std::cout << "c = "<< c << std::endl;

    //Exercice 3
    Stack s;
    s.push(10);
    s.push(20);
    std::cout << s << std::endl; // affiche [ 20 10 ]
    s.pop();
    std::cout << s << std::endl; // affiche [ 10 ]
    s.flush(); // release memory

    return 0;
}