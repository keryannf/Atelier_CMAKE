cmake_minimum_required(VERSION 3.10)
project(calculator C)

# Inclure le dossier des headers
include_directories(include)

# Créer la librairie statique à partir de calculator.c
add_library(liblib STATIC src/lib/calculator.c)

# Créer l’exécutable principal
add_executable(calculator src/main.c)

# Lier l’exécutable à la librairie
target_link_libraries(calculator liblib)

# Ajouter les tests
enable_testing()
add_test(t1 calculator add 2 3)
add_test(t2 calculator sub 3 -2)
add_test(t3 calculator mul 5 5)
add_test(t4 calculator div 1 5)
add_test(t5 src/calculator car 5)

