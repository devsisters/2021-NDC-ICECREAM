#include "ABDAB.h"
#include "A/ABDABA.h"
#include "B/ABDABB.h"
#include "C/ABDABC.h"
#include "D/ABDABD.h"
#include "E/ABDABE.h"

namespace ABDAB {

std::string run() {
  std::string out("ABDAB");
  out += std::string(SEPARATOR);
  out += ABDABA::run();
  out += std::string(SEPARATOR);
  out += ABDABB::run();
  out += std::string(SEPARATOR);
  out += ABDABC::run();
  out += std::string(SEPARATOR);
  out += ABDABD::run();
  out += std::string(SEPARATOR);
  out += ABDABE::run();
  return out;
}

}