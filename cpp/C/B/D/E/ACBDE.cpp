#include "ACBDE.h"
#include "A/ACBDEA.h"
#include "B/ACBDEB.h"
#include "C/ACBDEC.h"
#include "D/ACBDED.h"
#include "E/ACBDEE.h"

namespace ACBDE {

std::string run() {
  std::string out("ACBDE");
  out += std::string(SEPARATOR);
  out += ACBDEA::run();
  out += std::string(SEPARATOR);
  out += ACBDEB::run();
  out += std::string(SEPARATOR);
  out += ACBDEC::run();
  out += std::string(SEPARATOR);
  out += ACBDED::run();
  out += std::string(SEPARATOR);
  out += ACBDEE::run();
  return out;
}

}