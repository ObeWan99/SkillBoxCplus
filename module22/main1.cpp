#include <iostream>
#include <map>
#include <string>

int main(){
    std::map<std::string, std::string> telephone_directory;
    std::string name;
    std::string number;
    int cmd{};

    while (cmd != 4)
    {
        std::cout << "Нажмите 1 для добавления нового контакта " << std::endl <<
        "Нажмите 2, чтобы узнать фамилию абонента по номеру телефона " << std::endl <<
        "Нажмите 3, чтобы узнать телефон абонента по фамилии " << std::endl <<
        "Нажмите 4 для выхода " << std::endl;
        
        std::cin >> cmd;

        if(cmd == 1){
            std::cout << "Введите номер абонента и фамилию: ";
            std::cin >> number >> name;
            telephone_directory.insert(std::make_pair(number, name));
        }
        else if(cmd == 2){
            std::cout << "Введите номер абонента: ";
            std::cin >> number;
            std::map<std::string, std::string>::iterator it = telephone_directory.find(number);
            if(it != telephone_directory.end()){
                std::cout << "Имя: " << it->second << std::endl;
            } else{
                std::cout << "Имя не найдено по номеру" << std::endl;
            }
        }
        else if(cmd == 3){
            std::cout << "Введите имя абонента: ";
            std::cin >> name;
            for(std::map<std::string, std::string>::iterator it = telephone_directory.begin(); it != telephone_directory.end(); it++){
                if(it->second == name){
                    std::cout << "Номер телефона: " << it->first << std::endl;
                }
            }

        }  
    }     
}

