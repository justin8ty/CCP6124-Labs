Section 2: Review Questions and Exercises
Suppose that the classes Dog and Cat derive from Animal, which in turn derives from Creature. Suppose further that pDog, pCat, pAnimal, and pCreature are pointers to the respective classes. Suppose that Animal and Creature are both abstract classes.

1. Will the statement
   Animal a;
   Won’t compile
2. Will the statement
   pAnimal = new Cat;
   Will compile
3. Will the statement
   pCreature = new Dog;
   Won’t compile
4. Will the statement
   pCat = new Animal;
   Won’t compile
5. Rewrite the following two statements to get them to compile correctly.
   pAnimal = new Dog;
   pDog = pAnimal;

   ```
   pAnimal = new Dog();
   pDog = dynamic_cast<Dog*>(pAnimal); // downcast, not auto
   ```
