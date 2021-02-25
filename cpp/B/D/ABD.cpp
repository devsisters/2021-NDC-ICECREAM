#include "ABD.h"
#include "A/ABDA.h"
#include "B/ABDB.h"
#include "C/ABDC.h"
#include "D/ABDD.h"
#include "E/ABDE.h"

namespace ABD {

std::string run() {
  std::string out("ABD");
  out += std::string(SEPARATOR);
  out += ABDA::run();
  out += std::string(SEPARATOR);
  out += ABDB::run();
  out += std::string(SEPARATOR);
  out += ABDC::run();
  out += std::string(SEPARATOR);
  out += ABDD::run();
  out += std::string(SEPARATOR);
  out += ABDE::run();
  return out;
}

}