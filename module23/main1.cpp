#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define PRINT_DAY(day) \
    if(day == MONDAY) std::cout << "Понедельник" << std::endl; \
    else if(day == TUESDAY) std::cout << "Вторник" << std::endl; \
    else if(day == WEDNESDAY) std::cout << "Среда" << std::endl; \
    else if(day == THURSDAY) std::cout << "Четверг" << std::endl; \
    else if(day == FRIDAY) std::cout << "Пятница" << std::endl; \
    else if(day == SATURDAY) std::cout << "Суббота" << std::endl; \
    else if(day == SUNDAY) std::cout << "Воскресенье" << std::endl; \
    else std::cout << "Некорректный день недели" << std::endl;

int main(){

    int cmd{};
    std::cout << "Введите день недели ";
    std::cin >> cmd;

    PRINT_DAY(cmd);
}