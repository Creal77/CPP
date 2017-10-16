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

typedef int stack_content_t;
struct node_type {
    stack_content_t val;
    node_type*     next;
};

class Stack {

public:

     node_type* getNode() const {
        return element;
    }

    Stack(){
        this->size_ = 0;
        this->element = nullptr;
    }

    void push(const stack_content_t& x) {
        node_type* nodeType = new node_type();
        nodeType->val = x;
        if(!empty()) {
            nodeType->next = this->element;
        }
        else {
            nodeType->next = nullptr;
        }
        this->size_++;
        this->element = nodeType;
    }

    void pop() {
        if(!empty()) {
            node_type* n = element;
            element = element->next;
            delete(n);
            size_--;
        }
    }

    stack_content_t& top() const{
        return this->element->val;
    }

    stack_content_t& top() {
        return this->element->val;
    }


    void flush() {
        while(!empty()) {
            pop();
        }
    }

    unsigned size() {
        return size_;
    }

    bool empty() {
        return this->size_ == 0;
    }

private:
    unsigned size_;
    node_type* element;
};

std::ostream& operator<<(std::ostream& ostr, const Stack& s) {
    ostr << "[ ";
    node_type* n = s.getNode();
    while (n != nullptr){
        ostr << n->val << " ";
        n = n->next;
    }
    ostr << "]" << std::endl;
    return ostr;
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
    std::string a = "Yolo", b = "Mdr", c;
    std::cout << "a = "<< a << " • b = " << b << " • c = " << c << std::endl;
    concat(a, b, c);
    std::cout << "c = "<< c << std::endl;

    //Exercice 3
    Stack s;
    s.push(10);
    s.push(20);
    std::cout << s << std::endl;
    s.pop();
    std::cout << s << std::endl;
    s.flush(); // release memory

    return 0;
}