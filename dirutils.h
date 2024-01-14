#ifndef _DIRUTILS_
#define _DIRUTILS_


#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>


/* Cuida de criar um diretório, com as permissões
 * de umask do sistema. Retorna true tendo sucesso
 * false dando erro */
bool is_directory_created(char *dirname);

/* Cuida de verificar se diretório é válido */
bool is_valid_directory(char *dirname);

/* Cuida de verificar se diretório especifcado é . ou .. */
bool is_dot_directory(char *dirname);


#endif
