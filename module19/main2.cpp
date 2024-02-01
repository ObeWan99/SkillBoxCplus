#include <fstream>
#include <iostream>
#include <vector>

int main(){
    // /home/alex/SkillBoxCplus/test.txt тестовый файл
    std::ifstream file;
    std::string path_file;
    
    std::cout << "Введите путь до файла: ";
    std::cin >> path_file;

    file.open(path_file, std::ios::binary);
    
    if(file.is_open()){
        std::vector<char> buffer(100, 0); // Инициализация буфера размером 100
        while (file.read(buffer.data(), buffer.size())) {
            std::cout.write(buffer.data(), file.gcount());
        }
        // Вывод оставшихся байт, если их количество меньше размера буфера
        std::cout.write(buffer.data(), file.gcount());
        file.close();
    }
    else{
        std::cout << "Файла не существует или путь неверный! " << std::endl;
    }
    std::cout << std::endl;
}