#include "AABDE.h"
#include "A/AABDEA.h"
#include "B/AABDEB.h"
#include "C/AABDEC.h"
#include "D/AABDED.h"
#include "E/AABDEE.h"

namespace AABDE {

std::string run() {
  std::string out("AABDE");
  out += std::string(SEPARATOR);
  out += AABDEA::run();
  out += std::string(SEPARATOR);
  out += AABDEB::run();
  out += std::string(SEPARATOR);
  out += AABDEC::run();
  out += std::string(SEPARATOR);
  out += AABDED::run();
  out += std::string(SEPARATOR);
  out += AABDEE::run();
  return out;
}

}