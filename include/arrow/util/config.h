// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#define ARROW_VERSION_MAJOR 19
#define ARROW_VERSION_MINOR 0
#define ARROW_VERSION_PATCH 1
#define ARROW_VERSION ((ARROW_VERSION_MAJOR * 1000) + ARROW_VERSION_MINOR) * 1000 + ARROW_VERSION_PATCH

#define ARROW_VERSION_STRING "19.0.1"

#define ARROW_SO_VERSION "1900"
#define ARROW_FULL_SO_VERSION "1900.1.0"

#define ARROW_CXX_COMPILER_ID "GNU"
#define ARROW_CXX_COMPILER_VERSION "13.1.0"
#define ARROW_CXX_COMPILER_FLAGS " -Wno-noexcept-type -Wno-self-move  -fdiagnostics-color=always  -Wall -fno-semantic-interposition -msse4.2 "

#define ARROW_BUILD_TYPE "RELEASE"

#define ARROW_PACKAGE_KIND ""

#define ARROW_COMPUTE
#define ARROW_CSV
/* #undef ARROW_CUDA */
#define ARROW_DATASET
#define ARROW_FILESYSTEM
/* #undef ARROW_FLIGHT */
/* #undef ARROW_FLIGHT_SQL */
#define ARROW_IPC
/* #undef ARROW_JEMALLOC */
/* #undef ARROW_JEMALLOC_VENDORED */
/* #undef ARROW_JSON */
#define ARROW_MIMALLOC
/* #undef ARROW_ORC */
#define ARROW_PARQUET
/* #undef ARROW_SUBSTRAIT */

/* #undef ARROW_AZURE */
#define ARROW_ENABLE_THREADING
/* #undef ARROW_GCS */
/* #undef ARROW_HDFS */
/* #undef ARROW_S3 */
/* #undef ARROW_USE_GLOG */
#define ARROW_USE_NATIVE_INT128
/* #undef ARROW_WITH_BROTLI */
/* #undef ARROW_WITH_BZ2 */
/* #undef ARROW_WITH_LZ4 */
/* #undef ARROW_WITH_MUSL */
/* #undef ARROW_WITH_OPENTELEMETRY */
#define ARROW_WITH_RE2
/* #undef ARROW_WITH_SNAPPY */
/* #undef ARROW_WITH_UCX */
#define ARROW_WITH_UTF8PROC
/* #undef ARROW_WITH_ZLIB */
/* #undef ARROW_WITH_ZSTD */
/* #undef PARQUET_REQUIRE_ENCRYPTION */
