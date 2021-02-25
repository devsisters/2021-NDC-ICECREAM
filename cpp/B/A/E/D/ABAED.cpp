#include "ABAED.h"
#include "A/ABAEDA.h"
#include "B/ABAEDB.h"
#include "C/ABAEDC.h"
#include "D/ABAEDD.h"
#include "E/ABAEDE.h"

namespace ABAED {

std::string run() {
  std::string out("ABAED");
  out += std::string(SEPARATOR);
  out += ABAEDA::run();
  out += std::string(SEPARATOR);
  out += ABAEDB::run();
  out += std::string(SEPARATOR);
  out += ABAEDC::run();
  out += std::string(SEPARATOR);
  out += ABAEDD::run();
  out += std::string(SEPARATOR);
  out += ABAEDE::run();
  return out;
}

}