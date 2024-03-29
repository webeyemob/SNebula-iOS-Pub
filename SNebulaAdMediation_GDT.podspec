Pod::Spec.new do |spec|
  spec.name         = "SNebulaAdMediation_GDT"
  spec.version      = "4.14.22.0"
  spec.summary      = "Tencent GDT Adapters for mediating through SNebula Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAdMediation_GDT_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAdMediation_GDT/SNebulaAdMediation_GDT_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAdMediation_GDT_#{spec.version}/SNebulaAdMediation_GDT.xcframework"
  spec.dependency 'GDTMobSDK', '4.14.22'
  spec.dependency "SNebulaAds"
end
