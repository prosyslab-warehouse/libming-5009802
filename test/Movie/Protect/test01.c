#include <libming.h>

static char *test = "test01";

main()
{
SWFMovie m;

m= newSWFMovie();

SWFMovie_protect(m,NULL);

SWFMovie_save(m,"test01.swf");

return 0;
}