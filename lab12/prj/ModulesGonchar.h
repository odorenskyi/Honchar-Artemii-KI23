#ifndef MODULESGONCHAR_H_INCLUDED
#define MODULESGONCHAR_H_INCLUDED
#include <cmath>

class ClassLab12_Gonchar {

public:
    ClassLab12_Gonchar(float len) {
        formatd(len);
    };

    void setLength(float len);
    void setFull();

    float getLength();
    float getVolume();

    char getIsFull();
private:
    void formatd(float len);
    bool lenValidate(float len);
    float lengthCube;
    char full;
};

float ClassLab12_Gonchar::getLength() {
    return lengthCube;
}

float ClassLab12_Gonchar::getVolume() {
    return pow(lengthCube, 3);
}

char ClassLab12_Gonchar::getIsFull() {
    return full;
}


void ClassLab12_Gonchar::formatd(float len) {
    setLength(len);
    full = 'n';
};

void ClassLab12_Gonchar::setLength(float len) {
    if (lenValidate(len) == true) {
        lengthCube = len;
    }
    else { lengthCube = 0.1; }
};

bool ClassLab12_Gonchar::lenValidate(float len) {
    return len > 0 && len < 1;
}

void ClassLab12_Gonchar::setFull() {
    full = (full == 'n') ? 'y' : 'n';
}

#endif // MODULESGONCHAR_H_INCLUDED
