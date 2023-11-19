#include <iostream>
using namespace std;

const int N = 4;

// Function to compare two matrices for complete equality
bool areMatricesEqual(int A[N][N], int B[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    return true;
}

// Function to convert a matrix to diagonal form
void convertToDiagonal(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int A[N][N], B[N][N];

    // Input matrices A and B using std::cin

    cout << "Заполните ячейки данными:";
    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
        
    }

    cout << endl; 

     for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> B[i][j]; 
        }
        
    }

    // Compare the matrices
    if (areMatricesEqual(A, B)) {
        cout << "Matrices are equal." << endl;

        // Convert matrix A to diagonal form
        convertToDiagonal(A);

        // Output the diagonal matrix A
        cout << "Diagonal matrix A:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrices are not equal." << endl;
    }

    return 0;
}