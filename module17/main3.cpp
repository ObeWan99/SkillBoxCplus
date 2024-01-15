#include <iostream>
#include <cstring>

using namespace std;
bool substr(const char* str1, const char* str2) {
    size_t length1 = std::strlen(str1);
    size_t length2 = std::strlen(str2);

    for (size_t i = 0; i <= length1 - length2; ++i) {
        bool found = true;
        for (size_t j = 0; j < length2; ++j) {
            if (str1[i + j] != str2[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}

int main(){
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    std::cout << substr(a,b) << " " << substr(a,c) << endl;
}