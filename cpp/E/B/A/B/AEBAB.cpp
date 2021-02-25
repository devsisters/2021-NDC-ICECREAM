#include "AEBAB.h"
#include "A/AEBABA.h"
#include "B/AEBABB.h"
#include "C/AEBABC.h"
#include "D/AEBABD.h"
#include "E/AEBABE.h"

namespace AEBAB {

std::string run() {
  std::string out("AEBAB");
  out += std::string(SEPARATOR);
  out += AEBABA::run();
  out += std::string(SEPARATOR);
  out += AEBABB::run();
  out += std::string(SEPARATOR);
  out += AEBABC::run();
  out += std::string(SEPARATOR);
  out += AEBABD::run();
  out += std::string(SEPARATOR);
  out += AEBABE::run();
  return out;
}

}