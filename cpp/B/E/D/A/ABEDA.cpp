#include "ABEDA.h"
#include "A/ABEDAA.h"
#include "B/ABEDAB.h"
#include "C/ABEDAC.h"
#include "D/ABEDAD.h"
#include "E/ABEDAE.h"

namespace ABEDA {

std::string run() {
  std::string out("ABEDA");
  out += std::string(SEPARATOR);
  out += ABEDAA::run();
  out += std::string(SEPARATOR);
  out += ABEDAB::run();
  out += std::string(SEPARATOR);
  out += ABEDAC::run();
  out += std::string(SEPARATOR);
  out += ABEDAD::run();
  out += std::string(SEPARATOR);
  out += ABEDAE::run();
  return out;
}

}