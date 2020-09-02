State lets a object to alter its behavior when its internal state changes. It appears
as if the object changed its class.

Advantages:
    1.(Single Responsibility Principle): Organize the code related to particular status into separate classes.
    2.(Open/Closed Principle): You can add new States without breaking the existing code.
Disadvantages:
    1.This pattern can be overkilled if the state machine only has a few states or rarely changes.

Common Use:
    1.When you have an object that behaves differently depending on its current state.
    2.When one of your class has too many if-else conditions.

Example:
    This program describes a calculator which has two state: On and 
    Off, which will behave differently.