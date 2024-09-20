#ifndef zikzak_inappWEBVIEW_SCREENSHOT_CONFIGURATION_H_
#define zikzak_inappWEBVIEW_SCREENSHOT_CONFIGURATION_H_

#include <flutter/standard_method_codec.h>
#include <optional>
#include <string>

#include "../types/rect.h"
#include "../utils/string.h"

namespace zikzak_inappwebview_plugin
{
  enum CompressFormat {
    png,
    jpeg,
    webp
  };

  CompressFormat CompressFormatFromString(const std::string& compressFormat);
  std::string CompressFormatToString(const CompressFormat& compressFormat);

  class ScreenshotConfiguration
  {
  public:
    const CompressFormat compressFormat;
    const int64_t quality;
    const std::optional<std::shared_ptr<Rect>> rect;

    ScreenshotConfiguration(
      const CompressFormat& compressFormat,
      const int64_t& quality,
      const std::optional<std::shared_ptr<Rect>> rect
    );
    ScreenshotConfiguration(const flutter::EncodableMap& map);
    ~ScreenshotConfiguration();
  };
}
#endif //zikzak_inappWEBVIEW_SCREENSHOT_CONFIGURATION_H_
