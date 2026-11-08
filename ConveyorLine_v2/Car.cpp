#include "pch.h"
#include "Car.h"

// Определяем все возможные компоненты
const vector<CString> Car::allComponents = {
    L"Двигатель", L"Трансмиссия", L"Кузов", L"Колеса", L"Рулевое управление",
    L"Тормозная система", L"Подвеска", L"Система топливоснабжения", L"Электрическая система",
    L"Система охлаждения", L"Система выпуска отработанных газов", L"Кондиционер", L"Климат контроль",
    L"Аудиосистема", L"Подогрев сиденья", L"Люк для крыши", L"Запасное колесо", L"Звукоизоляция"
};

Car::Car(const CString& model) : modelName(model) {}

void Car::SetComponentsFromArray(const bool selectedComponents[18]) {
    components.clear(); // Очищаем текущие компоненты
    for (int i = 0; i < 18; ++i) {
        if (selectedComponents[i]) {
            components.push_back(allComponents[i]); // Добавляем выбранный компонент
        }
    }
}

const vector<CString>& Car::GetComponents() const {
    return components;
}

CString Car::GetModelName() const {
    return modelName;
}