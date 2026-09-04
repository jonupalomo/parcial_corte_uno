#include <iostream>
// Juan Esteban Palomo Peralta (ALSE)
using namespace std;

struct Point {
    double x;
    double y;
};

Point calcularCentroide(Point puntos[], int n) {
    Point centroide = {0.0, 0.0};

    if (n <= 0) {
        return centroide;
    }
    double sumaX = 0.0;
    double sumaY = 0.0;
    for (int i = 0; i < n; i++) {
        sumaX += puntos[i].x;
        sumaY += puntos[i].y;
    }
    centroide.x = sumaX / n;
    centroide.y = sumaY / n;
    return centroide;
}
int main() {
    int n;
    cout << "Ingrese la cantidad de puntos: ";
    cin >> n;
    if (n <= 0) {
        cout << "La cantidad de puntos debe ser mayor a 0." << endl;
        return 1;
    }
    Point puntos[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese las coordenadas (x y) del punto " << (i + 1) << ": ";
        cin >> puntos[i].x >> puntos[i].y;
    }
    Point centroide = calcularCentroide(puntos, n);
    cout << "Resultado" << endl;
    cout << "El centroide es: (" << centroide.x << ", " << centroide.y << ")" << endl;
    return 0;
}