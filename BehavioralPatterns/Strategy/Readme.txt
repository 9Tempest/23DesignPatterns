Strategy design pattern allows you to define a family of algorithms, put each of them into a separate
class, and make their objects interchangeable.

Advantages:
    1.(Open/Closed Principle): You can add new Strategies without breaking the existing code by adding new classes.
    2. You can swap the Strategies in a object at runtime.
    3. Use composition instead of composition to apply the Strategy
    4. The object does not need to know the detail of the Strategy, which decouples the Context part.
Disadvantages:
    1.For some simple algorithms, which may be completed by likely 1 or 2 lines of code, pass lambda functions may be
      simpler than creating new objects.
    2.If the algorithms in the object will rarely changes at runtime, there is no need to add more classes.

Common Use:
    1.When you want the algorithms in a object can switch in the runtime.
    2.When you want to isolate the logic of algorithms in a class from the implementation of the class.

Example:(my c++ code):
    In this program, the Evaluator plays the role of Context, which holds a Strategy to evaluate the student.
    The Strategy will change according to the student's GPA/Age by setStrategy() method.
