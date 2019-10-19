# notetaking
<br />
To install: <br />
$ make <br />
$ sudo cp notetaking /usr/local/bin/ <br />
$ sudo chown root:users /usr/local/bin/notetaking <br />
<br />
To use: <br />
To see options <br />
$ notetaking <br />
<br />
Example usage: <br />
To run with vi editor, the file name test1, suffix .txt, and put in directory $HOME/.local/share/notetaker <br />
$ notetaking test1 <br />
<br />
To run with vi editor, the file name test1, suffix .py, and put in directory $HOME/.local/share/notetaker <br />
$ notetaking test1 -s py <br />
<br />
To run with nano editor, the file name test1, suffix .txt, and put in directory $HOME/.local/share/notetaker <br />
$ notetaking test1 -e nano <br />
<br />
To run with nano editor, the file name test1, suffix .c, and put in directory /home/ground/programming/c/test1 <br />
$ notetaking test1 -e nano -d /home/ground/programming/c/test1 -s c <br />
