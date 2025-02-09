/*========================================================================
  VES --- VTK OpenGL ES Rendering Toolkit

      http://www.kitware.com/ves

  Copyright 2011 Kitware, Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ========================================================================*/

#ifndef VESMODELVIEWUNIFORM_H
#define VESMODELVIEWUNIFORM_H

#include "vesUniform.h"

// VES includes
#include "vesMath.h"
#include "vesRenderStage.h"
#include "vesSetGet.h"

// C++ includes
#include <string>

class vesModelViewUniform : public vesUniform
{
public:
  vesTypeMacro(vesModelViewUniform);

  vesModelViewUniform(const std::string &name="modelViewMatrix") :
    vesUniform(name, vesMatrix4x4f(vesMatrix4x4f::Identity()))
  {
  }

  virtual void update(const vesRenderState &renderState, const vesShaderProgram &program)
  {
    vesNotUsed(program);
    this->set(*renderState.m_modelViewMatrix);
  }
};


#endif // VESMODELVIEWUNIFORM_H
