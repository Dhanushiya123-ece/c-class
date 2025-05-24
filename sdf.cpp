#include <iostream>
using namespace std;

class Security {
    public:
    virtual void cctv(string camera) = 0;
};

class Home : public Security {
    public:
    void cctv(string camera) override {
        cout << "CCTV Company: " << camera << endl;
        cout << "Installed Successfully" << endl;
    }
};

int main() {
    Home H1;
    H1.cctv("Axis");
}