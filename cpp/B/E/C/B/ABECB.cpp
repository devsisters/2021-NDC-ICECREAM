#include "ABECB.h"
#include "A/ABECBA.h"
#include "B/ABECBB.h"
#include "C/ABECBC.h"
#include "D/ABECBD.h"
#include "E/ABECBE.h"

namespace ABECB {

std::string run() {
  std::string out("ABECB");
  out += std::string(SEPARATOR);
  out += ABECBA::run();
  out += std::string(SEPARATOR);
  out += ABECBB::run();
  out += std::string(SEPARATOR);
  out += ABECBC::run();
  out += std::string(SEPARATOR);
  out += ABECBD::run();
  out += std::string(SEPARATOR);
  out += ABECBE::run();
  return out;
}

}