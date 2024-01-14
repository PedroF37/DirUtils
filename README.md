# DirUtils
## Biblioteca de manipulação de diretórios para meus projetos de aprendizado em C

* Biblioteca criada com o comando: `clang -shared -fPIC -o libdirutils.so dirutils.c`
* Localização dos arquivos no meu sistema para usar com meus projetos:
* Arquivo .so `/usr/local/lib64/`
* Arquivo .h `/usr/local/include/`
* Flag usada na compilação dos projetos que usam a bibloteca: `-ldirutils`
* Ex: `$ clang -Wall -Wextra --pedantic -std=c99 -ldirutils -o arquivo arquivo.c`
