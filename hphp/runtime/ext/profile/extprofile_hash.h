/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_HASH_H__
#define __EXTPROFILE_HASH_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_hash.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_hash(CStrRef algo, CStrRef data, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(hash);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hash(algo, data, raw_output);
}

inline Array x_hash_algos() {
  FUNCTION_INJECTION_BUILTIN(hash_algos);
  return f_hash_algos();
}

inline Variant x_hash_init(CStrRef algo, int options = 0, CStrRef key = null_string) {
  FUNCTION_INJECTION_BUILTIN(hash_init);
  return f_hash_init(algo, options, key);
}

inline Variant x_hash_file(CStrRef algo, CStrRef filename, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(hash_file);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hash_file(algo, filename, raw_output);
}

inline String x_hash_final(CObjRef context, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(hash_final);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hash_final(context, raw_output);
}

inline Variant x_hash_hmac_file(CStrRef algo, CStrRef filename, CStrRef key, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(hash_hmac_file);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hash_hmac_file(algo, filename, key, raw_output);
}

inline Variant x_hash_hmac(CStrRef algo, CStrRef data, CStrRef key, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(hash_hmac);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hash_hmac(algo, data, key, raw_output);
}

inline bool x_hash_update_file(CObjRef init_context, CStrRef filename, CObjRef stream_context = null) {
  FUNCTION_INJECTION_BUILTIN(hash_update_file);
  return f_hash_update_file(init_context, filename, stream_context);
}

inline int64 x_hash_update_stream(CObjRef context, CObjRef handle, int length = -1) {
  FUNCTION_INJECTION_BUILTIN(hash_update_stream);
  return f_hash_update_stream(context, handle, length);
}

inline bool x_hash_update(CObjRef context, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(hash_update);
  return f_hash_update(context, data);
}

inline int64 x_furchash_hphp_ext(CStrRef key, int len, int nPart) {
  FUNCTION_INJECTION_BUILTIN(furchash_hphp_ext);
  return f_furchash_hphp_ext(key, len, nPart);
}

inline bool x_furchash_hphp_ext_supported() {
  FUNCTION_INJECTION_BUILTIN(furchash_hphp_ext_supported);
  return f_furchash_hphp_ext_supported();
}

inline int64 x_hphp_murmurhash(CStrRef key, int len, int seed) {
  FUNCTION_INJECTION_BUILTIN(hphp_murmurhash);
  return f_hphp_murmurhash(key, len, seed);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_HASH_H__