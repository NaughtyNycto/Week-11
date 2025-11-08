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


// Problem 7
//
// void inputMatrix(int a[][100], int N, int M){
//     cout << "Enter matrix elements: " << endl;
//
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<M; j++) {
//             cin >> a[i][j];
//         }
//     }
// }
//
// void transposeMatrix(int a[][100], int N, int M){
//     cout << "Transpose of the matrix is: " << endl;
//
//     for (int j=0; j<M; j++) {
//         for (int i=0; i<N; i++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main(){
//     int N, M;
//
//     cout << "Enter number of rows and columns of matrix: " << endl;
//     cin >> N >> M;
//
//     int a[100][100];
//
//     inputMatrix(a, N, M);
//     transposeMatrix(a, N, M);
//
//     return 0;
// }


// Problem 8
//
// void inputMatrix(int a[][100], int N, int M, int num){
//     cout << "Enter elements of Matrix " << num << ": " << endl;
//
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<M; j++) {
//             cin >> a[i][j];
//         }
//     }
// }
//
// void addMatrices(int a[][100], int b[][100], int N, int M){
//     cout << "Sum of matrices: " << endl;
//
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<M; j++) {
//             cout << a[i][j] + b[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main(){
//     int N, M;
//
//     cout << "Enter number of rows and columns of matrices: " << endl;
//     cin >> N >> M;
//
//     int a[100][100], b[100][100];
//
//     inputMatrix(a, N, M, 1);
//     inputMatrix(b, N, M, 2);
//     addMatrices(a, b, N, M);
//
//     return 0;
// }


// Problem 9
//
// void inputMatrix(int a[][100], int N, int M, int num){
//     cout << "Enter elements of Matrix " << num << ": " << endl;
//
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<M; j++) {
//             cin >> a[i][j];
//         }
//     }
// }
//
// void multiplyMatrices(int a[][100], int b[][100], int c[][100], int N, int M, int P){
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<P; j++) {
//             c[i][j] = 0;
//             for (int k=0; k<M; k++) {
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
// }
//
// void printMatrix(int c[][100], int N, int P){
//     cout << "Product of matrices: " << endl;
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<P; j++) {
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main(){
//     int N, M, P;
//
//     cout << "Enter number of rows and columns of first matrix: " << endl;
//     cin >> N >> M;
//
//     cout << "Enter number of columns of second matrix: " << endl;
//     cin >> P;
//
//     int a[100][100], b[100][100], c[100][100];
//
//     inputMatrix(a, N, M, 1);
//     inputMatrix(b, M, P, 2);
//
//     multiplyMatrices(a, b, c, N, M, P);
//     printMatrix(c, N, P);
//
//     return 0;
// }


// Problem 10
//
// void inputMatrix(int a[][100], int N){
//     cout << "Enter matrix elements: " << endl;
//
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<N; j++) {
//             cin >> a[i][j];
//         }
//     }
// }
//
// void transposeMatrix(int a[][100], int N){
//     for (int i=0; i<N; i++) {
//         for (int j=i+1; j<N; j++) {
//             int temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
//         }
//     }
// }
//
// void reverseRows(int a[][100], int N){
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<N/2; j++) {
//             int temp = a[i][j];
//             a[i][j] = a[i][N-j-1];
//             a[i][N-j-1] = temp;
//         }
//     }
// }
//
// void rotateMatrix(int a[][100], int N){
//     transposeMatrix(a, N);
//     reverseRows(a, N);
// }
//
// void printMatrix(int a[][100], int N){
//     cout << "Matrix after 90 degree rotation: " << endl;
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<N; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main(){
//     int N;
//     cout << "Enter size of matrix (N x N): " << endl;
//     cin >> N;
//
//     int a[100][100];
//
//     inputMatrix(a, N);
//     rotateMatrix(a, N);
//     printMatrix(a, N);
//
//     return 0;
// }


// Problem 11
//
// void inputVector(vector<int> &v, int N){
//     cout << "Enter " << N << " integers: " << endl;
//     for (int i=0; i<N; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
// }
//
// void printVector(vector<int> &v){
//     cout << "Vector elements: " << endl;
//     for (int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
//
// int main(){
//     int N;
//     cout << "Enter number of elements: " << endl;
//     cin >> N;
//
//     vector<int> v;
//     inputVector(v, N);
//     printVector(v);
//
//     return 0;
// }


// Problem 12
//
// void inputVector(vector<int> &v, int N){
//     cout << "Enter " << N << " integers: " << endl;
//     for (int i=0; i<N; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
// }
//
// void printVector(vector<int> &v, int &sum){
//     cout << "Vector elements: " << endl;
//     for (int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//         sum += v[i];  // accumulate sum here
//     }
//     cout << endl;
//     cout << "Sum of elements: " << sum << endl;
// }
//
// int main(){
//     int sum = 0;
//     int N;
//     cout << "Enter number of elements: " << endl;
//     cin >> N;
//
//     vector<int> v;
//     inputVector(v, N);
//     printVector(v, sum);
//
//     return 0;
// }


// Problem 13
//
// void inputVector(vector<int> &v, int N){
//     cout << "Enter " << N << " integers: " << endl;
//     for (int i=0; i<N; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
// }
//
// int findMaximum(vector<int> &v){
//     int maxVal = v[0];
//     for (int i=1; i<v.size(); i++) {
//         if (v[i] > maxVal) {
//             maxVal = v[i];
//         }
//     }
//     return maxVal;
// }
//
// int main(){
//     int N;
//     cout << "Enter number of elements: " << endl;
//     cin >> N;
//
//     vector<int> v;
//     inputVector(v, N);
//
//     int maxVal = findMaximum(v);
//     cout << "Maximum element: " << maxVal << endl;
//
//     return 0;
// }


// Problem 14
//
// void inputVector(vector<int> &v, int N){
//     cout << "Enter " << N << " integers: " << endl;
//     for (int i=0; i<N; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
// }
//
// int countOccurrences(vector<int> &v, int x){
//     int count = 0;
//     for (int i=0; i<v.size(); i++) {
//         if (v[i] == x) {
//             count++;
//         }
//     }
//     return count;
// }
//
// int main(){
//     int N, x;
//
//     cout << "Enter number of elements: " << endl;
//     cin >> N;
//
//     vector<int> v;
//     inputVector(v, N);
//
//     cout << "Enter the target value to count: " << endl;
//     cin >> x;
//
//     int count = countOccurrences(v, x);
//
//     cout << "Number of occurrences of " << x << ": " << count << endl;
//
//     return 0;
// }


// Problem 15
//
// void inputVector(vector<int> &v, int N){
//     cout << "Enter " << N << " integers: " << endl;
//     for (int i=0; i<N; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
// }
//
// void removeElement(vector<int> &v, int x){
//     vector<int> result;
//     for (int i=0; i<v.size(); i++) {
//         if (v[i] != x) {
//             result.push_back(v[i]);
//         }
//     }
//
//     v = result; // update original vector
// }
//
// void printVector(vector<int> &v){
//     cout << "Remaining elements: " << endl;
//     for (int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
//
// int main(){
//     int N, x;
//
//     cout << "Enter number of elements: " << endl;
//     cin >> N;
//
//     vector<int> v;
//     inputVector(v, N);
//
//     cout << "Enter the value to remove: " << endl;
//     cin >> x;
//
//     removeElement(v, x);
//     printVector(v);
//
//     return 0;
// }
