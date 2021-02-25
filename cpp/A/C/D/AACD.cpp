#include "AACD.h"
#include "A/AACDA.h"
#include "B/AACDB.h"
#include "C/AACDC.h"
#include "D/AACDD.h"
#include "E/AACDE.h"

namespace AACD {

std::string run() {
  std::string out("AACD");
  out += std::string(SEPARATOR);
  out += AACDA::run();
  out += std::string(SEPARATOR);
  out += AACDB::run();
  out += std::string(SEPARATOR);
  out += AACDC::run();
  out += std::string(SEPARATOR);
  out += AACDD::run();
  out += std::string(SEPARATOR);
  out += AACDE::run();
  return out;
}

}