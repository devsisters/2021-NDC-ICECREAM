#include "AECEE.h"
#include "A/AECEEA.h"
#include "B/AECEEB.h"
#include "C/AECEEC.h"
#include "D/AECEED.h"
#include "E/AECEEE.h"

namespace AECEE {

std::string run() {
  std::string out("AECEE");
  out += std::string(SEPARATOR);
  out += AECEEA::run();
  out += std::string(SEPARATOR);
  out += AECEEB::run();
  out += std::string(SEPARATOR);
  out += AECEEC::run();
  out += std::string(SEPARATOR);
  out += AECEED::run();
  out += std::string(SEPARATOR);
  out += AECEEE::run();
  return out;
}

}