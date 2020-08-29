Composite design pattern lets you compose objects into tree structures and then work with these structures 
as if they were individual objects.

Advantage:
    1.Encapsulate the deep recursion logic of iterating the Tree-structure from the client code(The client does not 
      need to know the detail of the implementation).
    2.We can work with complex tree structures more conveniently.
    3.OCP(Open/Closed Principle), we can introduce new elements without breaking the existing code. 
      New objects can inherited from the common abstract class and added to the tree.(Take a look at my concrete objects!)
Disadvantages:
    1.It might be difficult to provide a common interface for classes whose functionality differs too much.


Common Use:
    1.When our Object structure is tree-like(Take a look at my example!).
    2.When we want the client treat the complex objects(i.e. Box) and simple objects(i.e. Hammer, CellPhone...) uniformly.

Example:(my c++ code)
    This Program describes that assume we have a large box, which contains lots of objects, such as Hammer, 
    charger, or small boxes, and each small boxes may also contain these objects(Which is like a general tree).
    But all of these objects are inherited from Object class, which have getPrice() and execute() method. For Box 
    class, the getPrice() will return the sum of the price of the objects inside of it (in the container of box), 
    and execute() method will execute all the objects inside of the box. Therefore, for the client(main.cc), we 
    just need to call getPrice() on the large Box, and we can get the total price of the objects inside of it; we 
    can call execute() on the large box to execute all the objects inside of it.