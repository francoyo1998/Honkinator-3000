#ifndef _HONK
#define _HONK
#include <cstdio>
#include <cstring>
#include <cstdlib>
void honk(const char* midloc, const char* wavloc)
{
	char* cmd = (char*)malloc(strlen("timidity -c tim.cfg -Ow -o")
				 +strlen(wavloc)+strlen(midloc)+12);
	strcpy(cmd,"timidity -c tim.cfg -Ow -o\"");
	strcat(cmd,wavloc);
	strcat(cmd,"\" \"");
	strcat(cmd,midloc);
	strcat(cmd,"\"");
	system(cmd);
	free(cmd);
	return;
}
#endif