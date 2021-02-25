#include "ADDDE.h"
#include "A/ADDDEA.h"
#include "B/ADDDEB.h"
#include "C/ADDDEC.h"
#include "D/ADDDED.h"
#include "E/ADDDEE.h"

namespace ADDDE {

std::string run() {
  std::string out("ADDDE");
  out += std::string(SEPARATOR);
  out += ADDDEA::run();
  out += std::string(SEPARATOR);
  out += ADDDEB::run();
  out += std::string(SEPARATOR);
  out += ADDDEC::run();
  out += std::string(SEPARATOR);
  out += ADDDED::run();
  out += std::string(SEPARATOR);
  out += ADDDEE::run();
  return out;
}

}