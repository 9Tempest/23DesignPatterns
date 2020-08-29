Creational pattern provide different kinds of object creation mechanisms, which makes the client code less coupling and
    increases flexibility and reusability of existing code. Besides, this design pattern makes our code extendable and maintainable, use it
    when the client do not care about the process of the creation of the object.

Content: (including their definition, Pros/Cons, UML, common use, and my c++ code example)
    Singleton
    Builder
    Simple-Factory
    Factory-Method
    Prototype
    Abstract-Factory

Relation between these patterns:

    1.Abstract Factory classes are often based on a collection of Factory-Method patterns, but we can also use Prototype
      to compose the methods.
    2.Factory-Method is a extended class of Template-Method design pattern.
    3.Abstract Factory, Builder, and Prototype can be implemented as Singleton (a single Factory or Prototype in the system)
    4.We can use a Builder to create a complex Tree data structure.
    5.Builder focuses on the process of building the object(step by step), while Factory focuses on the product they produce.
    6.Abstract Factory can serve as an alternative to Facade when you only want to hide the process of creating a object in client code.
    7.A Facade class can often be transformed into a Singleton since a single Facade object is sufficient in most cases.