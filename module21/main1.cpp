#include <iostream>
#include <fstream>
#include <vector>

struct person{
    std::string name;
    std::string surename;
    std::string date;
    double amount;
};

// Функция для валидации формата даты
bool validateDate(const std::string& date) {
    if (date.size() != 10) // Проверка длины строки
        return false;
    
    if (date[2] != '.' || date[5] != '.') // Проверка разделителей
        return false;

    return true;
}

void printData(std::vector<person>& vector_person)
{
    
    for(const auto& el : vector_person)
    {
        std::cout << "Имя и фамилия сотрудника: " << el.name << " " << el.surename << std::endl <<
        "Дата рождения сотрудника: " << el.date << std::endl << "Выплата сотруднику: " << el.amount << std::endl;
    }
}

void addData(const std::string& file_path, std::vector<person>& vector_person){
    std::ofstream file(file_path, std::ios::app);
    if(!file.is_open()){
        std::cerr << "Ошибка открытия файла!" << std::endl;
    }

    person data;
    std::cout << "Введите имя и фамилию сотрудника: ";
    std::cin >> data.name >> data.surename;

    std::cout << "Введите дату рождения сотрудника: ";
    std::cin >> data.date;
    if (!validateDate(data.date)) {
        std::cerr << "Некорректный формат даты!" << std::endl;
    }

    std::cout << "Введите выплату сотруднику ";
    std::cin >> data.amount;

    vector_person.push_back(data);

    file << data.name << " " << data.surename << " " << data.date << " " << data.amount << '\n';

    file.close();
}

void listData(const std::string& file_path, std::vector<person>& vector_person){
    
    person data;
    std::ifstream file(file_path, std::ios::app);
    if(!file.is_open()){
        std::cerr << "Ошибка открытия файла!" << std::endl;
    }

    while (file >> data.name >> data.surename >> data.date >> data.amount)
    {
        vector_person.push_back(data);
        if(file.eof()){
            break;
        }
    }

    file.close();

    printData(vector_person);
}


int main(){
    person data;
    std::string file_path("/home/alex/SkillBoxCplus/module21/data.txt");
    
    std::vector<person> vector_person;

    std::string command;
    std::cout << "Введите add для добавления данных или list для отображения списка: ";
    std::cin >> command;

    if (command == "add")
    {
        addData(file_path, vector_person);
    }
    else if(command == "list"){
        listData(file_path, vector_person);
    }
    else{
        std::cout << "Такой команды нет" << std::endl;
    }
}