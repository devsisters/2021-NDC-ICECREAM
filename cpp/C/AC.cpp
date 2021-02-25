#include "AC.h"
#include "A/ACA.h"
#include "B/ACB.h"
#include "C/ACC.h"
#include "D/ACD.h"
#include "E/ACE.h"

namespace AC {

std::string run() {
  std::string out("AC");
  out += std::string(SEPARATOR);
  out += ACA::run();
  out += std::string(SEPARATOR);
  out += ACB::run();
  out += std::string(SEPARATOR);
  out += ACC::run();
  out += std::string(SEPARATOR);
  out += ACD::run();
  out += std::string(SEPARATOR);
  out += ACE::run();
  return out;
}

}