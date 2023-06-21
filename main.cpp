#include <iostream>
#include <cmath>
#include <glog/logging.h>

#include "include/matrix/matrix.h"


double square(double value) {
    return std::pow(value, 2.0);
};

int main(int argc, char *argv[]) {
    Matrix* m = new Matrix(4, 4, 2);
    m->set(7, 1, 50);
    std::cout << "INITIAL: m" << std::endl;
    m->print();
    
    m->scale(3);
    std::cout << "SCALE: m" << std::endl;
    m->print();
    
    m->add_scalar(1);
    std::cout << "ADD_SCALAR: m" << std::endl;
    m->print();
    
    m->subtract_scalar(1);
    std::cout << "SUBTRACT_SCALAR: m" << std::endl;
    m->print();
    
    m->set_identity();
    std::cout << "IDENTITY: m" << std::endl;
    m->print();
    
    Matrix* m2 = new Matrix(4, 4, 7);
    std::cout << "INITIAL: m2" << std::endl;
    m2->print();
    
    Matrix* m7;
    m7 = m->add(m2);
    std::cout << "ADD: m, m2" << std::endl;
    m7->print();
    
    Matrix* m8;
    m8 = m->subtract(m2);
    std::cout << "SUBTRACT: m, m2" << std::endl;
    m8->print();
    
    Matrix* m3;
    m3 = m->multiply(m2);
    std::cout << "MULTIPLY: m, m2" << std::endl;
    m3->print();
    
    Matrix* m4 = new Matrix(2, 3, 3);
    std::cout << "INITIAL: m4" << std::endl;
    m4->print();
    
    Matrix* m5 = new Matrix(3, 2, 4);
    std::cout << "INITIAL: m5" << std::endl;
    m5->print();
    
    Matrix* m6;
    m6 = m4->dot(m5);
    std::cout << "DOT: m4, m5" << std::endl;
    m6->print();
    
    Matrix* m9 = new Matrix(4, 4);
    m9->set_ascending();
    std::cout << "INITIAL: m9" << std::endl;
    m9->print();
    
    m9->transpose();
    std::cout << "TRANSPOSE: m9" << std::endl;
    m9->print();
    
    m3->apply(&square);
    std::cout << "APPLY: m3" << std::endl;
    m3->print();
    
    delete m;
    delete m2;
    delete m3;
    delete m4;
    delete m5;
    delete m6;
    delete m7;
    delete m8;
    delete m9;

    return 0;
};