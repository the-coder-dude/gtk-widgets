#ifndef DEMO_WINDOW_H
#define DEMO_WINDOW_H


#include <glib.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

#define DEMO_TYPE_WINDOW (demo_window_get_type())
G_DECLARE_FINAL_TYPE(DemoWindow, demo_window, DEMO, WINDOW, GtkWindow)

GtkWidget *demo_window_new(void);

G_END_DECLS

#endif /* DEMO_WINDOW_H */


