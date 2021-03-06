// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2008 Emweb bv, Herent, Belgium.
 *
 * See the LICENSE file for terms of use.
 */
#ifndef HTTP_HTTP_REQUEST_H_
#define HTTP_HTTP_REQUEST_H_

#include <sstream>

#include "WebRequest.h"
#include "WtReply.h"
#include "Wt/Http/Message.h"

namespace http {
namespace server {

class HTTPRequest final : public Wt::WebResponse
{
public:
  HTTPRequest(WtReplyPtr wtReply, const Wt::EntryPoint *entryPoint);
  void reset(WtReplyPtr reply, const Wt::EntryPoint *entryPoint);
  bool done() const;

  virtual void flush(ResponseState state, const WriteCallback& callback) override;
  virtual void readWebSocketMessage(const ReadCallback& callback) override;
  virtual bool webSocketMessagePending() const override;
  virtual bool detectDisconnect(const DisconnectCallback& callback) override;

  virtual std::istream& in() override { return reply_->in(); }
  virtual std::ostream& out() override { return reply_->out(); }
  virtual std::ostream& err() override { return std::cerr; }

  virtual void setStatus(int status) override;
  virtual void setContentLength(::int64_t length) override;

  virtual void addHeader(const std::string& name, std::string_view value) override;
  virtual void setContentType(const std::string& value) override;
  virtual void setRedirect(const std::string& url) override;

  virtual std::string_view contentType() const override;
  virtual ::int64_t contentLength() const override;

  virtual std::string_view envValue(const char *name) const override;
  virtual std::string_view headerValue(const char *name) const override;
  virtual std::vector<Wt::Http::Message::Header> headers() const override;
  virtual std::string_view serverName() const override;
  virtual std::string_view serverPort() const override;
  virtual std::string_view scriptName() const override;
  virtual std::string_view requestMethod() const override;
  virtual std::string_view queryString() const override;
  virtual std::string_view pathInfo() const override;
  virtual std::string_view remoteAddr() const override;
  virtual const char *urlScheme() const override;

  virtual WebRequest &operator<<(std::string_view toclient) override { out() << toclient.data(); return *this;};

  bool isSynchronous() const;
  virtual std::unique_ptr<Wt::WSslInfo> sslInfo(const Wt::Configuration & conf) const override;
  virtual const std::vector<std::pair<std::string, std::string> > &urlParams() const override;

private:
  WtReplyPtr reply_;
  mutable std::string serverPort_;
  mutable std::vector<std::string> s_;

#ifdef HTTP_WITH_SSL
  // Extracts SSL info from internal Wt-specific base64-encoded JSON implementation,
  // used for Wt's own reverse proxy (dedicated session processes).
  std::unique_ptr<Wt::WSslInfo> sslInfoFromJson() const;
#endif // HTTP_WITH_SSL
  // Extract SSL info from X-SSL-Client-* headers. Can be used when Wt is behind an SSL-terminating
  // proxy like nginx or Apache (HAProxy's headers are not currently supported).
  std::unique_ptr<Wt::WSslInfo> sslInfoFromHeaders() const;

  const char *cstr(const buffer_string& bs) const;

  static const std::string empty_;
};

}
}

#endif // HTTP_HTTP_REQUEST_H_
