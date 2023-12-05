/*
 * Copyright 2020-2023 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.  *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef HAS_GPU_LOCALE

#include "sys_basic.h"
#include "chplrt.h"
#include "chpl-mem.h"
#include "chpl-gpu.h"
#include "chpl-gpu-impl.h"
#include "chpl-tasks.h"
#include "error.h"
#include "chplcgfns.h"
#include "chpl-env-gen.h"
#include "chpl-linefile-support.h"

#include <assert.h>

// this is compiler-generated
extern const char* chpl_gpuBinary;

void chpl_gpu_impl_use_device(c_sublocid_t dev_id) {}

extern c_nodeid_t chpl_nodeID;


void chpl_gpu_impl_init(int* num_devices) {}

bool chpl_gpu_impl_is_device_ptr(const void* ptr) { return 0; }

bool chpl_gpu_impl_is_host_ptr(const void* ptr) { return 0; }

inline void chpl_gpu_impl_launch_kernel(int ln, int32_t fn,
                                        const char* name,
                                        int grd_dim_x,
                                        int grd_dim_y,
                                        int grd_dim_z,
                                        int blk_dim_x,
                                        int blk_dim_y,
                                        int blk_dim_z,
                                        void* stream,
                                        int nargs, va_list args) {}

inline void chpl_gpu_impl_launch_kernel_flat(int ln, int32_t fn,
                                             const char* name,
                                             int64_t num_threads,
                                             int blk_dim,
                                             void* stream,
                                             int nargs,
                                             va_list args) {}

void* chpl_gpu_impl_memset(void* addr, const uint8_t val, size_t n,
                           void* stream) { return NULL; }


void chpl_gpu_impl_copy_device_to_host(void* dst, const void* src, size_t n,
                                       void* stream) {}

void chpl_gpu_impl_copy_host_to_device(void* dst, const void* src, size_t n,
                                       void* stream) {}

void chpl_gpu_impl_copy_device_to_device(void* dst, const void* src, size_t n,
                                         void* stream) {}


void* chpl_gpu_impl_comm_async(void *dst, void *src, size_t n) { return NULL; }

void chpl_gpu_impl_comm_wait(void *stream) {}

void* chpl_gpu_impl_mem_array_alloc(size_t size) { return NULL; }

void* chpl_gpu_impl_mem_alloc(size_t size) { return NULL; }

void chpl_gpu_impl_mem_free(void* memAlloc) {}

void chpl_gpu_impl_hostmem_register(void *memAlloc, size_t size) {}

size_t chpl_gpu_impl_get_alloc_size(void* ptr) { return 0; }

unsigned int chpl_gpu_device_clock_rate(int32_t devNum) { return 0; }

bool chpl_gpu_impl_can_access_peer(int dev1, int dev2) { return 0; }

void chpl_gpu_impl_set_peer_access(int dev1, int dev2, bool enable) {}

void chpl_gpu_impl_synchronize(void) {}

bool chpl_gpu_impl_stream_supported(void) { return 0; }

void* chpl_gpu_impl_stream_create(void) { return NULL; }

void chpl_gpu_impl_stream_destroy(void* stream) {}

bool chpl_gpu_impl_stream_ready(void* stream) { return 0; }

void chpl_gpu_impl_stream_synchronize(void* stream) {}

bool chpl_gpu_impl_can_reduce(void) { return 0; }

#endif // HAS_GPU_LOCALE
