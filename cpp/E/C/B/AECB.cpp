#include "AECB.h"
#include "A/AECBA.h"
#include "B/AECBB.h"
#include "C/AECBC.h"
#include "D/AECBD.h"
#include "E/AECBE.h"

namespace AECB {

std::string run() {
  std::string out("AECB");
  out += std::string(SEPARATOR);
  out += AECBA::run();
  out += std::string(SEPARATOR);
  out += AECBB::run();
  out += std::string(SEPARATOR);
  out += AECBC::run();
  out += std::string(SEPARATOR);
  out += AECBD::run();
  out += std::string(SEPARATOR);
  out += AECBE::run();
  return out;
}

}