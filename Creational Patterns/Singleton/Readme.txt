Singleton pattern encapsulates a shared resource within a single unique class instance and makes it readily available throughout the application.

Advantages: 1. It allows exactly one object to coordinate actions across the system.
			2. Instead of creating many objects, it saves memory since this instance will only be instantiated once.

Disadvantages: 1. Singletons create hidden dependencies
				  Since its reference is not completely transparent while passing to different methods, it becomes difficult to track.
			   2. hard to be extended
			
			
			
Common Use: Singletons may often be modeled as a server within the application that accepts requests to send/receive data.
			Or other shared resources like Logger, Print Spooler, etc.
			
			
Note: 1.Singleton classes must be memory-leak free! Since the instance of the singleton class is to be created once and remains for the lifetime of the application,
	   so for some programming language like C++, design your Singleton classes carefully!
	  2.A singleton class is not easily extensible