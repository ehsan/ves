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

#ifndef VESSHAREDPTR_H
#define VESSHAREDPTR_H

// C/C++ includes
#if EMSCRIPTEN

// Emscripten ships with a C++0x standard library
#include <memory>

#define vesSharedPtr std::shared_ptr
#define vesWeakPtr std::weak_ptr
#define static_pointer_cast std::static_pointer_cast

#else

#include <tr1/memory>

#define vesSharedPtr std::tr1::shared_ptr
#define vesWeakPtr std::tr1::weak_ptr
#define static_pointer_cast std::tr1::static_pointer_cast

#endif

#endif // VESSHAREDPTR_H
