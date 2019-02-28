#pragma once

#include <gtkmm/drawingarea.h>

namespace Magenta {

class Surface : public Gtk::DrawingArea
{
public:
  Surface();
  virtual ~Surface();

protected:
  bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
};

} // namespace Magenta