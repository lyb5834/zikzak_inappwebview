#ifndef zikzak_inappWEBVIEW_PLUGIN_WEB_RESOURCE_REQUEST_H_
#define zikzak_inappWEBVIEW_PLUGIN_WEB_RESOURCE_REQUEST_H_

#include <flutter/standard_method_codec.h>
#include <optional>

namespace zikzak_inappwebview_plugin
{
  class WebResourceRequest
  {
  public:
    const std::optional<std::string> url;
    const std::optional<std::string> method;
    const std::optional<std::map<std::string, std::string>> headers;
    const std::optional<bool> isForMainFrame;

    WebResourceRequest(const std::optional<std::string>& url, const std::optional<std::string>& method,
      const std::optional<std::map<std::string, std::string>>& headers, const std::optional<bool>& isForMainFrame);
    WebResourceRequest(const flutter::EncodableMap& map);
    ~WebResourceRequest() = default;

    flutter::EncodableMap toEncodableMap() const;
  };
}

#endif //zikzak_inappWEBVIEW_PLUGIN_WEB_RESOURCE_REQUEST_H_
