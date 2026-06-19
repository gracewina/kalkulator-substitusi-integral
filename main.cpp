#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, n;
    
    cout << "===================================================" << endl;
    cout << "    Kalkulator Integral Substitusi - Gracewinna    " << endl;
    cout << "    Bentuk Soal: [S] a * x * (x^2 + b)^n dx        " << endl;
    cout << "===================================================" << endl;
    
    cout << "Masukkan nilai koefisien luar (a) : ";
    cin >> a;
    cout << "Masukkan nilai konstanta dalam (b): ";
    cin >> b;
    cout << "Masukkan nilai pangkat (n)        : ";
    cin >> n;
    
    double koefisienLuar = a / 2.0;
    double pangkatBaru = n + 1.0;
    double koefisienAkhir = koefisienLuar / pangkatBaru;
    
    cout << "\n>>> LANGKAH PENYELAIAN <<<" << endl;
    cout << "1. Misal u = x^2 + " << b << " -> du = 2x dx -> x dx = du/2" << endl;
    cout << "2. Substitusi ke lambang integral:" << endl;
    cout << "   [S] " << a << "x * (x^2 + " << b << ")^" << n << " dx = " << koefisienLuar << " * [S] u^" << n << " du" << endl;
    cout << "3. Integrasikan fungsi u:" << endl;
    cout << "   = " << koefisienLuar << " * (1/" << pangkatBaru << ") * u^" << pangkatBaru << " + C" << endl;
    
    cout << "\n>>> HASIL AKHIR <<<" << endl;
    cout << fixed << setprecision(2);
    cout << "F(x) = " << koefisienAkhir << " * (x^2 + " << b << ")^" << pangkatBaru << " + C" << endl;
    cout << "===================================================" << endl;
    
    return 0;
}