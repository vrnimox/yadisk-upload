/*
Copyright 2017 hoxnox <hoxnox@gmail.com>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#pragma once

#ifndef ILOG
#include <iostream>
#endif

namespace yandex {

/**@brief Logging macro
 *
 * These should be redefined in client code*/

#ifndef _
#define _(X) (X)
#endif

#ifndef ILOG
#define ILOG std::cout
#endif

#ifndef ELOG
#define ELOG std::cout
#endif

#ifndef VLOG
#define VLOG std::cout
#endif

} // namespace

