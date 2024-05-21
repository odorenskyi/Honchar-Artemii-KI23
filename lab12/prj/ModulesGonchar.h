#ifndef MODULESGONCHAR_H_INCLUDED
#define MODULESGONCHAR_H_INCLUDED
#include <cmath>

class ClassLab12_Gonchar {

public:
    ClassLab12_Gonchar(float len) {
        formatd(len);
    };

    void setLen(float len);
    void setFull();

    float getLen() {
        return lengthCube;
    };

    float getVol() {
        return pow(lengthCube, 3);
    };

    char getRipn() {
        return full;
    };
private:
    void formatd(float len);
    bool lenValidate(float len);
    float lengthCube;
    char full;
};

void ClassLab12_Gonchar::formatd(float len) {
    setLen(len);
    full = 'n';
};

void ClassLab12_Gonchar::setLen(float len) {
    if (lenValidate(len) == true) {
        lengthCube = len;
    }
    else { lengthCube = 0.1; }
};

bool ClassLab12_Gonchar::lenValidate(float len) {
    if (len > 0 && len < 1) { return true; }
    else { return false; }
};

void ClassLab12_Gonchar::setFull() {
    if (full == 'n') full = 'y';
    else full = 'n';
};

#endif // MODULESGONCHAR_H_INCLUDED
