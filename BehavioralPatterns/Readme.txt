Behavioral design patterns are concerned with algorithms and the assignment of responsibilities between objects.







There are 10 types of Behavioral design patterns:
    1.Chain Of Responsibilities
    2.Command
    3.Iterator
    4.Mediator
    5.Memento
    6.Observer
    7.State
    8.Strategy
    9.Template Method
    10.Visitor








Relationships among these patterns:
    1.Chain of Responsibility, Command, Mediator and Observer address various ways of connecting 
      senders and receivers of requests:
      (1) Chian of Responsibility allows a request to be passed through a dynamically chian of handlers 
           and let one of them to handle it.
      (2) Command establishes undirectional connection between senders and receivers.
      (3) Mediator eliminates the direct connection between senders and receivers and let them communicate
          with the Mediator object.
      (4) Observer let receivers attach or detach to the sender dynamically.
    2.Chain of Responsibility is often used in conjunction with Composite. In this case, when a leaf component 
      gets a request, it may pass it through the chain of all of the parent components down to the root of the object tree.
    3.Handlers in Chain of Responsibility can be implemented as Commands. In this case, you can execute a lot of different 
      operations over the same context object, represented by a request.
    4.Chain of Responsibility and Decorator:
        Similarity: Both patterns rely on recursive composition to pass the execution through a series of objects.
        Difference: The CoR handlers can execute arbitrary operations independently of each other. They can also stop 
                    passing the request further at any point. On the other hand, various Decorators can extend the object’s 
                    behavior while keeping it consistent with the base interface. In addition, decorators aren’t allowed to break the flow of the request.
    5.You can use Command and Memento together when implementing “undo”. In this case, commands are responsible for performing various operations
      over a target object, while mementos save the state of that object just before a command gets executed.
    6.You can use Iterators to traverse Composite trees.
    7.You can use Memento along with Iterator to capture the current iteration state and roll it back if necessary.
    8.You can use Visitor along with Iterator to traverse a complex data structure and execute some operation over its elements, even if they all have different classes.
    9.You can use Visitor to execute an operation/or grab information over an entire Composite tree.
    10.Template Method is based on inheritance: it lets you alter parts of an algorithm by extending those parts in subclasses. Strategy is based on composition: you can alter 
       parts of the object’s behavior by supplying it with different strategies that correspond to that behavior. Template Method works at the class level, so it’s static. Strategy works 
       on the object level, letting you switch behaviors at runtime.