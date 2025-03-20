#include "Brain.hpp"

Brain::Brain() {
    cout << "Brain created 🧠" << endl;
}

Brain::Brain(const Brain& other) {
    cout << "Brain copied 🧬🧠" << endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
}

Brain::~Brain() {
    cout << "Brain destroyed   ☠️ " << endl;
}

Brain& Brain::operator=(const Brain& other) {
    cout << "Brain assigned 🧠=🧠" << endl;
    if (this != &other) {  // Evita la autoasignación
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}