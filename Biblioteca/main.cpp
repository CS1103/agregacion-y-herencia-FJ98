#include <iostream>
#include "Biblioteca.h"
#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto Bib1 = new Biblioteca();
    Volumen* rev1 = new Revista("ojo",5);
    Volumen* rev2 = new Revista("hola",10);
    Volumen* lib1 = new Libro("Mate_1",20);
    Volumen* lib2 = new Libro("C++",2);
    Bib1->incluir(rev1);
    Bib1->incluir(rev2);
    Bib1->incluir(lib1);
    Bib1->incluir(lib2);
    for(int i = 0 ; i < 4 ; i++){
        Bib1->mostrarBiblioteca();
    }
    delete Bib1;
    /* Explico en la clase, no se donde ponerlo, pero es un metodo de verificacion
    Volumen *v = new Revista("T");
    Libro* var = dynamic_cast<Libro*>(v);
    if (var!= nullptr){
        var->mostrar();
    }
     */
    return 0;
}