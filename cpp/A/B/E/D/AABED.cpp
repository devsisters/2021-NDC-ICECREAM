#include "AABED.h"
#include "A/AABEDA.h"
#include "B/AABEDB.h"
#include "C/AABEDC.h"
#include "D/AABEDD.h"
#include "E/AABEDE.h"

namespace AABED {

std::string run() {
  std::string out("AABED");
  out += std::string(SEPARATOR);
  out += AABEDA::run();
  out += std::string(SEPARATOR);
  out += AABEDB::run();
  out += std::string(SEPARATOR);
  out += AABEDC::run();
  out += std::string(SEPARATOR);
  out += AABEDD::run();
  out += std::string(SEPARATOR);
  out += AABEDE::run();
  return out;
}

}