Iterator is a behavior design pattern that lets you traverse elements of a collection without 
exposing the details of traversing.

Advantages:
    1.You can hide the implementation of traverse a complex data structure(Single Responsibility Principle).
    2.You can implement new types of data structures and Iterators without breaking the existing code (Open/Closed Principle)
Disadvantages:
    1.Iterator is not appropriate to traverse some simple data structures(This will just add code complexity)

Common Use:
    When you want to traverse some complex data structure and hide the details of traversing from the client.

Example: (my c++ code)
    This is a whole program illustrated the display of TV/Songs. The Iterator is used to traverse the playlist
    or library.