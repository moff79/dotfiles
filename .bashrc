#
# ~/.bashrc
#

export PATH=$PATH:~/.local/share/bin/statusbar
export PATH=$PATH:~/.local/share/bin/scripts


# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
PS1='[\u@\h \W]\$ '

exec zsh