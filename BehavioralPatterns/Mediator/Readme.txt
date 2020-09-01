Mediator allows you to reduce the dependencies between components in a program by forcing them to 
collaborate only via a Mediator object only.

Advantages:
    1. (Open/Closed Principle): You can introduce new Mediator without breaking the existing code.
    2. (Single Responsibility Principle): You can extract the communication among components into a single place.
    3. You can decouple the components in a large program.
    4. You can reuse the components easily
Disadvantages:
    1. The Mediator should handle all the communication among components, which is exceedingly coupling.

Common Use:
    1. When you want some of your components in a program reusable.
    2. When you want your components not to depend on other components.

Example:(my c++ code)
    In this program, the Form object plays as a Mediator to handle the communication among all components.
    Go and check it!