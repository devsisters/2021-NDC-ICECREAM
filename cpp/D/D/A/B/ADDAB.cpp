#include "ADDAB.h"
#include "A/ADDABA.h"
#include "B/ADDABB.h"
#include "C/ADDABC.h"
#include "D/ADDABD.h"
#include "E/ADDABE.h"

namespace ADDAB {

std::string run() {
  std::string out("ADDAB");
  out += std::string(SEPARATOR);
  out += ADDABA::run();
  out += std::string(SEPARATOR);
  out += ADDABB::run();
  out += std::string(SEPARATOR);
  out += ADDABC::run();
  out += std::string(SEPARATOR);
  out += ADDABD::run();
  out += std::string(SEPARATOR);
  out += ADDABE::run();
  return out;
}

}