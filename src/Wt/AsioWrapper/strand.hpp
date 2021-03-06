// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2016 Emweb bv, Herent, Belgium.
 *
 * See the LICENSE file for terms of use.
 */
#ifndef WT_ASIO_STRAND_H_
#define WT_ASIO_STRAND_H_

#include "Wt/WConfig.h"

#ifdef WT_ASIO_IS_BOOST_ASIO

#include <boost/asio/strand.hpp>
namespace Wt {
  namespace AsioWrapper {
#if BOOST_VERSION >= 106600
    using strand = boost::asio::io_context::strand;
    //using strand = boost::asio::strand<boost::asio::io_context::executor_type>;
    //#define MODERN 1
#else
    using strand = boost::asio::strand;
#endif
  }
}

#else // WT_ASIO_IS_STANDALONE_ASIO

#include <asio/version.hpp>
#include <asio/strand.hpp>
namespace Wt {
  namespace AsioWrapper {
#if ASIO_VERSION >= 101100
    using strand = asio::io_service::strand;
#else
    using strand = asio::strand;
#endif
  }
}

#endif // WT_ASIO_IS_BOOST_ASIO

#include "namespace.hpp"

#endif // WT_ASIO_STRAND_H_
