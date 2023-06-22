
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int update_size, connection_speed;
  cout << "Введите размер обновления в мегабайтах:  ";
  cin >> update_size;
  cout << "Введите скорость соединения в мегабайтах в секунду: ";
  cin >> connection_speed;

  // Рассчитайте время, необходимое для загрузки обновления
  double time_required = update_size / connection_speed;

  // Отображение хода загрузки каждую секунду
  cout << "Загрузка обновления..." << endl;
  for (int i = 1; i <= round(time_required); i++) {
    int percent_downloaded = (i / time_required) * 100;
    cout << "Прогресс: " << percent_downloaded << "%" << endl;
  }

  // Отображение общего времени, необходимого для загрузки обновления
  cout << "Обновление загружено за " << round(time_required) << " секунды." << endl;

  return 0;
}