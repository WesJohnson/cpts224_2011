#include <stdio.h>
#include <string.h>
#include "cma.h"

#define MSIZE 1024*16
unsigned char mem[MSIZE];

char cat[]="\n\
	           .'\\   /`.\n\
                 .'.-.`-'.-.`.\n\
            ..._:   .-. .-.   :_...\n\
          .'    '-.(o ) (o ).-'    `.\n\
         :  _    _ _`~(_)~`_ _    _  :\n\
        :  /:   ' .-=_   _=-. `   ;\\  :\n\
        :   :|-.._  '     `  _..-|:   :\n\
         :   `:| |`:-:-.-:-:'| |:'   :\n\
          `.   `.| | | | | | |.'   .'\n\
            `.   `-:_| | |_:-'   .'\n\
              `-._   ````    _.-'\n\
                  ``-------''  \n";

int main()
{
	char* string;
	class_memory(mem,MSIZE);

	string = (char*)class_malloc(sizeof(cat));
	strcpy(string,cat);

	printf("%s\n",string);

	class_free(string);
	
	class_stats();

	return 0;
}
