#include <list>
#include <map>
#include <iostream>
#include "publicacion.hh"
#include "investigador.hh"
#include "articuloRevista.hh"
#include "libro.hh"
#include "paginaWeb.hh"
#include "DTFecha.hh"
#include "DTRefer.hh"



std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){ 
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
};
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
};

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
};

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
};

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
};

void parte_a(){
	std::string DOI = "10.1234/abc123";
	std::string titulo = "Fundamentos de POO";
	articuloRevista *a = new articuloRevista("Programación Avanzada", "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");
	a->setDOI(DOI);
	a->setTitulo(titulo);
	a->setFecha(DTFecha (15,5,2023));
	coleccion_guardarPublicacion(a);

	std::string DOI2 = "10.4567/jkl012";
	std::string titulo2 = "Utilidad de diagramas UML";
	articuloRevista *a2 = new articuloRevista("Modelado de Software", "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.");
	a2->setDOI(DOI2);
	a2->setTitulo(titulo2);
	a2->setFecha(DTFecha (10,2,2024));
	coleccion_guardarPublicacion(a2);
};

void parte_b(){
	std::string DOI1 = "10.2345/def456";
	std::string titulo1 = "Patrones de Diseno en c++";
	std::set<std::string> palabras1;
	palabras1.insert("Diseno");
	palabras1.insert("OOP");
	palabras1.insert("Class");
	libro *b1 = new libro("Software Design", palabras1);
	b1->setDOI(DOI1);
	b1->setTitulo(titulo1);
	b1->setFecha(DTFecha(20,8,2022));
	coleccion_guardarPublicacion(b1);

	std::string DOI2 = "10.5678/mno345";
	std::string titulo2 = "Guia de UML";
	std::set<std::string> palabras2;
	palabras2.insert("Diagramas");
	palabras2.insert("UML");
	palabras2.insert("Software");
	palabras2.insert("Modelado");
	libro *b2 = new libro("IEEE", palabras2);
	b2->setDOI(DOI2);
	b2->setTitulo(titulo2);
	b2->setFecha(DTFecha(20,8,2022));
	coleccion_guardarPublicacion(b2);
};

void parte_c(){
	std::string DOI = "10.3456/ghi789";
	std::string titulo = "Diagramas para Principiantes" ;
	PaginaWeb *pw = new PaginaWeb("www.umlparaprincipiantes.com", "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.");
	pw->setDOI(DOI);
	pw->setTitulo(titulo);
	pw->setFecha(DTFecha(20,10,2024));
	coleccion_guardarPublicacion(pw);
};

void parte_d(){
	int i = 0;
	Publicacion* aux;
	while (i < publicaciones.size()){
		aux = publicaciones.front();
		std::cout<< aux->getDT() << std::endl;
		publicaciones.push_back(aux);
		publicaciones.pop_front();
		i++;
	}
	
};

void parte_e(){
	Investigador *e1 = new Investigador("0000-0003-1234-5678", "Carla Olivieri", "Universidad de la Republica");
	Investigador *e2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");
	coleccion_guardarInvestigador(e1);
	coleccion_guardarInvestigador(e2);
};

void parte_f(){
	Investigador *e1 = coleccion_getInvestigador("0000-0003-1234-5678");
	std::cout<< e1->toString() << std::endl;
	Investigador *e2 = coleccion_getInvestigador("0000-0001-8765-4321");
	std::cout<< e2->toString() << std::endl;

	/*
	for(Investigador it = inv.begin(); it!=inv.end(), ++it){
		std::cout<< it.toString() << std::endl;
	}
	*/
	/*
	for(int it = 0; it < inv.end(), ++it){
		std::cout<< it.toString() << std::endl;
	}
	/*
	*/
};

void parte_g(){
	std::string carla="0000-0003-1234-5678";
	std::string alberto="0000-0001-8765-4321";
	coleccion_getInvestigador(carla)->agregarPublicacion(coleccion_getPublicacion("10.1234/abc123"));
	coleccion_getPublicacion("10.1234/abc123")->agregarAutor(coleccion_getInvestigador(carla));

	coleccion_getInvestigador(carla)->agregarPublicacion(coleccion_getPublicacion("10.4567/jkl012"));
	coleccion_getPublicacion("10.4567/jkl012")->agregarAutor(coleccion_getInvestigador(carla));

	coleccion_getInvestigador(carla)->agregarPublicacion(coleccion_getPublicacion("10.5678/mno345"));
	coleccion_getPublicacion("10.5678/mno345")->agregarAutor(coleccion_getInvestigador(carla));

	coleccion_getInvestigador(carla)->agregarPublicacion(coleccion_getPublicacion("10.3456/ghi789"));
	coleccion_getPublicacion("10.3456/ghi789")->agregarAutor(coleccion_getInvestigador(carla));

	coleccion_getInvestigador(alberto)->agregarPublicacion(coleccion_getPublicacion("10.1234/abc123"));
	coleccion_getPublicacion("10.1234/abc123")->agregarAutor(coleccion_getInvestigador(alberto));

	coleccion_getInvestigador(alberto)->agregarPublicacion(coleccion_getPublicacion("10.2345/def456"));
	coleccion_getPublicacion("10.2345/def456")->agregarAutor(coleccion_getInvestigador(alberto));
	
	coleccion_getInvestigador(alberto)->agregarPublicacion(coleccion_getPublicacion("10.4567/jkl012"));
	coleccion_getPublicacion("10.4567/jkl012")->agregarAutor(coleccion_getInvestigador(alberto));
	
};

void parte_h(){
	Investigador carla = *coleccion_getInvestigador("0000-0003-1234-5678");
	
	std::set<std::string> pub = carla.listarPublicaciones(DTFecha(10,12,2023),"UML");
	std::set<std::string>::iterator it;
	for(it = pub.begin(); it != pub.end(); ++it){
		std::cout<< coleccion_getPublicacion(*it)->getDT() << std::endl;
	}
};

void parte_i(){
    Publicacion* pub = coleccion_getPublicacion("10.4567/jkl012"); 	
	std::string doi=pub->getDOI();
	std::list<Investigador*>::iterator it;
	for(it = investigadores.begin(); it != investigadores.end(); ++it) {
		(*it)->getPublicaciones().erase(doi);
	}
	coleccion_eliminarPublicacion(pub);
	//delete pub;
}
	

void parte_j(){
	Investigador carla = *coleccion_getInvestigador("0000-0003-1234-5678");
	std::set<std::string> pub = carla.listarPublicaciones(DTFecha(1,1,2020),"UML");
	std::set<std::string>::iterator it;
	for(it = pub.begin(); it != pub.end(); ++it){
		if (coleccion_getPublicacion(*it) != NULL){
			std::cout<< coleccion_getPublicacion(*it)->getDT() << std::endl;
		}
	}
};

void parte_k(){
	int i = 0;
	Publicacion* aux;
	while (i < publicaciones.size()){
		aux = publicaciones.front();
		std::cout<< aux->getDT() << std::endl;
		publicaciones.push_back(aux);
		publicaciones.pop_front();
		i++;
	}
};

void cleanUp() {
    for(std::list<Publicacion*>::iterator it = publicaciones.begin(); 
        it != publicaciones.end(); ++it) {
        delete *it;
    }
    publicaciones.clear();
    map_publicaciones.clear();

    for(std::list<Investigador*>::iterator it = investigadores.begin(); 
        it != investigadores.end(); ++it) {
        delete *it;
    }
    investigadores.clear();
    map_investigadores.clear();
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
};
