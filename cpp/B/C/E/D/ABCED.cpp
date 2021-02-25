#include "ABCED.h"
#include "A/ABCEDA.h"
#include "B/ABCEDB.h"
#include "C/ABCEDC.h"
#include "D/ABCEDD.h"
#include "E/ABCEDE.h"

namespace ABCED {

std::string run() {
  std::string out("ABCED");
  out += std::string(SEPARATOR);
  out += ABCEDA::run();
  out += std::string(SEPARATOR);
  out += ABCEDB::run();
  out += std::string(SEPARATOR);
  out += ABCEDC::run();
  out += std::string(SEPARATOR);
  out += ABCEDD::run();
  out += std::string(SEPARATOR);
  out += ABCEDE::run();
  return out;
}

}