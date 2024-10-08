#include "Revista.h"
#include <iostream>

Revista::Revista(std::string nombre, std::string autor, std::string isbn,
 std::string numeroEdicion, std::string mesPublicacion) : MaterialBibliografico (nombre,autor,isbn),
    nombre(nombre), isbn(isbn),autor(autor),
     numeroEdicion(numeroEdicion), mesPublicacion(mesPublicacion){
        this->idUsuario = "S/U";
        this->prestado = false;
     }
void Revista::setIdUsuario(std::string id){
        this->idUsuario = id;
}
std::string Revista::getIdUsuario(){
    return this->idUsuario;
}
std::string Revista::getNombre(){
    return this -> nombre;
}
std::string Revista::getAutor(){
    return this ->autor;
}
std::string Revista::getIsbn(){
    return this ->isbn;
}
std::string  Revista::getNumeroEdicion(){
    return this ->numeroEdicion;
}
std::string Revista::getMesPublicacion(){
    return this ->mesPublicacion;
}
std::string Revista::mostrarInformacion(){
    
    std::string texto, estado;
    texto+=MaterialBibliografico::mostrarInformacion();
    return  texto + "\nNumero de Edicion: "
     + numeroEdicion + "\nMes de Publicacion: " +  mesPublicacion+ "\n--------------------------------------\n";

}


Revista::~Revista(){}
;