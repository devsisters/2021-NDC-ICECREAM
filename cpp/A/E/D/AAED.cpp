#include "AAED.h"
#include "A/AAEDA.h"
#include "B/AAEDB.h"
#include "C/AAEDC.h"
#include "D/AAEDD.h"
#include "E/AAEDE.h"

namespace AAED {

std::string run() {
  std::string out("AAED");
  out += std::string(SEPARATOR);
  out += AAEDA::run();
  out += std::string(SEPARATOR);
  out += AAEDB::run();
  out += std::string(SEPARATOR);
  out += AAEDC::run();
  out += std::string(SEPARATOR);
  out += AAEDD::run();
  out += std::string(SEPARATOR);
  out += AAEDE::run();
  return out;
}

}