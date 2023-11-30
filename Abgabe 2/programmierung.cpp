//Option 1
void Dog::shrink() {
    size = 0;
}

//Option2
void Dog::shrink() {
    Dog::size = 0;
}

//Option 3
void Dog::shrink() {
    this->size = 0;
}

//Option 4
class Dog : public Mammal {
private:
    Fur* fur;
public:
    Dog() : Mammal(), fur(nullptr) {
        size = 0;
    }
}

class Mammal {
protected:
    int weight;
    float size;

public:
    // Default-Konstruktor
    Mammal() : weight(0), size(0.0) {}

    // Copy-Konstruktor
    Mammal(const Mammal& other) : weight(other.weight), size(other.size) {}
    
    // ...
};

class Mammal {
protected:
    int weight;
    float size;

public:
    // Default-Konstruktor
    Mammal() : weight(0), size(0.0) {}

    // Copy-Konstruktor
    Mammal(const Mammal& other) : weight(other.weight), size(other.size) {}

    // Zuweisungsoperator
    Mammal& operator=(const Mammal& other) {
        if (this != &other) {
            weight = other.weight;
            size = other.size;
        }
        return *this;
    }
    
    // ...
};

class Basic {
public:
    virtual int f1() = 0;

};

class Basis {
public:
    virtual int f2() = 0;

};

class Abgeleitet : public Basis {
public:
    int g() { return 42; }
    
    int f2() override { return 23; }

};
int Basis::f2() {return 23; }

int main() {
    Abgeleitet a;
    Basis* b = &a;

    b->f2(); 

}

class Mushroom : public Animal, public Plant {
public:
    Mushroom(int weight, bool succulent, bool carnivore)
        : Animal(weight, carnivore), Plant(weight, succulent) {}

    int getWeight() {
        return Plant::getWeight();
    }
};