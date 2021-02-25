#include "AEACD.h"
#include "A/AEACDA.h"
#include "B/AEACDB.h"
#include "C/AEACDC.h"
#include "D/AEACDD.h"
#include "E/AEACDE.h"

namespace AEACD {

std::string run() {
  std::string out("AEACD");
  out += std::string(SEPARATOR);
  out += AEACDA::run();
  out += std::string(SEPARATOR);
  out += AEACDB::run();
  out += std::string(SEPARATOR);
  out += AEACDC::run();
  out += std::string(SEPARATOR);
  out += AEACDD::run();
  out += std::string(SEPARATOR);
  out += AEACDE::run();
  return out;
}

}