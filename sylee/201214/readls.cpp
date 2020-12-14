#include <dirent.h>
#include <fcntl.h>
#include <iostream>
#include <list>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

void read_ls(list<string> &ls_list);

int main(int argc, char const *argv[]) {
    list<string> ls;
    list<string>::iterator it;
    read_ls(ls);
    for (it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}

void read_ls(list<string> &ls_list) {
    struct stat fileInfo;
    DIR *dirp;
    struct dirent *dirInfo;

    dirp = opendir("./Practices");
    while ((dirInfo = readdir(dirp)) != NULL) {
        if (dirInfo->d_name[0] == '.')
            ;
        else
            ls_list.push_back(dirInfo->d_name);
    }
    closedir(dirp);
}
