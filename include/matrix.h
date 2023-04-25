#pragma once

#define DEFAULT_VALUE 0


class Matrix {
    private:
        int _rows;
        int _cols;
        double* _values;

    public:
        Matrix(int rows, int cols, double value=DEFAULT_VALUE);
        
        ~Matrix();
        
        int rows();
        
        int cols();

        void clear(double value=DEFAULT_VALUE);
        
        void set_identity();
        
        void set_ascending();

        void set(int row, int col, double value);

        double get(int row, int col);
        
        void scale(double scalar);
        
        void add_scalar(double scalar);
        
        void subtract_scalar(double scalar);
        
        Matrix* add(Matrix* input);
        
        Matrix* subtract(Matrix* input);
        
        Matrix* multiply(Matrix* input);
        
        Matrix* dot(Matrix* m2);
        
        void apply(double (*func)(double));
        
        void transpose();

        void print();
};