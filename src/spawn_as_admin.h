#ifndef SRC_RUNAS_H_
#define SRC_RUNAS_H_

#include <string>
#include <vector>

namespace spawn_as_admin {

struct Session {
  void *payload;
  int pid;
  int stdin_file_descriptor;
  int stdout_file_descriptor;
};

Session StartSpawnAsAdmin(const std::string &command, const std::vector<std::string> &args, bool admin);

int FinishSpawnAsAdmin(Session *session);

}  // namespace runas

#endif  // SRC_RUNAS_H_