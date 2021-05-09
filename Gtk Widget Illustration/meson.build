project('demo', 'c')

glib = dependency('glib-2.0')
gtk3 = dependency('gtk+-3.0')

SOURCES = [
	'demowindow.c',
	'demowindow.h',
	'main.c',
]

gnome = import('gnome')
resources = gnome.compile_resources('resources',
    'demo.gresources.xml',
    source_dir : '.',
    c_name : 'demo')
SOURCES += resources

executable('demo',
	SOURCES,
	dependencies: [glib, gtk3])

