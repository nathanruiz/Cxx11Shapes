# Cxx11Shapes #
After writing a few games using SDL, I found I was always writing a set of
classes to manage various shapes. I attempted to find a library online, but
unfortunately, found most were far too complicated for my normal use. So
instead, I've decided to write my own implementation.

To allow users of the library to get the most flexibility out of it, templates
are used to define the types for storing dimensions and coordinates. Due to the
use of templates, the entire library is header-only.

I've attempted to use as many C++11 features as possible to make life easier for
users. Feel free to create an issue or send a pull request if there is a feature
you would like. Good luck!
