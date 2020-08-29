Adapter is a structural design pattern that allows objects with incompatible
types to collaborate. An adapter wraps one of the objects to hide the complexity
of conversion and let another one understand this object.



Advantages:
    1.We can introduce new Adapters without breaking the existing code, which follows OCP(Open and Closed Principle)
    2.We can encapsulate the logic of converting one class to another in a class, which follows SRP(Single Responsibility Principle)
      and makes our code less coupling.
Disadvantages:
    1.The overall complexity of our code increases, since we need to increase a set of new classes/interfaces.
      
Common Use:
    1.Use it when you want to use some existing class, but its type is incompatible with the rest classes.
    2.Use it when you want to reuse several existing subclasses that lack some common functionality that
      cannot be added to the superclasses(add them in the adapter, if you add the common functions in each
      subclasses, there will be much duplicate code!!!)

Note:
    There are two types of adapters: Class adapter and Object adapter
    Class adapter: convert one class to another class(it's general)
    Object adapter: it wraps one object, and convert this specific object to another class(it's specific)

Example: (my c++ code)
    The two programs all describe the conversion of a ThreePhaseOutlet to a TwoPhaseOutlet
    