#include <iostream>
using namespace std;

class Tree {
public:
    virtual void draw() {}
};

class TreeOne : public Tree {
public:
    void draw() override {
        cout << " /\\ " << endl;
        cout << "//\\\\" << endl;
    }
};

class TreeTwo : public Tree {
public:
    void draw() override {
        cout << " /\\ " << endl;
        cout << "/**\\" << endl;
    }
};

class TreeThree : public Tree {
public:
    void draw() override {
        cout << " /\\ " << endl;
        cout << "/++\\" << endl;
    }
};

int main() {
    TreeOne tree1;
    TreeTwo tree2;
    TreeThree tree3;
    Tree* trees[3];

    trees[0] = &tree1;
    trees[1] = &tree2;
    trees[2] = &tree3;

    for (int i = 0; i < 3; i++) {
        cout << "Drawing " << i + 1 << ":" << endl;
        trees[i]->draw();
    }
    return 0;
}
