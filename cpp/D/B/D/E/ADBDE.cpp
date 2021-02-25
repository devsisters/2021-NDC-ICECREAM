#include "ADBDE.h"
#include "A/ADBDEA.h"
#include "B/ADBDEB.h"
#include "C/ADBDEC.h"
#include "D/ADBDED.h"
#include "E/ADBDEE.h"

namespace ADBDE {

std::string run() {
  std::string out("ADBDE");
  out += std::string(SEPARATOR);
  out += ADBDEA::run();
  out += std::string(SEPARATOR);
  out += ADBDEB::run();
  out += std::string(SEPARATOR);
  out += ADBDEC::run();
  out += std::string(SEPARATOR);
  out += ADBDED::run();
  out += std::string(SEPARATOR);
  out += ADBDEE::run();
  return out;
}

}