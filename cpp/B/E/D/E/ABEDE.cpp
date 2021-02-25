#include "ABEDE.h"
#include "A/ABEDEA.h"
#include "B/ABEDEB.h"
#include "C/ABEDEC.h"
#include "D/ABEDED.h"
#include "E/ABEDEE.h"

namespace ABEDE {

std::string run() {
  std::string out("ABEDE");
  out += std::string(SEPARATOR);
  out += ABEDEA::run();
  out += std::string(SEPARATOR);
  out += ABEDEB::run();
  out += std::string(SEPARATOR);
  out += ABEDEC::run();
  out += std::string(SEPARATOR);
  out += ABEDED::run();
  out += std::string(SEPARATOR);
  out += ABEDEE::run();
  return out;
}

}