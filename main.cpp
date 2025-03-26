#include <iostream>
#include <list>
#include <map>
#include "publicacion.h"
#include "investigador.h"

std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){ 
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void parte_a(){
	std::string DOI = "10.1234/abc123";
	std::string titulo = "Fundamentos de POO";
	DTFecha f = new DTFecha(15,5,2023);
	ArticuloRevista a = new ArticuloRevista("Programación Avanzada", "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");
	a.setDOI(DOI);
	a.setTitulo(titulo);
	a.setFecha(f);
	guardarPublicacion(a);

	std::string DOI2 = "10.4567/jkl012";
	std::string titulo2 = "Utilidad de diagramas UML";
	DTFecha f2 = new DTFecha(10,2,2024);
	ArticuloRevista a2 = new ArticuloRevista("Modelado de Software", "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.");
	a2.setDOI(DOI2);
	a2.setTitulo(titulo2);
	a2.setFecha(f2);
	guardarPublicacion(a2);
	
}

void parte_b(){
	std::string DOI1 = "10.2345/def456";
	std::string titulo1 = "Patrones de Diseno en c++";
	DTFecha f1 = new DTFecha(20,8,2022);
	std:set<std::string> palabras1;
	palabras.insert("Diseno");
	palabras.insert("OOP");
	palabras.insert("Class")
	Libro b1 = new Libro("Software Design", palabras1);
	a.setDOI(DOI1);
	a.setTitulo(titulo1);
	a.setFecha(f1);
	guardarPublicacion(b1);

	std::string DOI2 = "10.5678/mno345";
	std::string titulo2 = "Guia de UML";
	DTFecha f2 = new DTFecha(20,8,2022);
	std:set<std::string> palabras2;
	palabras.insert("Diagramas");
	palabras.insert("UML");
	palabras.insert("Software")
	palabras.insert("Modelado")
	Libro b2 = new Libro("IEEE", palabras2);
	a.setDOI(DOI2);
	a.setTitulo(titulo2);
	a.setFecha(f2);
	guardarPublicacion(b2);
}

void parte_c(){
	std::string DOI = "10.3456/ghi789";
	std::string titulo = "Diagramas para Principiantes" ;
	DTFecha f = new DTFecha(20,10,2024);
	PaginaWeb pw = new PaginaWeb("www.umlparaprincipiantes.com","En esta pagina web se presenta una gui completa sobre los
diagramas UML, abordando los diagramas de casos de uso,
de clases, de secuencia y de actividades." )
	a.setDOI(DOI);
	a.setTitulo(titulo);
	a.setFecha(f);
	guardarPublicacion(pw);
}

void parte_d(){
	int i = 0;
	Publicaciones aux
	while (i < publicaciones.size()){
		aux = publicaciones.front();
		aux.getDT()
		push_back(aux);
		publicaciones.remove_front()
		cout<< aux;
		i++;
	}
}

void parte_e(){
	Investigador e1 = new Investigador("0000-0003-1234-5678", "Carla Olivieri", "Universidad de la Republica");
	Investigador e1 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");
}

void parte_f(){
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}


int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}

