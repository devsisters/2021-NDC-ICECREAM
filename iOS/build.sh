#!/bin/bash

BASEDIR=$(dirname "$0")

ICECC_VERSION="$BASEDIR/../icecream-environments/native_mac.tar.gz,Darwin19_x86_64:$BASEDIR/../icecream-environments/darwin19_mac.tar.gz" \
  ICECC_CC="$(xcrun --find clang)" \
  ICECC_CXX="$(xcrun --find clang)" \
  CC="$(brew --prefix devsisters-icecream)/libexec/icecc/bin/clang" \
  CXX="$(brew --prefix devsisters-icecream)/libexec/icecc/bin/clang++" \
  xcodebuild archive \
  -scheme icecream \
  -sdk iphonesimulator \
  -parallelizeTargets \
  -jobs 40 \
  -archivePath build \
  GCC_PRECOMPILE_PREFIX_HEADER=NO
