#
# ~/.bash_profile
#

export PATH=$PATH:~/.local/share/bin/statusbar

[[ -f ~/.bashrc ]] && . ~/.bashrc

if [[ -z $DISPLAY ]] && [[ $(tty) = /dev/tty1 ]]; then
startx
fi
