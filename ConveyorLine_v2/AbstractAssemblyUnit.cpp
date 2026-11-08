#include "pch.h"
#include "AbstractAssemblyUnit.h"

AbstractAssemblyUnit::AbstractAssemblyUnit(const CString& name) : unitName(name) {}

AbstractAssemblyUnit::~AbstractAssemblyUnit() {}

CString AbstractAssemblyUnit::GetUnitName() const {
    return unitName;
}