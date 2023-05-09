Pod::Spec.new do |spec|
  spec.name         = "SNebulaAdMediation_Mobrain"
  spec.version      = "3.8.0.2.0"
  spec.summary      = "Mobrain Adapters for mediating through TaurusX Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAdMediation_Mobrain_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAdMediation_Mobrain/SNebulaAdMediation_Mobrain_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAdMediation_Mobrain_#{spec.version}/SNebulaAdMediation_Mobrain.xcframework", "SNebulaAdMediation_Mobrain_#{spec.version}/ABUAdSDK.framework"
  spec.dependency "SNebulaAds"
end
