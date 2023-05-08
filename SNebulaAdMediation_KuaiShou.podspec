Pod::Spec.new do |spec|
  spec.name         = "SNebulaAdMediation_KuaiShou"
  spec.version      = "3.3.44.0"
  spec.summary      = "KuaiShow GDT Adapters for mediating through SNebula Ads."
  spec.homepage     = "https://github.com/webeyemob/SNebula-iOS-Pub"
  spec.license      = { :type => 'MIT', :file => "SNebulaAdMediation_KuaiShou_#{spec.version}/LICENSE" }
  spec.author       = "SNebulaAds"
  spec.platform     = :ios, "12.0"
  spec.source       = { :http => "https://github.com/webeyemob/SNebula-iOS-Pub/raw/master/SNebulaAdMediation_KuaiShou/SNebulaAdMediation_KuaiShou_#{spec.version}.zip" }
  spec.vendored_frameworks  = "SNebulaAdMediation_KuaiShou_#{spec.version}/SNebulaAdMediation_KuaiShou.xcframework"
  spec.dependency 'KSAdSDK', '3.3.44'
  spec.dependency "SNebulaAds"
end
