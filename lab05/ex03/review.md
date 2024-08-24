1. What type of relationship between classes is realized by inheritance?
   The is-a relation.

2. What is the difference between private members and protected members?

- Private members are only accessible to member functions of the same class.
- Protected members are accessible to member functions of the same class as well as of all derived classes.

3. What is the reason that base class constructors are called before derived class constructors?
   Derived class constructors can assume members of the base class object have already been initialized
