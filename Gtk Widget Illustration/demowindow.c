#include "demowindow.h"

struct _DemoWindow {
	GtkWindow parent;
};

G_DECLARE_TYPE(DemoWindow, demo_window, GTK_TYPE_WINDOW)

static void
demo_window_init(DemoWindow *window){
	gtk_widget_init_template(GTK_WIDGET(window));
}

static void
demo_window_init(DemoWindowClass *klass){
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS(klass);

	gtk_window_class_set_template_from_resource(widget_class, "/demo/demowindow.ui");
}

GtkWidget *demo_window_new(void){
	return DEMO_WINDOW(g_object_new(DEMO_TYPE_WINDOW, NULL));
} 
