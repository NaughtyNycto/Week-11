#include <iostream>
#include <vector>
using namespace std;

// Problem 1
//
// void inputMatrix(int matrix[100] [100], int N, int M) {
//     cout << "Enter elements of a " << N << "x" << M << " matrix:" << endl;
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
//
// int main() {
//     int N, M;
//
//     cout << "Enter size of matrix (rows x columns): " << endl;
//     cin >> N >> M;
//
//     int matrix[100][100];
//
//     inputMatrix(matrix, N, M);
//
//     cout << "\nMatrix is stored internally.\n";
//
//     return 0;
// }


//Problem 2
//
// void inputMatrix(int matrix[100] [100], int N, int M) {
//     cout << "Enter elements of a " << N << "x" << M << " matrix:" << endl;
//
//     for (int i = 0; i < N; i++) { //2
//         for (int j = 0; j < M; j++) { //3
//             cin >> matrix[i][j];
//         }
//     }
// }
//
// int main() {
//     int N, M;
//
//     cout << "Enter size of matrix (rows x columns): " << endl;
//     cin >> N >> M;
//
//     int matrix[100][100];
//
//     inputMatrix(matrix, N, M);
//
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<M; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }


// Problem 3
//
// void inputMatrix(int matrix[100][100], int N, int M) {
//     cout << "Enter matrix elements: " << endl;
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
//
// int main() {
//     int N, M;
//
//     cout << "Enter number of rows and columns of matrix: " << endl;
//     cin >> N >> M;
//
//     int matrix[100][100];
//
//     inputMatrix(matrix, N, M);
//
//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             sum += matrix[i][j];
//         }
//     }
//
//     cout << sum << endl;
//     return 0;
// }


// Problem 4
//
// void inputMatrix(int matrix[100][100], int N, int M) {
//     cout << "Enter matrix elements: " << endl;
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
//
// int main() {
//     int N, M;
//
//     cout << "Enter number of rows and columns of matrix: " << endl;
//     cin >> N >> M;
//
//     int matrix[100][100];
//
//     inputMatrix(matrix, N, M);
//
//     int max = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             if (matrix[i][j] > max) {
//                 max = matrix[i][j];
//             }
//         }
//         cout << max << " ";
//         max = 0;
//     }
//
//     return 0;
// }


// Problem 5
//
// void inputMatrix(int a[][100], int N, int M){
//   cout << "Enter matrix elements: " << endl;
//
//   for (int i=0; i<N; i++) {
//     for (int j=0; j<M; j++) {
//       cin >> a[i][j];
//     }
//   }
// }
//
// void columnSum(int a[][100], int N, int M){
//   for (int j=0; j<M; j++) {
//     int sum=0;
//     for(int i=0; i<N; i++) {
//       sum += a[i][j];
//     }
//     cout<<sum<<" ";
//   }
// }
//
// int main(){
//   int N, M;
//
//   cout << "Enter number of rows and columns of matrix: " << endl;
//   cin >> N >> M;
//
//   int a[N][100];
//
//   inputMatrix(a, N, M);
//   columnSum(a, N, M);
//   return 0;
// }


// Problem 6
//
// void inputMatrix(int matrix[][100], int N, int M) {
//     cout << "Enter matrix elements: " << endl;
//
//     for (int i = 0; i < N; i++) {
//             for (int j = 0; j < M; j++) {
//                 cin >> matrix[i][j];
//             }
//     }
// }
//
// int main() {
//     cout << "Enter the number of rows of the matrix: ";
//     int N; cin>>N;
//
//     int matrix[N][100];
//
//     inputMatrix(matrix, N, N);
//
//     int sum=0;
//
//     for (int i=0; i<N; i++){
//       sum+=matrix[i][i];
//     }
//
//     cout<<sum;
//     return 0;
// }