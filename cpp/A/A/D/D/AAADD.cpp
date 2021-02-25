#include "AAADD.h"
#include "A/AAADDA.h"
#include "B/AAADDB.h"
#include "C/AAADDC.h"
#include "D/AAADDD.h"
#include "E/AAADDE.h"

namespace AAADD {

std::string run() {
  std::string out("AAADD");
  out += std::string(SEPARATOR);
  out += AAADDA::run();
  out += std::string(SEPARATOR);
  out += AAADDB::run();
  out += std::string(SEPARATOR);
  out += AAADDC::run();
  out += std::string(SEPARATOR);
  out += AAADDD::run();
  out += std::string(SEPARATOR);
  out += AAADDE::run();
  return out;
}

}