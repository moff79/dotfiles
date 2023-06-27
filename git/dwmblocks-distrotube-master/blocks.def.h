//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
    {" 🐧 ", "/home/mof/.local/share/bin/scripts/kernel",	 3600,		          0},

	{" 🔺 ", "/home/mof/.local/share/bin/scripts/upt",		 60,		          2},

	{" 📦 ", "/home/mof/.local/share/bin/scripts/pacupdate",  900,		          0},
	
	{" 💻 ", "/home/mof/.local/share/bin/scripts/memory",	 6,		              1},

	{" 🔊 ", "/home/mof/.local/share/bin/scripts/volume",     1,		              0},

	{" 🕑 ", "/home/mof/.local/share/bin/scripts/clock",	     60,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
