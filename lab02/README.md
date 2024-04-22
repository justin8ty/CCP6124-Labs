OOP is a way of programming where classes and objects are used to represent data and behaviors, in contrast to functional programming which treats data as something to transform through functions.

Broadly speaking, we have:

# Classes

A template for creating objects, by defining properties (data members / variables) and behaviors (member functions / methods) that all objects of that class will have.

Variables represent the state of an object, while methods define its behavior.

Data members, unlike normal variables, are only accessible through member functions of the class (encapsulation).

Generally, variables and methods are kept private, unless they are used by the end user, such as when displaying outputs. If a method is used by another class, it should be in public.

# Objects

A specific entity of a class, with its own set of properties and behaviors. They interact with each other and with the outside world by calling their member functions.

# Constructors

Constructors initialize objects when they are created, whether specified or not.

When you specify a constructor to create an object, you can easily create multiple objects within the constructor. Like how you can define mutiple variables in an array.
