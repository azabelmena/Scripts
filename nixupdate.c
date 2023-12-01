#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv){

    if(argc != 2){
        fprintf(stdout, "Invalid Arguments!\n");

        return 1;
    }

    const char *machine = argv[1];

    if(strstr("cayley", machine)){
        system("sudo nixos-rebuild --upgrade --flake ~/.config/#cayley switch");
    }
    else if(strstr("cauchy", machine)){
        system("sudo nixos-rebuild --upgrade --flake ~/.config/#cauchy switch");
    }
    else{
        return 1;
    }

    return 0;
}
