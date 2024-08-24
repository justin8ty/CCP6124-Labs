Section 2: Review Questions and Exercises

1. Explain the difference between static binding and dynamic binding.
   Let p be a pointer pointing to an object ob of a class that is part of an inheritance hierarchy.
   In general, p will be a pointer to some base class B, and the object ob will be an instance of a class D derived from B
   Let f() be a member function of B that is overridden in D
   Static binding will do so at compile time and will select the version of member function f() that is in base class B to call based on the type of the pointer
   Dynamic binding will wait until runtime and select the version of member function f() that is in derived class D of the object
2. Are virtual functions statically bound or dynamically bound?
   They are dynamically bound.
3. How can you tell from looking at a class declaration that a virtual member function is pure?
   The body of function is replaced with =0
4. What makes an abstract class different from other classes?
   It cannot be used to create objects directly
