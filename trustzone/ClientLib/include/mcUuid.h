/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MC_UUID_H_
#define MC_UUID_H_

#ifdef WIN32
#define _UNUSED
#else
#define _UNUSED __attribute__((unused))
#endif

#define UUID_TYPE

#define UUID_LENGTH 16
/** Universally Unique Identifier (UUID) according to ISO/IEC 11578. */
typedef struct {
    uint8_t value[UUID_LENGTH]; /**< Value of the UUID. */
} mcUuid_t, *mcUuid_ptr;

/** UUID value used as free marker in service provider containers. */
#define MC_UUID_FREE_DEFINE \
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, \
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }

static _UNUSED const mcUuid_t MC_UUID_FREE = {
    MC_UUID_FREE_DEFINE
};

/** Reserved UUID. */
#define MC_UUID_RESERVED_DEFINE \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

static _UNUSED const mcUuid_t MC_UUID_RESERVED = {
    MC_UUID_RESERVED_DEFINE
};

/** UUID for system applications. */
#define MC_UUID_SYSTEM_DEFINE \
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, \
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE }

static _UNUSED const mcUuid_t MC_UUID_SYSTEM = {
    MC_UUID_SYSTEM_DEFINE
};

#define MC_UUID_RTM_DEFINE \
    { 0x12, 0x34, 0x12, 0x34, 0x12, 0x34, 0x12, 0x34,       \
      0x12, 0x34, 0x12, 0x34, 0x12, 0x34, 0x12, 0x34 }

static _UNUSED const mcUuid_t MC_UUID_RTM = {
    MC_UUID_RTM_DEFINE
};

/** [INTERNAL]
 * TODO: Replace with v5 UUID (milestone #3) [/INTERNAL]
 */
#define LTA_UUID_DEFINE \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         \
      0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11}

/**
 * Monotonic counter TA for RPMB
 */
#define TA_MONOTONIC_COUNTER_UUID \
	{ 0x07, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,          \
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22}

/**
 * RPMB Driver UUID
 */
#define DRV_RPMB_UUID        \
    { 0x07, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,          \
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21 }

/**
 * Secure Storage Driver UUID
 */
#define DRV_SFS_UUID        \
    { 0x07, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,          \
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20 }

/**
 * SFS Proxy TA UUID
 */
#define TA_SFS_PROXY_UUID   \
    { 0x07, 0x05, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00,           \
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20 }

/**
 * Gatekeeper TA UUID
 */
#define TA_GATEKEEPER_UUID \
    { 0x07, 0x06, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, \
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

/**
 * Key Injection TA UUID
 */
#define KEY_INJECTION_TA_UUID \
    { 0x10, 0xC9, 0xCD, 0x73, 0xB8, 0x9A, 0x5D, 0xD3, \
      0x94, 0x1A, 0x17, 0x83, 0x39, 0x0B, 0xBD, 0xE4 }

#endif // MC_UUID_H_
