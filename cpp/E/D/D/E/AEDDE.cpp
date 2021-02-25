#include "AEDDE.h"
#include "A/AEDDEA.h"
#include "B/AEDDEB.h"
#include "C/AEDDEC.h"
#include "D/AEDDED.h"
#include "E/AEDDEE.h"

namespace AEDDE {

std::string run() {
  std::string out("AEDDE");
  out += std::string(SEPARATOR);
  out += AEDDEA::run();
  out += std::string(SEPARATOR);
  out += AEDDEB::run();
  out += std::string(SEPARATOR);
  out += AEDDEC::run();
  out += std::string(SEPARATOR);
  out += AEDDED::run();
  out += std::string(SEPARATOR);
  out += AEDDEE::run();
  return out;
}

}