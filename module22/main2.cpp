// #include <iostream>
// #include <map>
// #include <string>

// int g_count{1};

// void queryName(std::map<int, std::string>& query){
//     std::cout << "Очередь: " << std::endl;
//     for(auto it = query.begin(); it != query.end(); it++){
//         std::cout << it->first << " " << it->second << '\n';
//         // std::cout << it->second << '\n';
//     }
// }

// void moveQuery(std::string& name, std::map<int, std::string>& query){
//     if(name == "next"){
//         if(!query.empty()){
//             auto it = query.begin();
//             std::cout << it->second << " выходит из очереди " << std::endl;
//             query.erase(it);
//             for(auto it = query.begin(); it != query.end(); it ++){
//                 it->first;
//             }
//         } else{
//             std::cout << "Очередь пустая" << std::endl;
//         }
//     }
//     else{
//         query.insert(std::make_pair(g_count, name));
//         g_count++;
//     }
// }

// int main(){
//     std::map<int, std::string> query;
//     std::string name;
//     std::cout << "Введите фамилию пациента или next: ";
//     while(std::getline(std::cin, name))
//     {
//         moveQuery(name, query);
//         queryName(query);
//     }
// }

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> registry;
    std::string command;

    while (std::getline(std::cin, command)) {
        if (command == "Next") {
            if (!registry.empty()) {
                auto it = registry.begin(); // Получаем итератор на первый элемент
                std::cout << it->first << std::endl; // Выводим фамилию
                if (--it->second == 0) { // Уменьшаем количество и удаляем, если это был последний
                    registry.erase(it);
                }
            } else {
                std::cout << "Очередь пуста " << std::endl;
            }
        } else {
            // Добавляем или увеличиваем счетчик для фамилии
            registry[command]++;
        }
    }

    return 0;
}


