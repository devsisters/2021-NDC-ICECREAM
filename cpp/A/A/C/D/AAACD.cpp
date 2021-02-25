#include "AAACD.h"
#include "A/AAACDA.h"
#include "B/AAACDB.h"
#include "C/AAACDC.h"
#include "D/AAACDD.h"
#include "E/AAACDE.h"

namespace AAACD {

std::string run() {
  std::string out("AAACD");
  out += std::string(SEPARATOR);
  out += AAACDA::run();
  out += std::string(SEPARATOR);
  out += AAACDB::run();
  out += std::string(SEPARATOR);
  out += AAACDC::run();
  out += std::string(SEPARATOR);
  out += AAACDD::run();
  out += std::string(SEPARATOR);
  out += AAACDE::run();
  return out;
}

}