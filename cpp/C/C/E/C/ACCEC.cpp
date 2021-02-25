#include "ACCEC.h"
#include "A/ACCECA.h"
#include "B/ACCECB.h"
#include "C/ACCECC.h"
#include "D/ACCECD.h"
#include "E/ACCECE.h"

namespace ACCEC {

std::string run() {
  std::string out("ACCEC");
  out += std::string(SEPARATOR);
  out += ACCECA::run();
  out += std::string(SEPARATOR);
  out += ACCECB::run();
  out += std::string(SEPARATOR);
  out += ACCECC::run();
  out += std::string(SEPARATOR);
  out += ACCECD::run();
  out += std::string(SEPARATOR);
  out += ACCECE::run();
  return out;
}

}