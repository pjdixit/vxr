#pragma once

// ----------------------------------------------------------------------------------------
// MIT License
// 
// Copyright(c) 2018 V�ctor �vila
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// ----------------------------------------------------------------------------------------

// ----------------------------------------------------------------------------------------
// Core
// ----------------------------------------------------------------------------------------

#include "../../include/core/gameobject.h"
#include "../../include/core/scene.h"
#include "../../include/core/assets.h"

// ----------------------------------------------------------------------------------------
// Engine
// ----------------------------------------------------------------------------------------

#include "../../include/engine/GPU.h"

// ----------------------------------------------------------------------------------------
// Components
// ----------------------------------------------------------------------------------------

#include "../../include/components/light.h"
#include "../../include/components/renderer.h"
#include "../../include/components/transform.h"
#include "../../include/components/mesh_filter.h"
#include "../../include/components/camera.h"
#include "../../include/components/custom.h"

// ----------------------------------------------------------------------------------------
// Materials
// ----------------------------------------------------------------------------------------

#include "../../include/graphics/materials/skybox.h"
#include "../../include/graphics/materials/standard.h"
#include "../../include/graphics/materials/unlit.h"

#include "../../include/graphics/materials/pass_standard.h"
#include "../../include/graphics/materials/pass_ibl.h"
#include "../../include/graphics/materials/pass_filters.h"