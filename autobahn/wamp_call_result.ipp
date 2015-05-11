///////////////////////////////////////////////////////////////////////////////
//
//  Copyright (C) 2014 Tavendo GmbH
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
///////////////////////////////////////////////////////////////////////////////

#include "wamp_arguments.hpp"

namespace autobahn {

inline wamp_call_result::wamp_call_result()
    : m_arguments(EMPTY_ARGUMENTS)
    , m_kw_arguments(EMPTY_KW_ARGUMENTS)
{
}

inline const msgpack::object& wamp_call_result::arguments() const
{
    return m_arguments;
}

inline const msgpack::object& wamp_call_result::kw_arguments() const
{
    return m_kw_arguments;
}

inline void wamp_call_result::set_arguments(const msgpack::object& arguments)
{
    m_arguments = arguments;
}

inline void wamp_call_result::set_kw_arguments(const msgpack::object& kw_arguments)
{
    m_kw_arguments = kw_arguments;
}

} // namespace autobahn
