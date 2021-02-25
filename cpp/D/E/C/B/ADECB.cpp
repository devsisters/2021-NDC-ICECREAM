#include "ADECB.h"
#include "A/ADECBA.h"
#include "B/ADECBB.h"
#include "C/ADECBC.h"
#include "D/ADECBD.h"
#include "E/ADECBE.h"

namespace ADECB {

std::string run() {
  std::string out("ADECB");
  out += std::string(SEPARATOR);
  out += ADECBA::run();
  out += std::string(SEPARATOR);
  out += ADECBB::run();
  out += std::string(SEPARATOR);
  out += ADECBC::run();
  out += std::string(SEPARATOR);
  out += ADECBD::run();
  out += std::string(SEPARATOR);
  out += ADECBE::run();
  return out;
}

}