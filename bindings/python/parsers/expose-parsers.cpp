//
// Copyright (c) 2015-2020 CNRS INRIA
//

#include "pinocchio/bindings/python/parsers/urdf.hpp"
#include "pinocchio/bindings/python/parsers/srdf.hpp"
#include "pinocchio/bindings/python/parsers/sample-models.hpp"
#include "pinocchio/bindings/python/utils/namespace.hpp"

namespace pinocchio
{
  namespace python
  {
    void exposeParsers()
    {
      // using the parser scope
      namespace bp = boost::python;
      bp::scope current_scope = getOrCreatePythonNamespace("parser");

      exposeURDFParser();
      exposeSRDFParser();
      exposeSampleModels();
    }
    
  } // namespace python
} // namespace pinocchio

