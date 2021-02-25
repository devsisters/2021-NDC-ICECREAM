#include "ACC.h"
#include "A/ACCA.h"
#include "B/ACCB.h"
#include "C/ACCC.h"
#include "D/ACCD.h"
#include "E/ACCE.h"

namespace ACC {

std::string run() {
  std::string out("ACC");
  out += std::string(SEPARATOR);
  out += ACCA::run();
  out += std::string(SEPARATOR);
  out += ACCB::run();
  out += std::string(SEPARATOR);
  out += ACCC::run();
  out += std::string(SEPARATOR);
  out += ACCD::run();
  out += std::string(SEPARATOR);
  out += ACCE::run();
  return out;
}

}