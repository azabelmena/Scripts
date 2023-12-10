#!/usr/bin/env bash

cd "$HOME/.vim/"                            #2> /dev/null
mkdir "$HOME/.vim/pack/"                    #2> /dev/null
mkdir "$HOME/.vim/pack/plugins/"            #2> /dev/null
mkdir "$HOME/.vim/pack/plugins/start/"      #2> /dev/null

cd "$HOME/.vim/pack/plugins/start/"         #2> /dev/null

git clone https://github.com/preservim/nerdcommenter.git
git clone https://github.com/vim-syntastic/syntastic.git
git clone https://github.com/SirVer/ultisnips.git
git clone https://github.com/vim-airline/vim-airline.git
git clone https://github.com/LnL7/vim-nix.git
git clone https://github.com/lervag/vimtex.git

cd "$HOME"                                  #2> /dev/null
