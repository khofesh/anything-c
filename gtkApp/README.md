https://developer.fedoraproject.org/tech/languages/c/gtk.html

dependencies:

```
sudo dnf install gtk3-devel
```

compile:

```
cc `pkg-config --cflags --libs gtk+-3.0` firstGtk.c
```
