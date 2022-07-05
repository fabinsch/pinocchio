//
// Copyright (c) 2015-2020 CNRS INRIA
//

#include "pinocchio/bindings/python/algorithm/algorithms.hpp"
#include "pinocchio/bindings/python/utils/namespace.hpp"

namespace pinocchio
{
  namespace python
  {
    
    void exposeAlgorithms()
    {
      // using the algorithm scope
      bp::scope current_scope = getOrCreatePythonNamespace("algorithm");
      
      exposeJointsAlgo();
      exposeABA();
      exposeCRBA();
      exposeCentroidal();
      exposeRNEA();
      exposeCOM();
      exposeFramesAlgo();
      exposeEnergy();
      exposeKinematics();
      exposeDynamics();
      exposeCAT();
      exposeJacobian();
      exposeGeometryAlgo();
      exposeKinematicRegressor();
      exposeRegressor();
      exposeCholesky();
      exposeModelAlgo();

      // expose derivative version of the algorithms
      exposeRNEADerivatives();
      exposeABADerivatives();
      exposeKinematicsDerivatives();
      exposeFramesDerivatives();
      exposeCentroidalDerivatives();
    }
    
  } // namespace python
} // namespace pinocchio
