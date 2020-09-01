Command pattern turns a request into a stand-alone object that contains
all information about the request. This request lets you parameterize methods
with different requests, delay or queue a request's execution, and support undoable
operations.

Advantages:
    1.We can introduce new commands without breaking the existing code, i.e. add new concrete
      command class (Open/Closed Principle)
    2.We can assemble a set of simple commands into a complex one(use a container to store the commands
      and execute them all in the action() method)
    3.We can decouple classes that invoke operations from classes that perform 
      the operations(Single Responsibility Principle)
Disadvantages:
    1.Code become complex since we are introducing a new layer.

Common Use:
    1.When we want to implement undo/redo operations (use a container to store the commands)
    2.When we want to schedule their execution or execute them remotely. (serialize the command
      object into string and store them in database/send them thru network)
    3.When you want to customize your commands at runtime.(add commands at runtime)