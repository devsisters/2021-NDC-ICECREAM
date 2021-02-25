#include "AECDE.h"
#include "A/AECDEA.h"
#include "B/AECDEB.h"
#include "C/AECDEC.h"
#include "D/AECDED.h"
#include "E/AECDEE.h"

namespace AECDE {

std::string run() {
  std::string out("AECDE");
  out += std::string(SEPARATOR);
  out += AECDEA::run();
  out += std::string(SEPARATOR);
  out += AECDEB::run();
  out += std::string(SEPARATOR);
  out += AECDEC::run();
  out += std::string(SEPARATOR);
  out += AECDED::run();
  out += std::string(SEPARATOR);
  out += AECDEE::run();
  return out;
}

}