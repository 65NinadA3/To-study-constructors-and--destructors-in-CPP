# **Constructors and Destructors in C++**

**Name:** Ninad Phatak  
**Roll No.:** 24070123065  
**Class:** ENTC A3  

---

## **Overview**
Constructors and destructors are special member functions in C++ used for initializing and cleaning up objects. A **constructor** is automatically invoked when an object is created, while a **destructor** is called when the object goes out of scope or is explicitly deleted. Different types of constructors—default, parameterized, and copy constructors—allow flexible object initialization. Destructors ensure resource deallocation and proper object cleanup.

---

## **Theory**

- **Constructor:**  
  A constructor is a special member function that initializes objects of a class. It has the same name as the class and no return type.  

  **Types of Constructors:**
  1. **Default Constructor:** Takes no arguments and provides default initialization.
  2. **Parameterized Constructor:** Accepts parameters to initialize objects with specific values.
  3. **Copy Constructor:** Creates a new object as a copy of an existing object.

- **Destructor:**  
  A destructor is a special member function that destroys objects when they go out of scope. It has the same name as the class but is prefixed with a `~` symbol and takes no arguments. It is mainly used for cleanup, such as releasing memory or closing file streams.

---

## **Logic and Outputs**

---

### **1. Code Name: Copy Constructor (Book Details)**

**Logic:**  
- The constructor initializes book details using parameters.  
- The copy constructor duplicates the existing object into a new object and displays a message indicating the copy constructor is called.  

**Output:**  
Book Name: Harry Potter
Author Name: JK Rowling
Price: 700
constructor called !!
Book Name: Harry Potter
Author Name: JK Rowling
Price: 700

yaml
Copy code

---

### **2. Code Name: Copy Constructor (Student Details)**

**Logic:**  
- A parameterized constructor initializes the student's name and age.  
- The copy constructor copies values from an existing object and prints a message when called.  

**Output:**  
Name: Ninad
Age: 19

yaml
Copy code

---

### **3. Code Name: Default Constructor Defined Outside Class (Student Info)**

**Logic:**  
- The default constructor prompts the user to input student details.  
- The `display()` function then prints those details.  

**Output:**  
Enter Name: Ninad
Enter Roll Number: 65
Enter Grade: A
Student Info
Name: Ninad
Roll Number:65
Grade:A

yaml
Copy code

---

### **4. Code Name: Create Default Constructor Outside Class (Cars Detail)**

**Logic:**  
- The default constructor takes car details from the user and stores them.  
- The `display()` function shows the stored details.  

**Output:**  
Enter the price : 40000
Enter the Car Name :BMW
Enter the mileage :
45

Car Details are :
40000
BMW
45

yaml
Copy code

---

### **5. Code Name: Destructor (Dates)**

**Logic:**  
- A destructor is called every time an object is destroyed.  
- Multiple objects are created inside a loop, so their destructors are called once they go out of scope.  
- The `count` variable keeps track of how many times the destructor was called.  

**Output:**  
Destructor Called!! Count = 1
Destructor Called!! Count = 2
Destructor Called!! Count = 3
Destructor Called!! Count = 4
Destructor Called!! Count = 5
Destructor Called!! Count = 6
Destructor Called!! Count = 7
Destructor Called!! Count = 8

yaml
Copy code

---

### **6. Code Name: Parametric Constructor**

**Logic:**  
- A parameterized constructor initializes a date using given values.  
- The `showDate()` function prints the date in `dd/mm/yy` format.  

**Output: Date :  28/8/25**
