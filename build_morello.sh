#!/bin/bash

export CC=clang 
PURECAP_SYSROOT=/usr/lib/aarch64-linux-musl_purecap/usr/
PURECAP_FLAGS=" --sysroot=${PURECAP_SYSROOT} -I${PURECAP_SYSROOT}include/ -isystem${PURECAP_SYSROOT}src/linux-headers-morello/include"
PURECAP_ARCH_FLAGS="--target=aarch64-linux-musl_purecap  -march=morello -mabi=purecap"

export LDLIBS=" -lpcre -lcurl"

# build purecap
#export CFLAGS="${PURECAP_FLAGS} ${PURECAP_ARCH_FLAGS}"
#export LDFLAGS="${PURECAP_FLAGS} ${PURECAP_ARCH_FLAGS}"
#export TARGET=duk_test_morello
#make -B -j8



# build hybrid
export CFLAGS=""
export LDFLAGS=""
export TARGET=duk_test
make -B -j8
