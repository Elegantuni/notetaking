# notetaking

To install:
$ make
$ sudo cp notetaking /usr/local/bin/
$ sudo chown root:users /usr/local/bin/notetaking

To use:
To see options
$ notetaking

Example usage:
To run with vi editor, the file name test1, suffix .txt, and put in directory $HOME/.local/share/notetaker
$ notetaking test1

To run with vi editor, the file name test1, suffix .py, and put in directory $HOME/.local/share/notetaker
$ notetaking test1 -s py

To run with nano editor, the file name test1, suffix .txt, and put in directory $HOME/.local/share/notetaker
$ notetaking test1 -e nano

To run with nano editor, the file name test1, suffix .c, and put in directory /home/ground/programming/c/test1
$ notetaking test1 -e nano -d /home/ground/programming/c/test1 -s c
