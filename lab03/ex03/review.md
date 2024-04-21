Section 2: Review Questions and Exercises

1. The class Stuff has both a copy constructor and an overloaded = operator. Assume that blob and clump are both instances of the Stuff class. For each of the statements, indicate whether the copy constructor or the overloaded = operator will be called.
   Stuff blob = clump;
   clump = blob;
   showValues(blob);

2. Describe the difference between making a class a member of another class (object composition) and making a class a friend of another class.

3. Explain why a class's copy constructor is called when an object of that class is passed by value into a function.

4. Assume a class named Bird exists. Write the header for a member function that overloads the = operator for that class.

5. Assume a class named Dollar exists. Write the headers for member functions that overload the prefix and postfix ++ operators for that class.
