Visitor pattern lets you separate algorithms from the objects on which they operate 
by double dispatch.

Advantages:
    1.Open/Closed Principle: You can add new behaviors that work with all objects without
      breaking the existing code.(by adding new visitor class)
    2.Single Responsibility Principle: You can move multiple versions of the same behavior in to
      the same class
    3.A visitor object can accumulate some useful information while working with various objects.
      This might be handy when you want to traverse some complex object structure, such as an object 
      tree, and apply the visitor to each object of this structure.

Disadvantages:
    1.You need to update all visitors each time a class gets added to or removed from the element hierarchy.
      (The Visitor class is coupling with all classes that he want to visit)
    2.Visitors might lack the necessary access to the private fields and methods of the elements that they’re 
      supposed to work with.

Common Use:
    1.Use the Visitor when you need to perform an operation on all elements of a complex object structure 
      (for example, an object tree).
    2.Use the Visitor to clean up the business logic of auxiliary behaviors.
    3.Use the pattern when a behavior makes sense only in some classes of a class hierarchy, but not in others.

example: (my c++ code)
    In this Program, i used the code from Composite Design Pattern's example, and use two types of visitors 
    to traverse the tree. The Price Visitor stores price of the tree inside of the visitor; while the ToolVisitor
    execute the objects on the tree.