#include "AACBD.h"
#include "A/AACBDA.h"
#include "B/AACBDB.h"
#include "C/AACBDC.h"
#include "D/AACBDD.h"
#include "E/AACBDE.h"

namespace AACBD {

std::string run() {
  std::string out("AACBD");
  out += std::string(SEPARATOR);
  out += AACBDA::run();
  out += std::string(SEPARATOR);
  out += AACBDB::run();
  out += std::string(SEPARATOR);
  out += AACBDC::run();
  out += std::string(SEPARATOR);
  out += AACBDD::run();
  out += std::string(SEPARATOR);
  out += AACBDE::run();
  return out;
}

}