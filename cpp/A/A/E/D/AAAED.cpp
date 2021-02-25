#include "AAAED.h"
#include "A/AAAEDA.h"
#include "B/AAAEDB.h"
#include "C/AAAEDC.h"
#include "D/AAAEDD.h"
#include "E/AAAEDE.h"

namespace AAAED {

std::string run() {
  std::string out("AAAED");
  out += std::string(SEPARATOR);
  out += AAAEDA::run();
  out += std::string(SEPARATOR);
  out += AAAEDB::run();
  out += std::string(SEPARATOR);
  out += AAAEDC::run();
  out += std::string(SEPARATOR);
  out += AAAEDD::run();
  out += std::string(SEPARATOR);
  out += AAAEDE::run();
  return out;
}

}