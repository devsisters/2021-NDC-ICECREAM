#include "AEACB.h"
#include "A/AEACBA.h"
#include "B/AEACBB.h"
#include "C/AEACBC.h"
#include "D/AEACBD.h"
#include "E/AEACBE.h"

namespace AEACB {

std::string run() {
  std::string out("AEACB");
  out += std::string(SEPARATOR);
  out += AEACBA::run();
  out += std::string(SEPARATOR);
  out += AEACBB::run();
  out += std::string(SEPARATOR);
  out += AEACBC::run();
  out += std::string(SEPARATOR);
  out += AEACBD::run();
  out += std::string(SEPARATOR);
  out += AEACBE::run();
  return out;
}

}