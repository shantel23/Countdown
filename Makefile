MyProject : countdown_rafael2k.o countdown_rafael2k.c   
    gcc countdown_rafael2k.o -o countdown_rafael2k
    ./a.exe

MyProject : countdown_rafael2k.c
    gcc -c countdown_rafael2k.c -o countdown_rafael2k.o

installemsdk:
    cd .. && git clone https://github.com/emscripten-core/emsdk.git
    cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc countdown_rafael2k.c -s WASM=1 -o pge.html
    npm i http-server -g

runserver:
    cd ../emrun pge.html

