//
//  PrintJobChannelDelegate.swift
//  zikzak_inappwebview
//
//  Created by Lorenzo Pichilli on 09/05/22.
//

import Foundation

public class PrintJobChannelDelegate: ChannelDelegate {
    private weak var printJobController: PrintJobController?
    
    public init(printJobController: PrintJobController, channel: FlutterMethodChannel) {
        super.init(channel: channel)
        self.printJobController = printJobController
    }
    
    public override func handle(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
        let arguments = call.arguments as? NSDictionary
        
        switch call.method {
            case "dismiss":
                if let job = printJobController?.job {
                    let animated = arguments!["animated"] as! Bool
                    job.dismiss(animated: animated)
                    result(true)
                } else {
                    result(false)
                }
                break
            case "getInfo":
                if let printJobController = printJobController {
                    result(printJobController.getInfo()?.toMap())
                } else {
                    result(false)
                }
                break
            case "dispose":
                if let printJobController = printJobController {
                    printJobController.dispose()
                    result(true)
                } else {
                    result(false)
                }
                break
            default:
                result(FlutterMethodNotImplemented)
                break
        }
    }
    
    public func onComplete(completed: Bool, error: Error?) {
        let arguments: [String: Any?] = [
            "completed": completed,
            "error": error?.localizedDescription
        ]
        channel?.invokeMethod("onComplete", arguments: arguments)
    }
    
    public override func dispose() {
        super.dispose()
        printJobController = nil
    }
    
    deinit {
        dispose()
    }
}
