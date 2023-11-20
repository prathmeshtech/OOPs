# C-2.0
Advance C++ concepts covered 

Roadmap for Being an Orignal Software Engg.
<img width="922" alt="OOPs_roadmap_OG(Techsido)" src="https://github.com/prathmeshtech/C-2.0/assets/64306983/0e541ca7-11d7-48d2-bed0-f0eac7806653">

                                         ** Classes and Objects**
 Class is just a template or blueprint from which objects are created.
 Class does not occupy any memory until objects are created.

                                         **Access Specifiers**
 Encapsulation: Access specifiers help enforce encapsulation, bundling data (attributes) and methods that operate on that data 
  into a single unit (class) and controlling access to that data. Access specifiers define how class members are accessible from
  outside the class.

 Data Hiding: By using access specifiers, you can hide the internal implementation details of a class from the outside world.
  This prevents external code from directly modifying or accessing the class's internal data, ensuring data integrity and reducing
  the risk of unintended side effects.

 Security: Access specifiers provide a level of security. You can make sensitive data or methods private to prevent unauthorized
  access and manipulation. Only the class itself can access private members.

 Inheritance: Access specifiers are crucial for inheritance. They control how members of a base class are inherited and
  accessible in derived classes. For example, public members of a base class are accessible to derived classes, while private 
  members are not.    

                                         **Static keyword**
                                         
Space is allocated till the end of the program's lifetime. (End of Main function execution)
   1. Static Data Members-
      Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
      It is initialized before any object of this class is created, even before the main starts.
      It is visible only within the class, but its lifetime is the entire program.
     
  2. Static Class objects  - Static class objects allow an object to live till the end of the program and not only up to the scope.

  3. Static member functions - static member functions are allowed to access only the static data members

                                        **Constructors**
A constructor is a special method that is just invoked automatically, every time an object is created.

Characteristic of Constructor:
1. Constructor name is the same as the class name, and they get called automatically when we create object of class.
2. Constructor does not return value, hence does not have a return type.
3. Contructor  cannot be declared as virtual.
4. Contructor can be overloaded.
5. If we don't specify a constructor, the C++ compiler generates a default constructor for the object (No Parameter and has an empty body).

