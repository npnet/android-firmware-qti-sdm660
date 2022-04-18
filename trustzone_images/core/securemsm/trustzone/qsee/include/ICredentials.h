#ifndef __ICREDENTIALS_H
#define __ICREDENTIALS_H

// AUTOGENERATED FILE: DO NOT EDIT

#include <stdint.h>
#include "object.h"

// Copyright (c) 2015 Qualcomm Technologies, Inc.  All Rights Reserved.

// Qualcomm Technologies Proprietary and Confidential.

#define ICredentials_ERROR_NOT_FOUND INT32_C(10)
#define ICredentials_ERROR_NAME_SIZE INT32_C(11)
#define ICredentials_ERROR_VALUE_SIZE INT32_C(12)

#define ICredentials_OP_getPropertyByIndex 0
#define ICredentials_OP_getValueByName 1

static inline int32_t
ICredentials_release(Object self)
{
  return Object_invoke(self, Object_OP_release, 0, 0);
}

static inline int32_t
ICredentials_retain(Object self)
{
  return Object_invoke(self, Object_OP_retain, 0, 0);
}

static inline int32_t
ICredentials_getPropertyByIndex(Object self, uint32_t index_val, void *name_ptr, size_t name_len, size_t *name_lenout, void *value_ptr, size_t value_len, size_t *value_lenout)
{
  ObjectArg a[3];
  a[0].b = (ObjectBuf) { &index_val, sizeof(uint32_t) };
  a[1].b = (ObjectBuf) { name_ptr, name_len * 1 };
  a[2].b = (ObjectBuf) { value_ptr, value_len * 1 };

  int32_t result = Object_invoke(self, ICredentials_OP_getPropertyByIndex, a, ObjectCounts_pack(1, 2, 0, 0));

  *name_lenout = a[1].b.size / 1;
  *value_lenout = a[2].b.size / 1;

  return result;
}

static inline int32_t
ICredentials_getValueByName(Object self, const void *name_ptr, size_t name_len, void *value_ptr, size_t value_len, size_t *value_lenout)
{
  ObjectArg a[2];
  a[0].bi = (ObjectBufIn) { name_ptr, name_len * 1 };
  a[1].b = (ObjectBuf) { value_ptr, value_len * 1 };

  int32_t result = Object_invoke(self, ICredentials_OP_getValueByName, a, ObjectCounts_pack(1, 1, 0, 0));

  *value_lenout = a[1].b.size / 1;

  return result;
}


#endif /* __ICREDENTIALS_H */