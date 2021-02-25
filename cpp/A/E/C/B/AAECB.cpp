#include "AAECB.h"
#include "A/AAECBA.h"
#include "B/AAECBB.h"
#include "C/AAECBC.h"
#include "D/AAECBD.h"
#include "E/AAECBE.h"

namespace AAECB {

std::string run() {
  std::string out("AAECB");
  out += std::string(SEPARATOR);
  out += AAECBA::run();
  out += std::string(SEPARATOR);
  out += AAECBB::run();
  out += std::string(SEPARATOR);
  out += AAECBC::run();
  out += std::string(SEPARATOR);
  out += AAECBD::run();
  out += std::string(SEPARATOR);
  out += AAECBE::run();
  return out;
}

}