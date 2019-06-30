Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_Amazon"
  spec.version      = "2.2.17.0"
  spec.summary      = "Amazon Adapters for mediating through Access WeMobSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "6.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "amazon-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_Amazon/2.2.17.0/WeMobMediation_Amazon.framework"
  spec.dependency 'AmazonAdSDK', '2.0.16'
  spec.dependency "WeMobSdk", "~> 1.0.0"
end