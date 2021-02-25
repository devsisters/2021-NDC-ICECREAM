#include "ADACB.h"
#include "A/ADACBA.h"
#include "B/ADACBB.h"
#include "C/ADACBC.h"
#include "D/ADACBD.h"
#include "E/ADACBE.h"

namespace ADACB {

std::string run() {
  std::string out("ADACB");
  out += std::string(SEPARATOR);
  out += ADACBA::run();
  out += std::string(SEPARATOR);
  out += ADACBB::run();
  out += std::string(SEPARATOR);
  out += ADACBC::run();
  out += std::string(SEPARATOR);
  out += ADACBD::run();
  out += std::string(SEPARATOR);
  out += ADACBE::run();
  return out;
}

}