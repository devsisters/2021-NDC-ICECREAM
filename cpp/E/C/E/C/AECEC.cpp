#include "AECEC.h"
#include "A/AECECA.h"
#include "B/AECECB.h"
#include "C/AECECC.h"
#include "D/AECECD.h"
#include "E/AECECE.h"

namespace AECEC {

std::string run() {
  std::string out("AECEC");
  out += std::string(SEPARATOR);
  out += AECECA::run();
  out += std::string(SEPARATOR);
  out += AECECB::run();
  out += std::string(SEPARATOR);
  out += AECECC::run();
  out += std::string(SEPARATOR);
  out += AECECD::run();
  out += std::string(SEPARATOR);
  out += AECECE::run();
  return out;
}

}