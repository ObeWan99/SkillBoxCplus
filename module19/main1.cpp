#include <fstream>
#include <iostream>
#include <vector>

int main(){
    
    std::ifstream txt;
    std::vector<std::string> words;

    txt.open("words.txt");
    
    if(txt.is_open()){
        while(!txt.eof()){
            std::string word;
            txt >> word;
            words.push_back(word);
        }
    }
    
    std::string word_search;
    int count{};
    int sum{};
    
    std::cout << "Введите слово для описка в файле: ";
    std::cin >> word_search;
    
    for(auto& word : words){
        if(word == word_search){
            count++;
            sum += count;
            count--;    
        }
    }

    std::cout << "Столько раз встретилось ваше слово: " << sum << std::endl;

    txt.close();
}