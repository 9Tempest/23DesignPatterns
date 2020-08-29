Abstract Factory is a creational design pattern that lets you produce
families of related objects without specifying their concrete classes

Advantages:
    1. the products that getting from a factory are compatible with each other
       (they are all from the same family)
    2. OCP(Open/Closed Principle): we can add new families of product without breaking existing code.
    3. SRP(Single Responsibility Principle): we can extract the product creation code into concrete factories, which makes our code easier to support.
    4. encapsulated the product process to the client

Disadvantage:
    1. the code will be very complex.
    2. hard to add specific new product(i.e. Suppose we have two factories called Apple and HuaWei
        , and each of them can produce their own cellphone and laptop, but now Apple factory wants to
        add a new router product. We have to modifying the existing code to achieve this, change the implementation
        of Abstract Factory...)

CommonUse:
    Use it when the client doesnt care about the process of producing.
    Use it when your code needs to work with various families of related products.
    Use it when you simply want to allow for future extensibility.

Example:(my c++ code)
    This program describes a client that purchases different furniture. We have chair/bed/table, and two
    families of the furniture: Huawei and Xiaomi. Huawei and Xiaomi factory have the responsibility to produce
    their furniture.