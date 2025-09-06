#include <iostream>
using namespace std;

// Class = blueprint
class Mobil {
private:  // encapsulation: hanya bisa diakses dari dalam class
    string merek;
    int tahun;

public:
    // Constructor → otomatis dipanggil saat objek dibuat
    Mobil(string m, int t) {
        merek = m;
        tahun = t;
    }

    // Method (fungsi dalam class)
    void infoMobil() {
        cout << "Merek: " << merek << ", Tahun: " << tahun << endl;
    }
};

// Inheritance: class SportCar mewarisi dari Mobil
class SportCar : public Mobil {
private:
    int topSpeed;

public:
    SportCar(string m, int t, int speed) : Mobil(m, t) {
        topSpeed = speed;
    }

    // Overriding → menimpa method dari parent
    void infoMobil() {
        Mobil::infoMobil(); // panggil method parent
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

int main() {
    // Membuat objek dari class Mobil
    Mobil m1("Toyota", 2020);
    m1.infoMobil();

    // Membuat objek dari class SportCar (turunan Mobil)
    SportCar s1("Ferrari", 2022, 350);
    s1.infoMobil();

    return 0;
}
