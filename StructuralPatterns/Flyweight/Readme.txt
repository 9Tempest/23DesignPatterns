Flyweight is a structural design pattern that lets you fit more objects into available amount of RAM by
sharing common parts of state between multiple objects instead of keeping all of the data in each objects

Advantages:
    1.You can save lots of RAM, assuming your program has tons of similar objects.
Disadvantages:
    1.code becomes more complicated(we have to add a container to save the objects and many classes).

Common Use:
    1.When we need to create a large amount of similar objects.

Note: We separate the Flyweight object into intrinsic state and extrinsic, where intrinsic state stores the constant data,
      which can be shared by a large amount of objects and is immutable. The extrinsic state stores the mutable data, 
      which is independent to others.

Example: (my c++ code):
    This program describes that We want to draw a large amount of objects, while the color attribute takes tons of memory.
    Therefore, we can split the object into two parts: the intrinsic part: which stores the color and the data that forms the
    color; the extrinsic part: which stores the position of the object, which may change anytime. Therefore, in our main program, 
    we can simply init several different types of the intrinsic part, which takes a lot of memory, and operate them upon each 
    extrinsic part, which takes little memory. This can help us save a lot of memory since the total number is so big.