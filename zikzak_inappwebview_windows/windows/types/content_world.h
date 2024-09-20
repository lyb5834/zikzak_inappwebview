#ifndef zikzak_inappWEBVIEW_PLUGIN_CONTENT_WORLD_H_
#define zikzak_inappWEBVIEW_PLUGIN_CONTENT_WORLD_H_

#include <flutter/standard_method_codec.h>
#include <string>

#include "../utils/flutter.h"

namespace zikzak_inappwebview_plugin
{
  class ContentWorld
  {
  public:

    const std::string name;

    ContentWorld(const std::string& name);
    ContentWorld(const flutter::EncodableMap& map);
    ~ContentWorld();

    bool isSame(const ContentWorld& contentWorld) const;
    bool isSame(const std::shared_ptr<ContentWorld> contentWorld) const;

    const static std::shared_ptr<ContentWorld> page();
    const static std::shared_ptr<ContentWorld> defaultClient();

    static bool isPage(const ContentWorld& contentWorld);
    static bool isPage(const std::shared_ptr<ContentWorld> contentWorld);
    static bool isDefaultClient(const ContentWorld& contentWorld);
    static bool isDefaultClient(const std::shared_ptr<ContentWorld> contentWorld);
  };
}
#endif //zikzak_inappWEBVIEW_PLUGIN_CONTENT_WORLD_H_
