Structural design patterns explain how to assemble objects and classes into larger structures
while keeping these structures flexible and efficient.

There are 7 types of Structural design patterns:
    1.Adapter
    2.Bridge
    3.Composite
    4.Decorator
    5.Facade
    6.Flyweight
    7.Proxy

Relations between these patterns:
    1.Adapter changes the interface of an existing object, while Decorator does not change
      the interface but add functionalities dynamically. In addition, Decorator supports recursive
      composition, which is not possible while using Adapter.
    2.Adapter (object Adapter) provides a different interface to the wrapped object; Proxy provides
      it with the same interface, and Decorator provides it with an enhanced interface.
    3.Adapter usually wraps just one object (object Adapter), while Facade works with an entire subsystem
      of objects.
    4.Bridge allows the existing objects to vary in two different dimensions, while the Decorator allows the 
      existing objects to maintain a base with varying behaviors.
    5.You can combine Builder with Bridge: The director plays the role of the abstraction, while different
      builders act as implementations.
    6.You can use Builder when creating complex Composite trees because you can program its construction
      steps to work recursively.
    7.You can use Iterators to traverse the Composite trees.
    8.You can use Visitor to execute an operation on an entire Composite tree.
    9.You can implement shared leaf nodes of the Composite tree as Flyweight to save some RAM.
    10.Abstract Factory can serve as an alternative to Facade when you only want to hide the way
      the subsystem objects are created.
    11.A Facade class can often be transformed into a Singleton since a single facade object is sufficient
      in most cases.
    12.Both Facade and Proxy can buffer a complex entity and init it on its own. Unlike Facade, Proxy has the
      same interface as its warped service, which makes them interchangeable.