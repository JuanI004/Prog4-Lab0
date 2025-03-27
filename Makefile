# Nombre del ejecutable
EXEC = programa

# Compilador y banderas
CXX = g++
CXXFLAGS = -std=c++98
# Archivos fuente y objetos
SRC = main.cpp publicacion.cpp articuloRevista.cpp libro.cpp paginaWeb.cpp investigador.cpp DTFecha.cpp DTRefer.cpp
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
