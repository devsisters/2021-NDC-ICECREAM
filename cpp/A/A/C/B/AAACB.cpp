#include "AAACB.h"
#include "A/AAACBA.h"
#include "B/AAACBB.h"
#include "C/AAACBC.h"
#include "D/AAACBD.h"
#include "E/AAACBE.h"

namespace AAACB {

std::string run() {
  std::string out("AAACB");
  out += std::string(SEPARATOR);
  out += AAACBA::run();
  out += std::string(SEPARATOR);
  out += AAACBB::run();
  out += std::string(SEPARATOR);
  out += AAACBC::run();
  out += std::string(SEPARATOR);
  out += AAACBD::run();
  out += std::string(SEPARATOR);
  out += AAACBE::run();
  return out;
}

}