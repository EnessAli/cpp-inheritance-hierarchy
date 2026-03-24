# C++ Inheritance Hierarchy

Exploration of C++ inheritance mechanics: base/derived classes, access specifiers in inheritance, function overriding, and Diamond Problem resolution using virtual inheritance.

## Concepts Covered

### Single Inheritance
```cpp
class Animal {
protected:
    std::string _type;
public:
    virtual void makeSound() const;
};

class Dog : public Animal {
public:
    void makeSound() const; // overrides Animal::makeSound
};
```

### Deep Copy with Inheritance
Proper copy constructor and assignment operator that deep-copy heap-allocated arrays owned by derived classes.

### Diamond Problem
```
        Brain
       /     \
    Scav     Mutant
       \     /
      FragTrap
```
Resolved with `virtual` inheritance to ensure a single shared base instance.

### Access in Inheritance
| Modes | public | protected | private |
|-------|--------|-----------|---------|
| `public` inherit | public | protected | hidden |
| `protected` inherit | protected | protected | hidden |
| `private` inherit | private | private | hidden |

## Build

```bash
make && ./ex00
```

## Tech Stack

`C++98` `Inheritance` `Virtual Functions` `Diamond Problem` `Deep Copy`

