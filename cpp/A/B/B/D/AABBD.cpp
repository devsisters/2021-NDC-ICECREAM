#include "AABBD.h"
#include "A/AABBDA.h"
#include "B/AABBDB.h"
#include "C/AABBDC.h"
#include "D/AABBDD.h"
#include "E/AABBDE.h"

namespace AABBD {

std::string run() {
  std::string out("AABBD");
  out += std::string(SEPARATOR);
  out += AABBDA::run();
  out += std::string(SEPARATOR);
  out += AABBDB::run();
  out += std::string(SEPARATOR);
  out += AABBDC::run();
  out += std::string(SEPARATOR);
  out += AABBDD::run();
  out += std::string(SEPARATOR);
  out += AABBDE::run();
  return out;
}

}