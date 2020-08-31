Proxy lets a structural design pattern that lets you provide substitute or placeholder for another object.
A proxy controls access to the original object, allowing you to perform something either before or after 
the request gets through to the original object.

Advantages:
    1. You can control the service without clients knowing about it.
    2. You can manage the life cycle of the service object when clients do not care about it.
    3. The proxy works  even if the service object is not ready or is not available.
    4. OCP(Open/Closed Principle): You can introduce new proxy class without changing the code of service.

Disadvantages:
    1. The response from the service may get delayed(Since the client have to use proxy to access the service)
    2. The code may become complex(since you introduce new classes).


Common Use:
    There are 7 specific types of Proxy pattern:
        1.Virtual Proxy: This pattern can delay the object's initialization to a time when it's
          really needed instead of creating the object when the app launches. (So use it when you have
          a heavyweight service that wastes resources by being always up)
        2.Protection Proxy: This Proxy can pass the request to the service object only if the client's
          credentials match some criteria. (So use it when you want some specific users to access the resources,
          like the core service can only be accessed by VIP)
        3.Remote Proxy: The Proxy passes the client request over the network, handling all of the nasty details
          of working with the network. (Use it when the service is located on a remote server)
        4.Logging Proxy: This Proxy can log each request before passing it to service.(Use it when you want
          to keep a history of requests to the service object)
        5.Caching Proxy: This proxy can implement caching for recurring requests that always yield the same
          results. The proxy may use the parameters of requests as the cache keys. (Use it when you need to cache
          results of client requests and manage the life cycle of this cache, especially if the results are quite large)
        6.Smart reference: This proxy keeps track of clients that obtained a reference to the service, and it checked 
          whether the client had modified the service object.

Example:(my c++ code)
    This programs illustrates the use of Virtual Proxy and Protection Proxy.
    Image that the client wants to visit some pictures, which are really really big.
    Therefore, we can use Virtual Proxy to do lazy initialization!
    Image that we only want the "admin" to visit the pictures, so we can use Protection Proxy
    to limit the client!
    Note that Virtual and Protection Proxy can be used together in a Proxy. In oder to 
    explain, i separate them into two parts.
