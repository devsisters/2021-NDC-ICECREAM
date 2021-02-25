#include "AACB.h"
#include "A/AACBA.h"
#include "B/AACBB.h"
#include "C/AACBC.h"
#include "D/AACBD.h"
#include "E/AACBE.h"

namespace AACB {

std::string run() {
  std::string out("AACB");
  out += std::string(SEPARATOR);
  out += AACBA::run();
  out += std::string(SEPARATOR);
  out += AACBB::run();
  out += std::string(SEPARATOR);
  out += AACBC::run();
  out += std::string(SEPARATOR);
  out += AACBD::run();
  out += std::string(SEPARATOR);
  out += AACBE::run();
  return out;
}

}