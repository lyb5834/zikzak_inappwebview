#ifndef zikzak_inappWEBVIEW_PLUGIN_WEB_HISTORY_ITEM_H_
#define zikzak_inappWEBVIEW_PLUGIN_WEB_HISTORY_ITEM_H_

#include <flutter/standard_method_codec.h>
#include <optional>

#include "../utils/flutter.h"

namespace zikzak_inappwebview_plugin
{
  class WebHistoryItem
  {
  public:
    const std::optional<int64_t> entryId;
    const std::optional<int64_t> index;
    const std::optional<int64_t> offset;
    const std::optional<std::string> originalUrl;
    const std::optional<std::string> title;
    const std::optional<std::string> url;

    WebHistoryItem(const std::optional<int64_t>& entryId, const std::optional<int64_t>& index, const std::optional<int64_t>& offset,
      const std::optional<std::string>& originalUrl, const std::optional<std::string>& title,
      const std::optional<std::string>& url);
    WebHistoryItem(const flutter::EncodableMap& map);
    ~WebHistoryItem() = default;

    flutter::EncodableMap toEncodableMap() const;
  };
}

#endif //zikzak_inappWEBVIEW_PLUGIN_WEB_HISTORY_ITEM_H_
