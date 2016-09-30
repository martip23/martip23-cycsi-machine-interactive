Cycsi: Machine Class
####################

The ``Machine`` class is a wrapper around all of the internal components
of the machine. The application ``main`` function will instantiate a
Machine object, call the ``load`` method to read the program into the
instruction memory, and then call the `run` method to execute that program.
The machine will track the number of cycles executed before reaching an
error condition of processing a "halt" instruction, and return that to the
caller of the ``run`` method.

If the machine fails for any reason, the cycle count will be returned
as a negative number. 

Here is the hspecification for this class:

..  literalinclude::    ../include/Machine.h
    :linenos:
    :language: c

..  vim:filetype rst spell:
