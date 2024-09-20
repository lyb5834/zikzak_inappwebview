package wtf.zikzak.zikzak_inappwebview_android.webview;

public enum WebViewChannelDelegateMethods {
  getUrl,
  getTitle,
  getProgress,
  loadUrl,
  postUrl,
  loadData,
  loadFile,
  evaluateJavascript,
  injectJavascriptFileFromUrl,
  injectCSSCode,
  injectCSSFileFromUrl,
  reload,
  goBack,
  canGoBack,
  goForward,
  canGoForward,
  goBackOrForward,
  canGoBackOrForward,
  stopLoading,
  isLoading,
  takeScreenshot,
  setSettings,
  getSettings,
  close,
  show,
  hide,
  isHidden,
  getCopyBackForwardList,
  startSafeBrowsing,
  /**
   * @deprecated
   */
  @Deprecated
  clearCache,
  clearSslPreferences,
  /**
   * @deprecated
   */
  @Deprecated
  findAll,
  findNext,
  clearMatches,
  scrollTo,
  scrollBy,
  pause,
  resume,
  pauseTimers,
  resumeTimers,
  printCurrentPage,
  getContentHeight,
  getContentWidth,
  zoomBy,
  getOriginalUrl,
  getZoomScale,
  getSelectedText,
  getHitTestResult,
  pageDown,
  pageUp,
  saveWebArchive,
  zoomIn,
  zoomOut,
  clearFocus,
  setContextMenu,
  requestFocusNodeHref,
  requestImageRef,
  getScrollX,
  getScrollY,
  getCertificate,
  clearHistory,
  addUserScript,
  removeUserScript,
  removeUserScriptsByGroupName,
  removeAllUserScripts,
  callAsyncJavaScript,
  isSecureContext,
  createWebMessageChannel,
  postWebMessage,
  addWebMessageListener,
  canScrollVertically,
  canScrollHorizontally,
  isInFullscreen,
  clearFormData
}
