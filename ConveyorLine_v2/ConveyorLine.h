#ifndef CONVEYOR_LINE_H
#define CONVEYOR_LINE_H

#include "AbstractAssemblyUnit.h"
#include <iostream>

using namespace std;

class ConveyorLine : public AbstractAssemblyUnit {
private:
    bool isRunning;  // Статус работы конвейера (запущен/остановлен)

public:
    ConveyorLine(const CString& name);// Конструктор класса ConveyorLine

    void StartOperation() override;// Переопределение метода начала работы

    void StopOperation() override;// Переопределение метода остановки работы
    
    bool IsRunning() const;// Метод для проверки статуса работы конвейера

    void MoveCar(const CString& carModel);// Метод для перемещения автомобиля по конвейеру
};

#endif