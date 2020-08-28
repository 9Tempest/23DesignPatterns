Prototype allows you to copy existing objects and hide the complexity of making new instances from the client.
    The existing object acts as a prototype and contains the state of the object, and newly copied object can be obtained
    by the clone() method on the existing objects.


Advantages:
    1.Hide the process of making a copy of the existing object from the client, which makes our client code less coupling.
    2.When constructing a object is quite complex, cloning an existing one will be more convenient.
    3.Since we have a cloneable interface, whenever we want a class to have the clone() method, we can implement this
      interface, which is easy to extend.
    4.We can use the clone() method to save the state of the current object to be a copy, which is readily available to be used anytime.

Disadvantages:
    1. We have to write clone() method for every class, which is inside the class, so every time we want to modify the
       existing class, we may also modify the clone method, which deviates from OCP(Open and Closed Principle).
    
    2. If we want to perform a deep clone, the code will be very complex.




Common Use:
    1.When your client code should be independent of how the copied object is created, composed and represented.
    2.When the classes to instantiate are specified at run-time.(i.e. When the instances of a class can have only a few different combinations,
      then cloning the existing objects will be more convenient to instantiating them manually).

Example:(my c++ code)
    This program describes the mail structure. Every mail may have its title, content, and signitrue. Since creating a mail is complex
    (it has many components), so we use the Prototype design pattern. In main.cc, mail1 is a prototype, and mail2 is a copy of mail1.
