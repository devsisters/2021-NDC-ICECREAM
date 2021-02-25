#include "AAABD.h"
#include "A/AAABDA.h"
#include "B/AAABDB.h"
#include "C/AAABDC.h"
#include "D/AAABDD.h"
#include "E/AAABDE.h"

namespace AAABD {

std::string run() {
  std::string out("AAABD");
  out += std::string(SEPARATOR);
  out += AAABDA::run();
  out += std::string(SEPARATOR);
  out += AAABDB::run();
  out += std::string(SEPARATOR);
  out += AAABDC::run();
  out += std::string(SEPARATOR);
  out += AAABDD::run();
  out += std::string(SEPARATOR);
  out += AAABDE::run();
  return out;
}

}