#ifndef CALC_H
#define CALC_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

typedef unsigned char uint8_t;

class calc {
    private:
        uint8_t r0; // SIGNED 8 bit values
        uint8_t r1;
        uint8_t r2;
        uint8_t r3;
        
        uint8_t o0; // OVERFLOW flag
        uint8_t o1;
        uint8_t o2;
        uint8_t o3;
        
    public: // Note: 8 bits is the smallest type that can be defined.
        calc();
        ~calc();
        
        void load(uint8_t d, uint8_t imm);
        void add(uint8_t d, uint8_t s, uint8_t t, bool add);
        void subtract(uint8_t d, uint8_t s, uint8_t t);
        void skip_1(uint8_t s, uint8_t t);
        void skip_2(uint8_t s, uint8_t t);
        void print(uint8_t s);
        
        void read_binary(const char* filename);
        
};

#endif /* CALC_H */
