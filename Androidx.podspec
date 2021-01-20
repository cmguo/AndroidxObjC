Pod::Spec.new do |s|
# pod的名称
  s.name             = 'Androidx'
# pod的版本号
  s.version      = "2.2.0"
# 简介
  s.summary          = 'Androidx'
# 说明描述
  s.description      = '移植 androidx'
# 组件首页
  s.homepage         = 'https://github.com/androidx/androidx'
# 组件功能的效果截图
# s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
# 组件的声明
 s.license          = { :type => 'CopyRight',:text => <<-LICENSE
  LICENSE
  }
# 组件的作者
  s.author           = { 'guochunmao' => 'guochunmao@100tal.com' }
# git：组件的源地址  tag：该组件pod版本对应的git的tag号，默认版本号等于tag号
  s.source           = { :git => 'https://github.com/cmguo/AndroidxObjC.git', :tag => s.version.to_s }
# 个人主页
# s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
# 组件支持的平台
#platform
# 组件支持的系统 iOS OSX
  s.platform     = :ios
# 组件支持的iOS的最低版本号
  s.ios.deployment_target = '8.0'

#build settings
# 是否支持ARC
  s.requires_arc = false
# framework的路径
  s.vendored_frameworks = 'androidx.framework'
# 文件路径
  s.source_files  = 'androidx.framework/Headers/**/*.h'
  s.frameworks    = 'Foundation','UIKit'
  s.library       = 'c++'
# 工程配置列表
#  s.user_target_xcconfig  =  {
#    "FRAMEWORK_SEARCH_PATHS" => "${PODS_ROOT}/Androidx"
#  }

end
