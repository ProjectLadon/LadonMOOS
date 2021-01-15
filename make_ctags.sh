#!/bin/sh
/bin/cat `/usr/bin/find $@ -name '*.d'` | /bin/sed -e 's/[\\ ]/\n/g' | /bin/sed -e '/^$/d' -e '/\.o:[ \t]*$/d' | /usr/bin/ctags -L - --c++-kinds=+p --fields=+iaS --extra=+q
