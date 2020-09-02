Template Method lets you define the skeleton(framework) with some complete methods, but override
some specific methods by the subclasses.

Advantages:
    1.You can let clients override some specific methods.
    2.You can pull the duplicate code into a superclass.

Disadvantages:
    1.Some clients may be limited by the provided skeleton of an algorithm.

Common Use:
    1.When you want to let clients extend only particular steps of an algorithm
      , but not the whole algorithm or its structure.
    2.Use the pattern when you have several classes that contain almost identical 
      algorithms with some minor differences. As a result, you might need to modify 
      all classes when the algorithm changes.

Example:
    In this program, every AI will perform attack and take their turns, but the way they
    take their turns varies.