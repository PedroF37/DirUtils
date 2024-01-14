#include "dirutils.h"


bool is_directory_created(char *dirname)
{
    mode_t mask = umask(0);
    umask(mask);

    if (mkdir(dirname, 0777 - mask) == -1)
    {
        umask(mask);
        return(false);
    }

    umask(mask);
    return(true);
}


bool is_valid_directory(char *dirname)
{
    DIR *dhandle;
    if ((dhandle = opendir(dirname)) == NULL)
    {
        return(false);
    }

    closedir(dhandle);
    return(true);
}


bool is_dot_directory(char *dirname)
{
    if (strcmp(dirname, ".") != 0 && strcmp(dirname, "..") != 0)
    {
        return(false);
    }

    return(true);
}
