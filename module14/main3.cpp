#include<iostream>
using namespace std;

int const rows{4};
int const cols{4};

bool equalityTest(int a[][cols], int b[][cols])
{

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(a[i][j] != b[i][j]) return false;
        }
    }

    return true;
}

 mainDiagonal(int a[][cols])
{
    for(int i = 0; i < rows; i ++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(a[i][j] != a[0][0] && a[i][j] && a[1][1] && a[i][j] != a[2][2] && a[i][j] != a[3][3])
            {
                a[i][j] = 0;
            }
        }
    }
    return a;
}

void print(int a[][cols])
{
     for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a [i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[rows][cols];
    int b[rows][cols];
    int n{};

    cout << "Заполните ячейки данными:";
    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >>n;
            a[i][j] = n; 
        }
        
    }

    cout << endl; 

     for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >>n;
            b[i][j] = n; 
        }
        
    }

    cout << endl;

    if(equalityTest(a, b)){
        print(mainDiagonal(a));
    } else{
        cout << "матрицы не равны" << endl;
    }

}