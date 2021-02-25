#include "ACCAB.h"
#include "A/ACCABA.h"
#include "B/ACCABB.h"
#include "C/ACCABC.h"
#include "D/ACCABD.h"
#include "E/ACCABE.h"

namespace ACCAB {

std::string run() {
  std::string out("ACCAB");
  out += std::string(SEPARATOR);
  out += ACCABA::run();
  out += std::string(SEPARATOR);
  out += ACCABB::run();
  out += std::string(SEPARATOR);
  out += ACCABC::run();
  out += std::string(SEPARATOR);
  out += ACCABD::run();
  out += std::string(SEPARATOR);
  out += ACCABE::run();
  return out;
}

}