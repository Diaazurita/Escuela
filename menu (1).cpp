#include <iostream>

int main() {
    const int numProductos = 10;
    double costos[numProductos];
    double total = 0.0;

    // Captura de datos
    std::cout << "Ingresa los costos de los 10 productos:" << std::endl;
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "Producto " << i + 1 << ": ";
        std::cin >> costos[i];

        // Asegurarse de que el costo sea un valor positivo
        while (costos[i] < 0) {
            std::cout << "Ingresa un valor válido (mayor o igual a 0): ";
            std::cin >> costos[i];
        }

        // Sumar al total
        total += costos[i];
    }

    // Imprimir el listado de costos
    std::cout << "\nListado de costos:" << std::endl;
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "Producto " << i + 1 << ": $" << costos[i] << std::endl;
    }

    // Imprimir el total
    std::cout << "\nTotal de la compra: $" << total << std::endl;

    return 0;	}

