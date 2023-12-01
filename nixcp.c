#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    if(argc != 2){
        fprintf(stderr, "Invalid arguments.\n");

        return 1;
    }

    const char *machine = argv[1];

    if(strstr("cayley", machine)){
        system("sudo cp /home/alec/.config/nix/cayley/* /etc/nix/");
    }
    else if(strstr("cauchy", machine)) {
        system("sudo cp /home/alec/.config/nix/cauchy/* /etc/nix/");
    }
    else{
        fprintf(stderr, "Invalid arguments.\n");

        return 1;
    }

    return 0;
}
