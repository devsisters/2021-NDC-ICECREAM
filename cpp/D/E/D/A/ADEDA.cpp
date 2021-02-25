#include "ADEDA.h"
#include "A/ADEDAA.h"
#include "B/ADEDAB.h"
#include "C/ADEDAC.h"
#include "D/ADEDAD.h"
#include "E/ADEDAE.h"

namespace ADEDA {

std::string run() {
  std::string out("ADEDA");
  out += std::string(SEPARATOR);
  out += ADEDAA::run();
  out += std::string(SEPARATOR);
  out += ADEDAB::run();
  out += std::string(SEPARATOR);
  out += ADEDAC::run();
  out += std::string(SEPARATOR);
  out += ADEDAD::run();
  out += std::string(SEPARATOR);
  out += ADEDAE::run();
  return out;
}

}