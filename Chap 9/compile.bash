g++ ./main.cpp Time.cpp

## Or

g++ -c Time.cpp -o time.o
g++ -c main.cpp -o main.o
g++ time.o main.o -o program ## Linker is used to combine multiple object codes into a single executable output