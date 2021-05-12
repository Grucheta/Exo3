cmake_minimum_required(VERSION 3.19)
project(Exo3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Exo3 main.cpp Graphique.cpp Graphique.h Ligne.cpp Ligne.h Rectangle.cpp Rectangle.h Groupe.cpp Groupe.h Texte.cpp Texte.h Composant.cpp Composant.h GraphiqueGenerator/GeneratorSVG.cpp GraphiqueGenerator/GeneratorSVG.h GraphiqueGenerator/GeneratorPNG.cpp GraphiqueGenerator/GeneratorPNG.h GraphiqueGenerator/GeneratorStrategy.cpp GraphiqueGenerator/GeneratorStrategy.h)