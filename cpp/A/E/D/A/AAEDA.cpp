#include "AAEDA.h"
#include "A/AAEDAA.h"
#include "B/AAEDAB.h"
#include "C/AAEDAC.h"
#include "D/AAEDAD.h"
#include "E/AAEDAE.h"

namespace AAEDA {

std::string run() {
  std::string out("AAEDA");
  out += std::string(SEPARATOR);
  out += AAEDAA::run();
  out += std::string(SEPARATOR);
  out += AAEDAB::run();
  out += std::string(SEPARATOR);
  out += AAEDAC::run();
  out += std::string(SEPARATOR);
  out += AAEDAD::run();
  out += std::string(SEPARATOR);
  out += AAEDAE::run();
  return out;
}

}