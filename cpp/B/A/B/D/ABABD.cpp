#include "ABABD.h"
#include "A/ABABDA.h"
#include "B/ABABDB.h"
#include "C/ABABDC.h"
#include "D/ABABDD.h"
#include "E/ABABDE.h"

namespace ABABD {

std::string run() {
  std::string out("ABABD");
  out += std::string(SEPARATOR);
  out += ABABDA::run();
  out += std::string(SEPARATOR);
  out += ABABDB::run();
  out += std::string(SEPARATOR);
  out += ABABDC::run();
  out += std::string(SEPARATOR);
  out += ABABDD::run();
  out += std::string(SEPARATOR);
  out += ABABDE::run();
  return out;
}

}