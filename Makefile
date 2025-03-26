# Nombre del ejecutable
EXEC = programa

# Compilador y banderas
CXX = g++
CXXFLAGS = -std=c++98
# Archivos fuente y objetos
SRC = main.cpp Publicacion.cpp ArticuloRevista.cpp Libro.cpp PaginaWeb.cpp Investigador.cpp DTFecha.cpp DTRefer.cpp
OBJ = $(SRC:.cpp=.o)

# Regla principal: Compilar el programa
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

# Regla para compilar archivos .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(OBJ) $(EXEC)
