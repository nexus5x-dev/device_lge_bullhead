// libprotobuf_shim
// Copyright (C) Lunarixus 2020

#include <string>
#include <log/log.h>

#define LOG_TAG "libprotobuf_shim"

namespace android {

std::string _ZN6google8protobuf8internal13empty_string_E() {
    ALOGV("Hit shim! Now shimming protobuf");

    std::string new_string;

    return new_string;
}

} // namespace android
