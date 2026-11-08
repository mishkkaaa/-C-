#ifndef ABSTRACT_ASSEMBLY_UNIT_H
#define ABSTRACT_ASSEMBLY_UNIT_H

using namespace std;

// Абстрактный базовый класс для всех единиц сборочного участка завода
class AbstractAssemblyUnit {
protected:
    CString unitName;  // Название единицы

public:
    AbstractAssemblyUnit(const CString& name);// Конструктор

    virtual ~AbstractAssemblyUnit();// Виртуальный деструктор

    virtual void StartOperation() = 0;// виртуальные функции для начала и остановки работы

    virtual void StopOperation() = 0;
    
    CString GetUnitName() const;// Метод для получения имени единицы
};

#endif