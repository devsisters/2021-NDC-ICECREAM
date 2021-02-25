#include "AECAB.h"
#include "A/AECABA.h"
#include "B/AECABB.h"
#include "C/AECABC.h"
#include "D/AECABD.h"
#include "E/AECABE.h"

namespace AECAB {

std::string run() {
  std::string out("AECAB");
  out += std::string(SEPARATOR);
  out += AECABA::run();
  out += std::string(SEPARATOR);
  out += AECABB::run();
  out += std::string(SEPARATOR);
  out += AECABC::run();
  out += std::string(SEPARATOR);
  out += AECABD::run();
  out += std::string(SEPARATOR);
  out += AECABE::run();
  return out;
}

}