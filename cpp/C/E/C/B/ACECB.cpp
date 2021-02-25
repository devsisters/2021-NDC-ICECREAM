#include "ACECB.h"
#include "A/ACECBA.h"
#include "B/ACECBB.h"
#include "C/ACECBC.h"
#include "D/ACECBD.h"
#include "E/ACECBE.h"

namespace ACECB {

std::string run() {
  std::string out("ACECB");
  out += std::string(SEPARATOR);
  out += ACECBA::run();
  out += std::string(SEPARATOR);
  out += ACECBB::run();
  out += std::string(SEPARATOR);
  out += ACECBC::run();
  out += std::string(SEPARATOR);
  out += ACECBD::run();
  out += std::string(SEPARATOR);
  out += ACECBE::run();
  return out;
}

}