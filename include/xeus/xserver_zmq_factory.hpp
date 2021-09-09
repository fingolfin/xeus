/***************************************************************************
* Copyright (c) 2016, Johan Mabille, Sylvain Corlay, Martin Renou          *
* Copyright (c) 2016, QuantStack                                           *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XEUS_SERVER_ZMQ_FACTORY_HPP
#define XEUS_SERVER_ZMQ_FACTORY_HPP

#include <memory>

#include "zmq.hpp"

#include "xserver.hpp"

namespace xeus
{
    XEUS_API
    std::unique_ptr<xserver> make_xserver(zmq::context_t& context,
                                          const xconfiguration& config,
                                          nl::json::error_handler_t eh = nl::json::error_handler_t::strict);

    XEUS_API
    std::unique_ptr<xserver> make_xserver_control_main(zmq::context_t& context,
                                                       const xconfiguration& config,
                                                       nl::json::error_handler_t eh = nl::json::error_handler_t::strict);

    XEUS_API
    std::unique_ptr<xserver> make_xserver_shell_main(zmq::context_t& context,
                                                     const xconfiguration& config,
                                                     nl::json::error_handler_t eh = nl::json::error_handler_t::strict);
}

#endif

