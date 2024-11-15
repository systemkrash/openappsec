// Copyright (C) 2022 Check Point Software Technologies Ltd. All rights reserved.

// Licensed under the Apache License, Version 2.0 (the "License");
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __CONNECTION_COMPONENT_H__
#define __CONNECTION_COMPONENT_H__

#include <map>
#include <string>

#include "i_agent_details.h"
#include "i_encryptor.h"
#include "i_environment.h"
#include "i_mainloop.h"
#include "i_messaging.h"
#include "i_time_get.h"
#include "interfaces/i_messaging_connection.h"

#include "maybe_res.h"

class ConnectionComponent : Singleton::Provide<I_MessagingConnection>
{
public:
    ConnectionComponent();
    ~ConnectionComponent();
    void init();

private:
    class Impl;
    std::unique_ptr<Impl> pimpl;
};

#endif // __CONNECTION_COMPONENT_H__
