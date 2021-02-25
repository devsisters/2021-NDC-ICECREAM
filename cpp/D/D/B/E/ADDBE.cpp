#include "ADDBE.h"
#include "A/ADDBEA.h"
#include "B/ADDBEB.h"
#include "C/ADDBEC.h"
#include "D/ADDBED.h"
#include "E/ADDBEE.h"

namespace ADDBE {

std::string run() {
  std::string out("ADDBE");
  out += std::string(SEPARATOR);
  out += ADDBEA::run();
  out += std::string(SEPARATOR);
  out += ADDBEB::run();
  out += std::string(SEPARATOR);
  out += ADDBEC::run();
  out += std::string(SEPARATOR);
  out += ADDBED::run();
  out += std::string(SEPARATOR);
  out += ADDBEE::run();
  return out;
}

}