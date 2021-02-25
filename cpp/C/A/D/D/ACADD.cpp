#include "ACADD.h"
#include "A/ACADDA.h"
#include "B/ACADDB.h"
#include "C/ACADDC.h"
#include "D/ACADDD.h"
#include "E/ACADDE.h"

namespace ACADD {

std::string run() {
  std::string out("ACADD");
  out += std::string(SEPARATOR);
  out += ACADDA::run();
  out += std::string(SEPARATOR);
  out += ACADDB::run();
  out += std::string(SEPARATOR);
  out += ACADDC::run();
  out += std::string(SEPARATOR);
  out += ACADDD::run();
  out += std::string(SEPARATOR);
  out += ACADDE::run();
  return out;
}

}