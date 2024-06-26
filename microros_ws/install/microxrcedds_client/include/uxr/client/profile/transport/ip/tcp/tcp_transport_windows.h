// Copyright 2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef UXR_CLIENT_TCP_TRANSPORT_WINDOWS_H_
#define UXR_CLIENT_TCP_TRANSPORT_WINDOWS_H_

#ifdef __cplusplus
extern "C"
{
#endif // ifdef __cplusplus

#include <winsock2.h>

typedef struct uxrTCPPlatform
{
    WSAPOLLFD poll_fd;

} uxrTCPPlatform;

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif // UXR_CLIENT_TCP_TRANSPORT_WINDOWS_H_
