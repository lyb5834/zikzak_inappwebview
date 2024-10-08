import 'dart:async';
import 'package:zikzak_inappwebview_platform_interface/zikzak_inappwebview_platform_interface.dart';

///{@macro zikzak_inappwebview_platform_interface.PlatformProxyController}
class ProxyController {
  ///{@macro zikzak_inappwebview_platform_interface.PlatformProxyController}
  ProxyController()
      : this.fromPlatformCreationParams(
          const PlatformProxyControllerCreationParams(),
        );

  /// Constructs a [ProxyController] from creation params for a specific
  /// platform.
  ProxyController.fromPlatformCreationParams(
    PlatformProxyControllerCreationParams params,
  ) : this.fromPlatform(PlatformProxyController(params));

  /// Constructs a [ProxyController] from a specific platform
  /// implementation.
  ProxyController.fromPlatform(this.platform);

  /// Implementation of [PlatformProxyController] for the current platform.
  final PlatformProxyController platform;

  static ProxyController? _instance;

  ///Gets the [ProxyController] shared instance.
  static ProxyController instance() {
    if (_instance == null) {
      _instance = ProxyController();
    }
    return _instance!;
  }

  ///{@macro zikzak_inappwebview_platform_interface.PlatformProxyController.setProxyOverride}
  Future<void> setProxyOverride({required ProxySettings settings}) =>
      platform.setProxyOverride(settings: settings);

  ///{@macro zikzak_inappwebview_platform_interface.PlatformProxyController.clearProxyOverride}
  Future<void> clearProxyOverride() => platform.clearProxyOverride();
}
