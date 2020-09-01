Observer design pattern allows you to define a mechanism to notify multiple
objects about any events that happen to the object they are observing.

Advantages:
    1.You can establish relationships among objects at runtime.
    2.You can introduce new Observer/Subject without breaking the existing code by adding 
      new corresponding classes(Open/Closed Principle).
    3.You can send the Subject's data to the Observer in a very efficient way
    4.You can add/remove Observers anytime you want.
Disadvantages:
    1.The order of notify is hard to be ordered.

Common Use:
    1.When the changes of states of some objects may lead the changes of other objects.
    2.When some objects have to observer others for a limited time.

Example:(my c++ code)
    In this program, Whether is the Subject. China Recorder and Canada Recorder are the observers.
    When the Whether changes, it will notify all the recorders, who will report the latest Whether.