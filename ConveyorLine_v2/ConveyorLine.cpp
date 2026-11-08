#include "pch.h"
#include "ConveyorLine.h"

ConveyorLine::ConveyorLine(const CString& name) : AbstractAssemblyUnit(name), isRunning(false) {}

void ConveyorLine::StartOperation() {
    if (!isRunning) {
        cout << "Конвейер " << GetUnitName() << " запускается." << endl;
        isRunning = true;
    }
    else {
        cout << "Конвейер " << GetUnitName() << " уже запущен." << endl;
    }
}

void ConveyorLine::StopOperation() {
    if (isRunning) {
        cout << "Конвейер " << GetUnitName() << " останавливается." << endl;
        isRunning = false;
    }
    else {
        cout << "Конвейер " << GetUnitName() << " уже остановлен." << endl;
    }
}

bool ConveyorLine::IsRunning() const {
    return isRunning;
}

void ConveyorLine::MoveCar(const CString& carModel) {
    if (isRunning) {
        cout << "Конвейер " << GetUnitName() << " перемещает автомобиль: " << carModel << "." << endl;
    }
    else {
        cout << "Конвейер " << GetUnitName() << " не запущен. Невозможно переместить автомобиль." << endl;
    }
}