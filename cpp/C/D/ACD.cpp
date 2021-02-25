#include "ACD.h"
#include "A/ACDA.h"
#include "B/ACDB.h"
#include "C/ACDC.h"
#include "D/ACDD.h"
#include "E/ACDE.h"

namespace ACD {

std::string run() {
  std::string out("ACD");
  out += std::string(SEPARATOR);
  out += ACDA::run();
  out += std::string(SEPARATOR);
  out += ACDB::run();
  out += std::string(SEPARATOR);
  out += ACDC::run();
  out += std::string(SEPARATOR);
  out += ACDD::run();
  out += std::string(SEPARATOR);
  out += ACDE::run();
  return out;
}

}