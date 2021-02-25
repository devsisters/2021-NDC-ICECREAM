#include "AEEBE.h"
#include "A/AEEBEA.h"
#include "B/AEEBEB.h"
#include "C/AEEBEC.h"
#include "D/AEEBED.h"
#include "E/AEEBEE.h"

namespace AEEBE {

std::string run() {
  std::string out("AEEBE");
  out += std::string(SEPARATOR);
  out += AEEBEA::run();
  out += std::string(SEPARATOR);
  out += AEEBEB::run();
  out += std::string(SEPARATOR);
  out += AEEBEC::run();
  out += std::string(SEPARATOR);
  out += AEEBED::run();
  out += std::string(SEPARATOR);
  out += AEEBEE::run();
  return out;
}

}