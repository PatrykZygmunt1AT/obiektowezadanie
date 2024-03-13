#include <iostream>

int main() {
    int liczba_osob_w_klasie, liczba_cukierkow;

    std::cout << "Podaj liczbę osób w klasie Jasia: ";
    std::cin >> liczba_osob_w_klasie;

    std::cout << "Podaj liczbę cukierków, które kupiła mama: ";
    std::cin >> liczba_cukierkow;

    int cukierki_dla_jasia = liczba_cukierkow - liczba_osob_w_klasie;

    if (cukierki_dla_jasia > 0) {
        std::cout << "Jasiu ma " << cukierki_dla_jasia << " cukierków na wieczór.\n";
    } else {
        std::cout << "Niestety, Jasiu nie ma cukierków na wieczór.\n";
    }

    return 0;
}
