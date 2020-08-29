Similar to Simple-Factory, which hides the creation of logic to the client,
the Factory-Method also use inheritance to make our project easy to extend.
(Every concrete Factory produces its corresponding concrete product)

Advantages:
    1. encapsulated the product process to the client
    2. OCP(Open/Closed Principle): we can add new products without breaking existing code.
    3. SRP(Single Responsibility Principle): we can extract the product creation code into concrete factories, which makes our code easier to support. 

Disadvantages:
    1. Structural-complex: whenever we want to add a product, we have to add 2 classes(concrete product and concrete factory)

Common use:
    Similar to Simple-Factory, we can use it when the client does not care about
    the process of creating the object.

//Example: (my c++ code)
    this example is similar to the example in Simple-Factory. We have different kinds of
    concrete Factories to produce their products instead of one factory, which is extendable,
    but a little bit structural-complex.