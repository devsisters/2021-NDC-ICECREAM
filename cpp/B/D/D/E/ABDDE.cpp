#include "ABDDE.h"
#include "A/ABDDEA.h"
#include "B/ABDDEB.h"
#include "C/ABDDEC.h"
#include "D/ABDDED.h"
#include "E/ABDDEE.h"

namespace ABDDE {

std::string run() {
  std::string out("ABDDE");
  out += std::string(SEPARATOR);
  out += ABDDEA::run();
  out += std::string(SEPARATOR);
  out += ABDDEB::run();
  out += std::string(SEPARATOR);
  out += ABDDEC::run();
  out += std::string(SEPARATOR);
  out += ABDDED::run();
  out += std::string(SEPARATOR);
  out += ABDDEE::run();
  return out;
}

}