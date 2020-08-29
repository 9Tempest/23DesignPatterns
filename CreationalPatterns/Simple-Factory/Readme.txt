In Factory Design Pattern, we create objects without exposing the creation
logic to the client and refer to a newly created object using a common interface.

Advantages:
    1.It provides approach to code for Interface rather than implementation.(encapsulated the process of producing products to the client)
    2.It provides abstraction between implementation and client through inheritance.

Disadvantages:
    1.when we want to add a new product, we have to change the code of our Factory class
    (i.e. add if-else condition to produce the new product), which deviates from GRASP, and is still coupling.

Common use:
    Use it when the client doesn't care about the logic of the creation of a product.
    Use it in some simple conditions

Example: (my c++ code)
    This program imitates the process of producing a car, the client only needs to 
    tell what the type of car he wants, and the Factory will produce the corresponding car, 
    and the client do not need to know how the logic of producing a car.
