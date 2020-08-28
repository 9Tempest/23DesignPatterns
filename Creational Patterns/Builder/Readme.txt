Builder design allows you to build complex objects step by step, 
by dividing them in to small parts, which can also encapsulate 
the process of building the object to the client.

Advantages:
    1. Dividing constructing a large object into small parts, which makes
       our code looks good and follows the SRP(Single Responsibility Principle).
    2. The client does not need to know the detail of the construction of the complex 
       object, which makes the client code less coupling.
    3.Since each builder is relatively independent to each other, it's easy to add
      new concrete builder, which makes our code extendable, and it follows OCP(Open/Closed Principle)
    4.We can control the process of building the product more precisely.

Disadvantage:
    1. The product that builder constructs are similar to each other in structure, so if the products are
       quite different from each other, using builder design pattern will not be appropriate.
    2. The overall complexity of the code increases since the pattern requires creating multiple new classes
       when we want to extend our functionalities.


CommonUse:
    1.Use the Builder pattern instead of a "telescopic constructor" (i.e. if we want to construct a House object which consists 
      of Walls, garden, Pool..., we may write House* h = new House(4, null, null, ....), which means we pass a lot of unnecessary
      parameters into it, making the constructor calls pretty ugly).

    2.Use it when you want to create different representations of some product(such as cars with different types of wheels)

    3.Use it when your object is quite complex

Example:(my c++ code)
    This is a program that describes building a house. Our house class consists walls, type, pool, and garbage,
    so we have builder to build the house. Different concrete builder may build different houses. The director 
    controls the builder.
