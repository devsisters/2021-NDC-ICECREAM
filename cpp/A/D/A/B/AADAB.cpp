#include "AADAB.h"
#include "A/AADABA.h"
#include "B/AADABB.h"
#include "C/AADABC.h"
#include "D/AADABD.h"
#include "E/AADABE.h"

namespace AADAB {

std::string run() {
  std::string out("AADAB");
  out += std::string(SEPARATOR);
  out += AADABA::run();
  out += std::string(SEPARATOR);
  out += AADABB::run();
  out += std::string(SEPARATOR);
  out += AADABC::run();
  out += std::string(SEPARATOR);
  out += AADABD::run();
  out += std::string(SEPARATOR);
  out += AADABE::run();
  return out;
}

}