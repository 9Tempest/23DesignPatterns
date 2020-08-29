Decorator design pattern lets you add new functionalities to objects by placing these objects inside
special wrapper objects that contain the functionalities.

Advantages:
    1.We can assign extra functionalities to existing objects without breaking the existing code at runtime.
    2.We can extend a object's functionalities without making a new subclass.
    3.we can combine several functionalities by wrapping an object into multiple decorators.
    4.SRP(Single Responsibility Principle): We can divide a large functionality into multiple smaller decorators.

Disadvantages:
    1.It is hard to remove one specific functionality from the wrapped object.(i.e. If we have a hamburger, and 
    if we have already added two steak, three tomato..., it will be difficult to remove one specific tomato)
    2.Decorator design pattern may add some classes that are similar to each other under some circumstances.

Common Use:
    1.When adding new functionalities by inheritance is very awkward(i.e. extending one object's functionalities, if we Use
      inheritance, there will be many combinations, which may lead us to add many classes).
    2.When we want to extend one object's functionalities at runtime.

Example:
    This program describes that we have a hamburger, and we can add the toppins during runtime.