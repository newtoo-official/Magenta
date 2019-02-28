#include <gtkmm.h>

int magenta_execute_target(int argc, const char *argv[])
{
  char **argv_ = (char**)argv;

  auto app = Gtk::Application::create(argc, argv_, "ru.newtoo.magenta");

  Gtk::Window window;
  window.set_default_size(660, 440);

  return app->run(window);
}