#include <stdio.h>
#include <string.h>
#include <dirent.h>   /* For work with the directory*/

int main(int argc, char **argv)
{
    DIR *dr;
    struct dirent *dp;
    char filename [256];

    if ( argc < 2 )
        strcpy(filename, "."); /* The initial path */
    else
        strcpy(filename, argv[1]); /* The initial path */

    printf("\n%s\n", filename); /* Output of the initial path */
    dr=opendir(filename);

    while( (dp=readdir(dr)) != NULL )
            printf("%s\n", dp->d_name); /* Line output of files in the specified path */

    closedir(dr);
    return 0;
}
