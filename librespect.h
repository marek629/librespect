#ifndef LIBRESPECT_H
#define LIBRESPECT_H

typedef unsigned short uint16;

namespace LRS {
    enum Window {
        Rectangular,
        Hamming,
        Hann,
        Sine    // also known as Cosine
    };
}

class LibReSpect {
public:
    LibReSpect(uint16 bufferSize = 512, LRS::Window windowType = LRS::Hann);
    void countFFT(double* array);
    void makeWindow(double* array);

    // Acces to private fields
    uint16 bufferSize() const { return bufferFFT; }
    void setBufferSize(uint16);
    LRS::Window windowType() const { return windowFFT; }
    void setWindowType(LRS::Window);

private:
    uint16 bufferFFT;
    LRS::Window windowFFT;

    // Window functions
    void hannWindow(double* array);
    void hammingWindow(double* array);
    void sineWindow(double* array);
};

#endif // LIBRESPECT_H
