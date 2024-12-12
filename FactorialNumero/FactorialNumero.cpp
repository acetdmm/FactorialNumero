#include <iostream>
using namespace std;
// Función para calcular el factorial de un número
int factorial(int n) {
if (n == 0 || n == 1) {
return 1; // Retorna 1 si el número es 0 o 1
} else {
return n * factorial(n - 1); // Retorna el número multiplicado por el factorial del número anterior
}
}
int main() {
int num = 5; // Número para calcular el factorial
int resultado = factorial(num); // Llama a la función factorial con el número como argumento
cout << "El factorial de " << num << " es: " << resultado << endl; // Imprime el resultado del factorial
return 0;
}