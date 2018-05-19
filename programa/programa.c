#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main(int argc, char *argv[])
{
	/* Setting the l10n environment */
	setlocale (LC_ALL, "");
	bindtextdomain ("programa", "/usr/share/locale/");
	textdomain("programa");

	if(argc == 2) {
		printf(_("Hello %s\n"), argv[1]);
	} else {		
		printf(_("Hello world\n"));
	}
	return (0);
}