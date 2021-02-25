#include "ADADB.h"
#include "A/ADADBA.h"
#include "B/ADADBB.h"
#include "C/ADADBC.h"
#include "D/ADADBD.h"
#include "E/ADADBE.h"

namespace ADADB {

std::string run() {
  std::string out("ADADB");
  out += std::string(SEPARATOR);
  out += ADADBA::run();
  out += std::string(SEPARATOR);
  out += ADADBB::run();
  out += std::string(SEPARATOR);
  out += ADADBC::run();
  out += std::string(SEPARATOR);
  out += ADADBD::run();
  out += std::string(SEPARATOR);
  out += ADADBE::run();
  return out;
}

}