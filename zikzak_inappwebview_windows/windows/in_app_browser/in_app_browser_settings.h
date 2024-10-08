#ifndef zikzak_inappWEBVIEW_PLUGIN_IN_APP_BROWSER_SETTINGS_H_
#define zikzak_inappWEBVIEW_PLUGIN_IN_APP_BROWSER_SETTINGS_H_

#include <flutter/standard_message_codec.h>
#include <optional>
#include <string>

#include "../types/rect.h"

namespace zikzak_inappwebview_plugin
{
  class InAppBrowser;

  enum InAppBrowserWindowType {
    window,
    child
  };

  class InAppBrowserSettings
  {
  public:
    bool hidden = false;
    InAppBrowserWindowType windowType = window;
    std::string toolbarTopFixedTitle;
    double windowAlphaValue = 1.0;
    std::shared_ptr<Rect> windowFrame;

    InAppBrowserSettings();
    InAppBrowserSettings(const flutter::EncodableMap& encodableMap);
    ~InAppBrowserSettings();

    flutter::EncodableMap toEncodableMap() const;
    flutter::EncodableMap getRealSettings(const InAppBrowser* inAppBrowser) const;
  };
}
#endif //zikzak_inappWEBVIEW_PLUGIN_IN_APP_BROWSER_SETTINGS_H_
