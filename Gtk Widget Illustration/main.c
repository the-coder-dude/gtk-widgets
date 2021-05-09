#include <gtk/gtk.h>

#include "demowindow.h"

gint
main(gint argc, gchar *argv[]) {
	GtkWidget *window = NULL;

	gtk_init(&argc, &argv);

	window = demo_window_new();
	gtk_widget_show_all(window);

	gtk_main();

	return 0;
}

