Pod::Spec.new do |spec|
  spec.name         = "WeMobSdkUnity"
  spec.version      = "1.0.6"
  spec.summary      = "WeMobSdkUnity is Access Mobile Ad SDK For Unity Platform."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "wemobsdkunity-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobSdkUnity/#{spec.version}/WeMobSdk.framework"
  spec.resource = "WeMobSdkUnity/#{spec.version}/WeMobSDK.bundle"
end