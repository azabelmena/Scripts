#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    if(argc != 2){
        fprintf(stderr, "Invalid arguments.\n");

        return 1;
    }


    if(strstr("cayley", argv[1])){
        system("sudo cp /home/alec/.config/nixos/cayley/* /etc/nixos/");
        /*system("sudo cp /home/alec/.config/nixos/cayley/configuration.nix /etc/nixos/configuration.nix");*/
        /*system("sudo cp /home/alec/.config/nixos/cayley/nvidia.nix /etc/nixos/nvidia.nix");*/
        /*system("sudo cp /home/alec/.config/nixos/cayley/packages.nix /etc/nixos/packages.nix");*/
    }
    else if(strstr("cauchy", argv[1])) {
        system("sudo cp /home/alec/.config/nixos/cauchy/* /etc/nixos/");

        /*system("sudo cp /home/alec/.config/nixos/cauchy.g/configuration.nix /etc/nixos/configuration.nix");*/
        /*system("sudo cp /home/alec/.config/nixos/cauchy.g/nvidia.nix /etc/nixos/nvidia.nix");*/
        /*system("sudo cp /home/alec/.config/nixos/cauchy.g/packages.nix /etc/nixos/packages.nix");*/
    }
    else{
        fprintf(stderr, "Invalid arguments.\n");

        return 1;
    }

    return 0;
}
