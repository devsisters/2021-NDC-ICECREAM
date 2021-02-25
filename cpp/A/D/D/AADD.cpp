#include "AADD.h"
#include "A/AADDA.h"
#include "B/AADDB.h"
#include "C/AADDC.h"
#include "D/AADDD.h"
#include "E/AADDE.h"

namespace AADD {

std::string run() {
  std::string out("AADD");
  out += std::string(SEPARATOR);
  out += AADDA::run();
  out += std::string(SEPARATOR);
  out += AADDB::run();
  out += std::string(SEPARATOR);
  out += AADDC::run();
  out += std::string(SEPARATOR);
  out += AADDD::run();
  out += std::string(SEPARATOR);
  out += AADDE::run();
  return out;
}

}