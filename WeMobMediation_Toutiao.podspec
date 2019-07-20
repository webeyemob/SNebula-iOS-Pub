Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_Toutiao"
  spec.version      = "2.1.0.1.4"
  spec.summary      = "Toutiao Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "WeSdk"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "toutiao-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_Toutiao/#{spec.version}/WeMobMediation_Toutiao.framework"
  spec.dependency 'Bytedance-UnionAD', '~> 2.1.0.1'
  spec.dependency "WeMobSdk", "~> 1.2.1"
end