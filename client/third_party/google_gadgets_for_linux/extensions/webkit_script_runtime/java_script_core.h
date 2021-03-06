/*
  Copyright 2009 Google Inc.

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

#ifndef EXTENSIONS_WEBKIT_SCRIPT_RUNTIME_JAVA_SCRIPT_CORE_H__
#define EXTENSIONS_WEBKIT_SCRIPT_RUNTIME_JAVA_SCRIPT_CORE_H__

#if defined(HAVE_JAVA_SCRIPT_H)
#include<JavaScriptCore/JavaScript.h>
#elif defined(HAVE_JAVA_SCRIPT_CORE_H)
#include<JavaScriptCore/JavaScriptCore.h>
#else
#error WebKit/JavaScriptCore is not available.
#endif

// JavaScriptCore on MacOSX will introduce this macro definition, which
// conflicts with our Variant::TYPE_BOOL.
#undef TYPE_BOOL

#endif // EXTENSIONS_WEBKIT_SCRIPT_RUNTIME_JAVA_SCRIPT_CORE_H__
