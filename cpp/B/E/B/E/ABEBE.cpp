#include "ABEBE.h"
#include "A/ABEBEA.h"
#include "B/ABEBEB.h"
#include "C/ABEBEC.h"
#include "D/ABEBED.h"
#include "E/ABEBEE.h"

namespace ABEBE {

std::string run() {
  std::string out("ABEBE");
  out += std::string(SEPARATOR);
  out += ABEBEA::run();
  out += std::string(SEPARATOR);
  out += ABEBEB::run();
  out += std::string(SEPARATOR);
  out += ABEBEC::run();
  out += std::string(SEPARATOR);
  out += ABEBED::run();
  out += std::string(SEPARATOR);
  out += ABEBEE::run();
  return out;
}

}