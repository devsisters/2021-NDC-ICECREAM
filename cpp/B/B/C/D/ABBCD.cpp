#include "ABBCD.h"
#include "A/ABBCDA.h"
#include "B/ABBCDB.h"
#include "C/ABBCDC.h"
#include "D/ABBCDD.h"
#include "E/ABBCDE.h"

namespace ABBCD {

std::string run() {
  std::string out("ABBCD");
  out += std::string(SEPARATOR);
  out += ABBCDA::run();
  out += std::string(SEPARATOR);
  out += ABBCDB::run();
  out += std::string(SEPARATOR);
  out += ABBCDC::run();
  out += std::string(SEPARATOR);
  out += ABBCDD::run();
  out += std::string(SEPARATOR);
  out += ABBCDE::run();
  return out;
}

}