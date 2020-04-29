#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int isdir(const char *path)
{
    struct stat s;
    stat(path, &s);
    return S_ISDIR(s.st_mode);
}

void directoriesRemover(const char *path)
{
    DIR *d = opendir(path);
    struct dirent *file;
    char fullpath[5000];
    
    while((file = readdir(d)) != NULL )
    {
           sprintf(fullpath, "%s/%s", path, file->d_name);
           if(strcmp(file->d_name, ".")!=0&&strcmp(file->d_name, "..")!=0&&isdir(fullpath))
                rmdir(fullpath);
    }
    closedir(d);
}
