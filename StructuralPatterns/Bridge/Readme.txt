Bridge design pattern decouples an abstraction(sth you can use without knowing the detail) from its implementation(the realization of that
abstraction) so that the two can vary independently.

Advantages:
    1.It allows us to create platform-independent classes and apps.
    2.The client code can work with high-level abstractions. Since it does not need to know the detail of how it works.
    3.OCP(Open/Closed Principle). We can introduce new abstractions and implementations independently from each other.
    4.SRP(Single Responsibility Principle), we can focus on high-level logic in the abstraction/implementation.(each of them focus on their jobs).
    5.Code flexibility. We can combine different abstractions with implementations as we want.

Disadvantages:
    1.Since we have to separate our classes, which makes our code more complex.
    2.Double indirection. Since the abstraction needs to pass messages along to the implementator to get executed.

Common Use:
    1.Use it any time we have two inheritance hierarchies in our code. We can simplify the code by utilizing Bridge design pattern.
    2.Use it when you need to be able to switch implementations at runtime(Use the mutator in the abstraction).

Example:(my c++ code)
    This is a program describing building a Web app. Since we have different kinds of Web app(Blog, PicShows...) and
    all of them have style. Meanwhile styles all have their specific types which may various form each other. by using this 
    design pattern, we can make different combinations of apps with styles.