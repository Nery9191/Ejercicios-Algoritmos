#include <iostream>
#include <conio.h>

enum Categoria { A, B, C, D, F };

int main() {
    const int LIMITE_A = 90;
    const int LIMITE_B = 80;
    const int LIMITE_C = 70;
    const int LIMITE_D = 60;
    const int LIMITE_F = 0;

    int valor;
    std::cout << "Ingresa una calficacion entre 0 y 100: ";
    std::cin >> valor;

    Categoria categoria;                                  	

    if (valor >= LIMITE_A) {
        categoria = A;
    } else if (valor >= LIMITE_B) {
        categoria = B;
    } else if (valor >= LIMITE_C) {
        categoria = C;
    } else if (valor >= LIMITE_D) {
        categoria = D;
    } else {
        categoria = F;
    }

    switch (categoria) {
        case A:
            std::cout << "SU CALIFICACION ES: A EXELENTE TRABAJO" << std::endl;
            break;
        case B:
            std::cout << "SU CALIFICACION ES: B BUEN TRABAJO" << std::endl;
            break;
        case C:
            std::cout << "SU CALIFICACION ES: C NECESITAS MEJORAR" << std::endl;
            break;
        case D:
            std::cout << "SU CALIFICACION ES: D DEBES ESFORZARTE MAS" << std::endl;
            break;
        case F:
            std::cout << "SU CALIFICACION ES: F NO HAS APROBAO" << std::endl;
            break;
    }


std::cout << "presione una tecla para salir..." ;
getch();
    return 0;

}
