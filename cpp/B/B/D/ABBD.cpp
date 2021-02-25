#include "ABBD.h"
#include "A/ABBDA.h"
#include "B/ABBDB.h"
#include "C/ABBDC.h"
#include "D/ABBDD.h"
#include "E/ABBDE.h"

namespace ABBD {

std::string run() {
  std::string out("ABBD");
  out += std::string(SEPARATOR);
  out += ABBDA::run();
  out += std::string(SEPARATOR);
  out += ABBDB::run();
  out += std::string(SEPARATOR);
  out += ABBDC::run();
  out += std::string(SEPARATOR);
  out += ABBDD::run();
  out += std::string(SEPARATOR);
  out += ABBDE::run();
  return out;
}

}