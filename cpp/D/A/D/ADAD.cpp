#include "ADAD.h"
#include "A/ADADA.h"
#include "B/ADADB.h"
#include "C/ADADC.h"
#include "D/ADADD.h"
#include "E/ADADE.h"

namespace ADAD {

std::string run() {
  std::string out("ADAD");
  out += std::string(SEPARATOR);
  out += ADADA::run();
  out += std::string(SEPARATOR);
  out += ADADB::run();
  out += std::string(SEPARATOR);
  out += ADADC::run();
  out += std::string(SEPARATOR);
  out += ADADD::run();
  out += std::string(SEPARATOR);
  out += ADADE::run();
  return out;
}

}