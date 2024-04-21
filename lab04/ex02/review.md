Section 2: Review Questions and Exercises

1. What is a problem domain?
   The set of real-world objects, and major events related to the problem.
2. How do you identify the potential classes in a problem domain description?
   Look at the following description of a problem domain:
   A doctor sees patients in her practice. When a patient comes to the practice, the doctor performs one or more procedures on the patient. Each procedure performed has a description and a standard fee. As patients leave, they receive a statement that shows their name and
   address, as well as the procedures that were performed and the total charge for the procedures. Assume that you are creating an application to generate a statement that can be printed and given to the patient.

   `Start by identifying the nouns (including pronouns and noun phrases) in the problem domain description. Then, refine the list to include only the classes that are relevant to the problem.`

3. Identify all of the potential classes in this problem domain.
   Doctor, Practice, Patient, Procedure, Statement, Office Manager
4. Refine the list to include only the necessary class or classes for this problem.
   Patient, Procedure, Statement
5. Identify the responsibilities of the class or classes that you identified in step 4.
   Data members, member functions
   Patient: name, address
   Procedure: description, fee
   Statement: procedure name, calculate total charge
