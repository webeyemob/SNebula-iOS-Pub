Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_Maio"
  spec.version      = "1.4.6.0"
  spec.summary      = "Maio Adapters for mediating through Access WeMobSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "maio-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_Maio/1.4.6.0/WeMobMediation_Maio.framework"
  spec.dependency 'MaioSDK', '1.4.6'
  spec.dependency "WeMobSdk", "~> 1.0.0"
end