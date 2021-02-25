#include "ABEAE.h"
#include "A/ABEAEA.h"
#include "B/ABEAEB.h"
#include "C/ABEAEC.h"
#include "D/ABEAED.h"
#include "E/ABEAEE.h"

namespace ABEAE {

std::string run() {
  std::string out("ABEAE");
  out += std::string(SEPARATOR);
  out += ABEAEA::run();
  out += std::string(SEPARATOR);
  out += ABEAEB::run();
  out += std::string(SEPARATOR);
  out += ABEAEC::run();
  out += std::string(SEPARATOR);
  out += ABEAED::run();
  out += std::string(SEPARATOR);
  out += ABEAEE::run();
  return out;
}

}