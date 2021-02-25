#include "AEBDE.h"
#include "A/AEBDEA.h"
#include "B/AEBDEB.h"
#include "C/AEBDEC.h"
#include "D/AEBDED.h"
#include "E/AEBDEE.h"

namespace AEBDE {

std::string run() {
  std::string out("AEBDE");
  out += std::string(SEPARATOR);
  out += AEBDEA::run();
  out += std::string(SEPARATOR);
  out += AEBDEB::run();
  out += std::string(SEPARATOR);
  out += AEBDEC::run();
  out += std::string(SEPARATOR);
  out += AEBDED::run();
  out += std::string(SEPARATOR);
  out += AEBDEE::run();
  return out;
}

}