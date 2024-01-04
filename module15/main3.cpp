#include <iostream>
#include <vector>

void my_sort(int array[], int size)
{
   for(int i = 0; i < size; i++)
   {
       for(int j = i; j < size; j++)
       {
           if(array[i] > array[j])
           {
               int tmp = array[j];
               array[j] = array[i];
               array[i] = tmp;
           }
       }
   }
}

int findFifthMax(int array[], int size)
{
   if(size < 5)
       return 0;
   my_sort(array, size);
   return  array[5];
}

int main()
{
   std::vector<int> data;
   int currentNumber;
   for(;;)
   {
       std::cin >> currentNumber;
       if(currentNumber == -1)
       {
           //метод data позволит получить массив, который содержится внутри vector
           std::cout << findFifthMax(data.data(), data.size()) << "\n";
       }
       else if(currentNumber == -2)
       {
           break;
       }
       data.push_back(currentNumber);
   }
   return 0;
}