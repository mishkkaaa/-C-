#ifndef CAR_H
#define CAR_H

#include <vector>
using namespace std;

class Car {
private:
    CString modelName;               // Название модели автомобиля
    vector<CString> components;      // Выбранные компоненты автомобиля
    static const vector<CString> allComponents; // Все возможные компоненты

public:
    Car(const CString& model);       // Конструктор

    void SetComponentsFromArray(const bool selectedComponents[18]); // Новый метод для установки компонентов
    const vector<CString>& GetComponents() const; // Получить список компонентов

    //void DisplayInfo() const;        // Отображение информации об автомобиле
    CString GetModelName() const;    // Получить название модели
};

#endif