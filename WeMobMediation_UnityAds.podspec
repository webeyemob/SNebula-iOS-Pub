Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_UnityAds"
  spec.version      = "3.1.0.0"
  spec.summary      = "UnityAds Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.1"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "unityads-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_UnityAds/#{spec.version}/WeMobMediation_UnityAds.framework"
  spec.dependency 'UnityAds', '3.1.0'
  spec.dependency "WeMobSdk", "~> 1.0.0"
end