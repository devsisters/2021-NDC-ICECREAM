#include "ADDE.h"
#include "A/ADDEA.h"
#include "B/ADDEB.h"
#include "C/ADDEC.h"
#include "D/ADDED.h"
#include "E/ADDEE.h"

namespace ADDE {

std::string run() {
  std::string out("ADDE");
  out += std::string(SEPARATOR);
  out += ADDEA::run();
  out += std::string(SEPARATOR);
  out += ADDEB::run();
  out += std::string(SEPARATOR);
  out += ADDEC::run();
  out += std::string(SEPARATOR);
  out += ADDED::run();
  out += std::string(SEPARATOR);
  out += ADDEE::run();
  return out;
}

}