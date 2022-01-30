#pragma once

#include <prim/seadRuntimeTypeInfo.h>

class hkpShape;

namespace ksys::phys {

enum class ShapeType {
    Sphere = 0,
    Capsule = 1,
    Box = 2,
    Cylinder = 3,
    Polytope = 4,
    CharacterPrism = 6,
    Unknown = -1,
};

class Shape {
    SEAD_RTTI_BASE(Shape)

public:
    Shape() = default;
    virtual ~Shape() = default;

    virtual hkpShape* getHavokShape() = 0;
    virtual const hkpShape* getHavokShape() const = 0;
    virtual void updateHavokShape() = 0;
    virtual void setScale(float scale) = 0;
};

}  // namespace ksys::phys
