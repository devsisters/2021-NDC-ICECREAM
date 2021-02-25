#include "AADAD.h"
#include "A/AADADA.h"
#include "B/AADADB.h"
#include "C/AADADC.h"
#include "D/AADADD.h"
#include "E/AADADE.h"

namespace AADAD {

std::string run() {
  std::string out("AADAD");
  out += std::string(SEPARATOR);
  out += AADADA::run();
  out += std::string(SEPARATOR);
  out += AADADB::run();
  out += std::string(SEPARATOR);
  out += AADADC::run();
  out += std::string(SEPARATOR);
  out += AADADD::run();
  out += std::string(SEPARATOR);
  out += AADADE::run();
  return out;
}

}