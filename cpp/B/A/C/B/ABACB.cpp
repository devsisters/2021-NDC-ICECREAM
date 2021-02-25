#include "ABACB.h"
#include "A/ABACBA.h"
#include "B/ABACBB.h"
#include "C/ABACBC.h"
#include "D/ABACBD.h"
#include "E/ABACBE.h"

namespace ABACB {

std::string run() {
  std::string out("ABACB");
  out += std::string(SEPARATOR);
  out += ABACBA::run();
  out += std::string(SEPARATOR);
  out += ABACBB::run();
  out += std::string(SEPARATOR);
  out += ABACBC::run();
  out += std::string(SEPARATOR);
  out += ABACBD::run();
  out += std::string(SEPARATOR);
  out += ABACBE::run();
  return out;
}

}