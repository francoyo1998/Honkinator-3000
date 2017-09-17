#include <cstdio>
#include <cstring>
#include <cstdlib>
void honk(const char* midloc, const char* wavloc)
{
#ifdef _WIN32
	char* cmd = (char*)malloc(strlen("fluidsynth.exe honk.sf2 -F ")
#else
	char* cmd = (char*)malloc(strlen("fluidsynth honk.sf2 -F ")
#endif
				 +strlen(wavloc)+strlen(midloc)+8);
	strcpy(cmd,"fluidsynth honk.sf2 -F ");
	strcat(cmd,wavloc);
	strcat(cmd," ");
	strcat(cmd,midloc);
	system(cmd);
	return;
}
