#include "AECBD.h"
#include "A/AECBDA.h"
#include "B/AECBDB.h"
#include "C/AECBDC.h"
#include "D/AECBDD.h"
#include "E/AECBDE.h"

namespace AECBD {

std::string run() {
  std::string out("AECBD");
  out += std::string(SEPARATOR);
  out += AECBDA::run();
  out += std::string(SEPARATOR);
  out += AECBDB::run();
  out += std::string(SEPARATOR);
  out += AECBDC::run();
  out += std::string(SEPARATOR);
  out += AECBDD::run();
  out += std::string(SEPARATOR);
  out += AECBDE::run();
  return out;
}

}