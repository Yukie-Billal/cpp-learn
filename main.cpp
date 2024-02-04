#include <iostream>
#include <ctime>

int calculateDiscount(int jamBelajar) {
    int percentage;
    if (jamBelajar > 7 and jamBelajar < 10) {
       percentage = 10;
    }
    if (jamBelajar > 10 and jamBelajar < 15) {
        percentage = 20;
    }
    if (jamBelajar <= 7 or jamBelajar >= 15) {
        jamBelajar = 0;
    }
    return percentage;
}

int main() {
//    time_t currentTime = time(0);
//    tm* localTime = localtime(&currentTime);

    int jamBelajar, percentageDiscount;
    std::cout << "Jam belajar: ";
    std::cin >> jamBelajar;

//    std::cout << jamBelajar << std::endl;
//    int hours = localTime->tm_hour;
//    int minutes = localTime->tm_min;
//    int second = localTime->tm_sec;
//    std::cout << "Waktu saat ini: " << hours << ":" << minutes << ":" << second << std::endl;

    percentageDiscount = calculateDiscount(jamBelajar);
    std::cout << "Potongan: " << percentageDiscount << "%";
    return 0;
}