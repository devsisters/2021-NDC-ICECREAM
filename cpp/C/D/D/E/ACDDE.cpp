#include "ACDDE.h"
#include "A/ACDDEA.h"
#include "B/ACDDEB.h"
#include "C/ACDDEC.h"
#include "D/ACDDED.h"
#include "E/ACDDEE.h"

namespace ACDDE {

std::string run() {
  std::string out("ACDDE");
  out += std::string(SEPARATOR);
  out += ACDDEA::run();
  out += std::string(SEPARATOR);
  out += ACDDEB::run();
  out += std::string(SEPARATOR);
  out += ACDDEC::run();
  out += std::string(SEPARATOR);
  out += ACDDED::run();
  out += std::string(SEPARATOR);
  out += ACDDEE::run();
  return out;
}

}