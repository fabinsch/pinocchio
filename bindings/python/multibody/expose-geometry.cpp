//
// Copyright (c) 2015-2016 CNRS
//

#include "pinocchio/bindings/python/fwd.hpp"
#include "pinocchio/bindings/python/multibody/geometry-object.hpp"
#include "pinocchio/bindings/python/multibody/geometry-model.hpp"
#include "pinocchio/bindings/python/multibody/geometry-data.hpp"
#include "pinocchio/bindings/python/utils/std-aligned-vector.hpp"
#include "pinocchio/bindings/python/utils/namespace.hpp"

namespace pinocchio
{
  namespace python
  {
    
    void exposeGeometry()
    {
      // using the geometry scope
      bp::scope current_scope = getOrCreatePythonNamespace("geometry");

      GeometryObjectPythonVisitor::expose();
      StdAlignedVectorPythonVisitor<GeometryObject>::expose("StdVec_GeometryObject");
      
      CollisionPairPythonVisitor::expose();
      GeometryModelPythonVisitor::expose();
      GeometryDataPythonVisitor::expose();
    }
    
  } // namespace python
} // namespace pinocchio
