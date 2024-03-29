#include <iostream>
#include <ctime>
#include <string>
#include <vector>

struct Task {
    std::string name;
    std::time_t start_time;
    std::time_t end_time;
};

int main() {
    std::vector<Task> tasks;
    Task current_task;
    
    while (true) {
        std::string command;
        std::cout << "Введите команду (begin, end, status, exit): ";
        std::cin >> command;
        
        if (command == "begin") {
            if (!current_task.name.empty()) {
                current_task.end_time = std::time(nullptr);
                tasks.push_back(current_task);
            }
            std::cout << "Введите название задачи: ";
            std::cin >> current_task.name;
            current_task.start_time = std::time(nullptr);
        } else if (command == "end") {
            if (!current_task.name.empty()) {
                current_task.end_time = std::time(nullptr);
                tasks.push_back(current_task);
                current_task = Task();
            }
        } else if (command == "status") {
            for (const auto& task : tasks) {
                std::cout << "Задача: " << task.name << ", Время (ч): " << (task.end_time - task.start_time) / 3600 << std::endl;
            }
            if (!current_task.name.empty()) {
                std::cout << "Текущая задача: " << current_task.name << std::endl;
            }
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Некорректная команда. Попробуйте снова." << std::endl;
        }
    }
    
    return 0;
}







// #include <iostream>
// #include <ctime>
// #include <iomanip> // создание и ввод даты и вывод

// int main(){
//     std::time_t t = std::time(nullptr);
//     std::tm* local = std::localtime(&t);
    
//     std::cout << std::put_time(local, "%H:%M:%S %y/%m/%d") << std::endl;  
// }

// #include <iostream>
// #include <ctime>
// #include <iomanip> // создание и ввод даты и вывод

// int main(){
//     std::time_t t = std::time(nullptr);
//     std::tm local = *std::localtime(&t);    
//     std::cin >> std::get_time(&local, "%H:%M");
//     std::cout << std::asctime(&local) << std::endl;  
// }

// #include <iostream>
// #include <ctime>
// #include <iomanip> // создание и ввод даты и вывод

// int main(){
//     std::time_t t = std::time(nullptr);
//     std::tm local = *std::localtime(&t);    
//     std::cin >> std::get_time(&local, "%H:%M");
//     std::cout << std::asctime(&local) << std::endl;  
// }

