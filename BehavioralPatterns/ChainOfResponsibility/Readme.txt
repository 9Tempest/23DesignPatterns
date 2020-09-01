This pattern lets you pass requests along a chain of handlers. Upon receiving a request, each
handler decides either to process the request or to pass it to the the next handler in the chain.

Advantages:
    1.OCP(Open/Closed Principle): We can introduce new handlers without breaking the existing code(add new classes!)
    2.SRP(Single/Responsibility Principle): The handlers/request do not need to know the process of handling, which decouples
      the handlers/request classes.
    3.The client can control the order of request handling.
Disadvantages:
    1.If there is something wrong with one handler in the chain, the request may be unhandled. (One small error in the chain
      may lead to large problems).
    2.For some long chains, which contain multiple classes, it is very hard to debugging.

Common Use:
    1.When you want to dynamically process the request(let the client decides the order of process)
    2.When there are many classes being able to process the request.

Note:
    There are two types of ChainOfResponsibility: 
    1.pure ChainOfResponsibility:
      A handler can only either process the request entirely or let the next handler process the request.
      Any request will finally be processed.
    2.impure ChainOfResponsibility:
      A handler can process part of the request and delegate the request to the next handler.
      The request processed completely by one handler can still be processed by others.
      A request can be not processed by the handlers.

Example: (my c++ code)
    This program describes a process of dealing with the absence request from workers in a chain of management.
    The request should be first processed by the leader if the days are fewer than 3, or he will pass this request 
    to the manager. The manager can process the request if the days are fewer than 10, or he will pass it to the Boss.
    The Boss can process any request. (This is an example of pure Chain of Responsibility).