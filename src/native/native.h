#ifdef _WIN32
/* ... */
#elif _OSX
/* ... */
#else
#include "linux-gtk/linux_gtk.h"
#endif

int magenta_execute(int argc, const char *argv[]) {
  return magenta_execute_target(argc, argv);
}