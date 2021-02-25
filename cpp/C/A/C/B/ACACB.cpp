#include "ACACB.h"
#include "A/ACACBA.h"
#include "B/ACACBB.h"
#include "C/ACACBC.h"
#include "D/ACACBD.h"
#include "E/ACACBE.h"

namespace ACACB {

std::string run() {
  std::string out("ACACB");
  out += std::string(SEPARATOR);
  out += ACACBA::run();
  out += std::string(SEPARATOR);
  out += ACACBB::run();
  out += std::string(SEPARATOR);
  out += ACACBC::run();
  out += std::string(SEPARATOR);
  out += ACACBD::run();
  out += std::string(SEPARATOR);
  out += ACACBE::run();
  return out;
}

}