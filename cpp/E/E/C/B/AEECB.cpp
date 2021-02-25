#include "AEECB.h"
#include "A/AEECBA.h"
#include "B/AEECBB.h"
#include "C/AEECBC.h"
#include "D/AEECBD.h"
#include "E/AEECBE.h"

namespace AEECB {

std::string run() {
  std::string out("AEECB");
  out += std::string(SEPARATOR);
  out += AEECBA::run();
  out += std::string(SEPARATOR);
  out += AEECBB::run();
  out += std::string(SEPARATOR);
  out += AEECBC::run();
  out += std::string(SEPARATOR);
  out += AEECBD::run();
  out += std::string(SEPARATOR);
  out += AEECBE::run();
  return out;
}

}