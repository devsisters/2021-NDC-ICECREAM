#include "ABDCD.h"
#include "A/ABDCDA.h"
#include "B/ABDCDB.h"
#include "C/ABDCDC.h"
#include "D/ABDCDD.h"
#include "E/ABDCDE.h"

namespace ABDCD {

std::string run() {
  std::string out("ABDCD");
  out += std::string(SEPARATOR);
  out += ABDCDA::run();
  out += std::string(SEPARATOR);
  out += ABDCDB::run();
  out += std::string(SEPARATOR);
  out += ABDCDC::run();
  out += std::string(SEPARATOR);
  out += ABDCDD::run();
  out += std::string(SEPARATOR);
  out += ABDCDE::run();
  return out;
}

}