#include "ACAB.h"
#include "A/ACABA.h"
#include "B/ACABB.h"
#include "C/ACABC.h"
#include "D/ACABD.h"
#include "E/ACABE.h"

namespace ACAB {

std::string run() {
  std::string out("ACAB");
  out += std::string(SEPARATOR);
  out += ACABA::run();
  out += std::string(SEPARATOR);
  out += ACABB::run();
  out += std::string(SEPARATOR);
  out += ACABC::run();
  out += std::string(SEPARATOR);
  out += ACABD::run();
  out += std::string(SEPARATOR);
  out += ACABE::run();
  return out;
}

}