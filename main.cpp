#include <iostream>

using namespace std;


int main() {
    int porcentajepropina;
    int preciototal;
    int recargoporcubierto;
    int valordelacomida;
    // Entrada
    // salida
    cout << "Valor del Plato" << endl;
    cin >> valordelacomida;
    cout << "Recargo por Cubierto" << endl;
    cin >> recargoporcubierto;
    cout << "porcentaje Propina" << endl;
    cin >> porcentajepropina;
    preciototal = valordelacomida+(recargoporcubierto*valordelacomida)/100+(porcentajepropina*valordelacomida)/100;
    cout << "El Precio Total a pagar es " << preciototal << endl;
    return 0;
}