##工程开发流程

### Bazel 跨平台代码
通过bazel构建grpc的C++开发环境，输出客户端API静态库和后台服务程序；

### Djinni客户端统一接口代码
通过Djinni生成客户端调用API，并由bazel输出的客户端API来实现Djinni规范的C++接口

### 客户端
对于android客户端的实现，通过NDK将Djinni实现的相关C++代码和JNI代码引入并生成so库文件，供android java层代码调用；

###问题（导致无法后续开发）：
1）后台所用mongo数据库，只能通过引入动态库来构建，导致跨平台编译失败；通过源码构建，手动处理依赖文件，最终没有构建成功；

2）Djinni实现C++接口逻辑所需的客户端API静态包构建不完整，虽然能够通过bazel构建测试API的程序，但是静态包所需的依赖文件并没有一并打包，导致客户端API静态包不可用；

##业务逻辑处理（未实现）
使用grpc的SSL加密协议进行通行，防止数据泄漏，对用户的密码进行加密后发送给服务器，保证数据丢失后，明文不可用；

注册时，注意数据库的并发操作，防止脏数据的产生；登录后，会通过注册中心管理登录的grpc服务，当统一用户多次登录时，通过注册中心管理踢出和登入的设备；

实现会遇见的问题：
C++相关程序实现生疏

gprc的接口文档需要熟悉

mongoDB的接口文档需要熟悉
