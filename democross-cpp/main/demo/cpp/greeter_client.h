#ifndef GREETER_CLIENT_H
#define GREETER_CLIENT_H

#include <memory>
#include <string>
#include <grpc++/grpc++.h>

#include "main/demo/proto/loginmanager.pb.h"
#include "main/demo/proto/loginmanager.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using loginmanager::LoginRequest;
using loginmanager::LoginReply;
using loginmanager::RegisterRequest;
using loginmanager::RegisterReply;
using loginmanager::LoginManager;

class GreeterClient {
 public:
  GreeterClient(std::shared_ptr<Channel> channel);
  // Assambles the client's payload, sends it and presents the
  // response back from the server.
  std::string registerAccount(const std::string& user, const std::string& pwd);

 private:
  std::unique_ptr<LoginManager::Stub> stub_;
};

#endif
