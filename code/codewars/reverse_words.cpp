#include <iostream>

char* text2char(std::string str) {
    char* res = new char[str.length()];
    for (int i = 0 ; i < str.length() ; i++) {
        res[i] = str.at(i);
    }
    return res;
}

int word_size(char* text, int begin, int text_size) {
    int size = 0;
    for (int i = begin ; i < text_size ; i++,size++) {
        if (*(text+i) == ' ') break;
    }
    return size;
}

char* extract_word(char* text, int begin, int size) {
    char* res = new char[size];
    for (int i = 0 ; i < size ; res[i] = *(text+begin+i), i++) ;
    return res;
}

char* reverse_word(char* str, int size) {
    char* res = new char[size];
    for (int i = 0 ; i < size ; res[i] = *(str + size - i - 1), i++) ;
    return res;
}

std::string reverse_words(std::string str) {
    std::string res;
    int text_size = str.length();
    char* text = text2char(str);
    int i = 0;
    while (i < text_size) {
        if (*(text+i) == ' ') {
            res.push_back(' ');
            i++;
        } else {
            int size = word_size(text, i, text_size);
            char* word = extract_word(text, i, size);
            word = reverse_word(word, size);
            for (int j = 0 ; j < size ; j++) {
                res.push_back(*(word+j));
            }
            delete[] word;
            i += size;
        }
    }
    delete[] text; 
    return res;
}


int main() {
    std::string s1 = "double  spaces"; 
    std::cout << reverse_words(s1) << std::endl;
}