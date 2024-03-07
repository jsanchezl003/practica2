#include <iostream>

using namespace std;

int main() {
    char operacion;
    float num1, num2;

    cout << "Introduce la operación que deseas realizar (+, -, *, /): ";
    cin >> operacion;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    switch(operacion) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0.0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "División por cero no permitida.";
            break;
        default:
            cout << "Operación no válida.";
    }

    return 0;
}
