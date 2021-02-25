#include "ABDE.h"
#include "A/ABDEA.h"
#include "B/ABDEB.h"
#include "C/ABDEC.h"
#include "D/ABDED.h"
#include "E/ABDEE.h"

namespace ABDE {

std::string run() {
  std::string out("ABDE");
  out += std::string(SEPARATOR);
  out += ABDEA::run();
  out += std::string(SEPARATOR);
  out += ABDEB::run();
  out += std::string(SEPARATOR);
  out += ABDEC::run();
  out += std::string(SEPARATOR);
  out += ABDED::run();
  out += std::string(SEPARATOR);
  out += ABDEE::run();
  return out;
}

}