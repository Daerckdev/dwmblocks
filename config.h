//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-pacpackages",               0,             1},
	//{"",	"sb-price btc Bitcoin 💰",   9000,            21},
	{"",	"sb-internet",                  8,             2},
	{"",	"sb-nettraf",                   2,            16},
	{"",	"sb-music",                     0,            11},
	{"",	"sb-memory",                   10,             3},
	//{"",	"sb-cpubars",                  10,             4},
	//{"",	"sb-cpu",                      10,            18},
	//{"",	"sb-backlight",               180,             4},
	{"",	"sb-volume",                    0,             5},
	//{"",	"sb-battery",                   5,             6},
	//{"⌨", "sb-kbselect",                  0,            30},
	{"",	"sb-torrent",	               20,             9},
	{"",	"sb-moonphase",             18000,             7},
	{"",	"sb-clock",                     1,             8},
	// {"",	"sb-tasks",	10,	26},
	// {"",	"sb-news",		0,	6},
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	// {"",	"sb-forecast",	18000,	5},
	// {"",	"sb-mailbox",	180,	12},
	//{"",	"sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
